#include QMK_KEYBOARD_H
#include "action_layer.h"

extern keymap_config_t keymap_config;

#define _BASE 0
#define _SYMB 1
#define _META 2

#define KC_____ KC_TRNS
#define KC_LCA LCA_T(KC_NO)
#define KC_META MO(_META)
#define KC_SYMB MO(_SYMB)

#define KC_LCLB LCTL_T(KC_LBRC)
#define KC_SYSP LT(_SYMB, KC_SPC)
#define KC_MTBS LT(_META, KC_BSPC)
#define KC_RCEN RCTL_T(KC_ENT)
#define KC_RAMN RALT_T(KC_MINS)
#define KC_RGEQ RGUI_T(KC_EQL)
#define KC_SGBL SGUI_T(KC_BSLS)

enum custom_keycodes {
  KC_LGHS = SAFE_RANGE, // LCTL_T(KC_LBRC)
  KC_LALC, // LALT_T(KC_LCBR)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_kc(
  // ┌────┬────┬────┬────┬────┬────┬────┐┌────┬────┬────┬────┬────┬────┬────┐
      GRV ,GESC, Q  , W  , E  , R  ,  T ,  Y  , U  , I  , O  , P  ,MINS,BSPC,
  // ├────┼────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┼────┤
      LCA ,TAB , A  , S  , D  , F  , G  ,  H  , J  , K  , L  ,SCLN,QUOT,ENT ,
  // ├────┼────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┼────┤
      LGUI,LSPO, Z  , X  , C  , V  , B  ,  N  , M  ,COMM,DOT ,SLSH,RSPC,RGUI,
  // ├────┼────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┼────┤
      META,HYPR,LCA ,LGHS,LALC,LCLB,SYSP, MTBS,RCEN,RAMN,RGEQ,SGBL,MEH ,SYMB
  // └────┴────┴────┴────┴────┴────┴────┘└────┴────┴────┴────┴────┴────┴────┘
  ),

  [_SYMB] = LAYOUT_kc(
  // ┌────┬────┬────┬────┬────┬────┬────┐┌────┬────┬────┬────┬────┬────┬────┐
      ____,____,EXLM, AT ,HASH,DLR ,PERC, CIRC,AMPR,ASTR,LPRN,RPRN,____,____,
  // ├────┼────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┼────┤
      ____,____, 1  , 2  , 3  , 4  , 5  ,  6  , 7  , 8  , 9  , 0  ,____,____,
  // ├────┼────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┼────┤
      ____,____,GRV ,LCBR,LBRC,LPRN,MINS, EQL ,RPRN,RBRC,RCBR,SLSH,____,____,
  // ├────┼────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┼────┤
      ____,____,____,____,____,____,____, ____,____,____,____,____,____,____
  // └────┴────┴────┴────┴────┴────┴────┘└────┴────┴────┴────┴────┴────┴────┘
  ),

  [_META] = LAYOUT_kc(
  // ┌────┬────┬────┬────┬────┬────┬────┐┌────┬────┬────┬────┬────┬────┬────┐
      ____,____,____,____,____,____,____, HOME,PGUP, UP ,PGDN,____,____,____,
  // ├────┼────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┼────┤
      ____,____,____,____,____,____,____, END ,LEFT,DOWN,RGHT,____,____,____,
  // ├────┼────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┼────┤
      ____,____, F1 , F2 , F3 , F4 , F5 ,  F6 , F7 , F8 , F9 ,F10 ,F11 ,F12 ,
  // ├────┼────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┼────┤
      ____,____,____,____,BRID,BRIU,____, ____,MPLY,MUTE,VOLU,VOLD,____,____
  // └────┴────┴────┴────┴────┴────┴────┘└────┴────┴────┴────┴────┴────┴────┘
  )

};

void shifted_lt(uint16_t mod, uint16_t unshifted, keyrecord_t *record, uint16_t *timer) {
  if (record->event.pressed) {
    *timer = timer_read();
    register_mods(MOD_BIT(mod));
  }
  else {
    unregister_mods(MOD_BIT(mod));
    if (timer_elapsed(*timer) < TAPPING_TERM) {
      register_mods(MOD_BIT(KC_LSFT));
      tap_code(unshifted);
      unregister_mods(MOD_BIT(KC_LSFT));
    }
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case KC_LGHS: {
      static uint16_t lghs_timer = 0;
      shifted_lt(KC_LGUI, KC_3, record, &lghs_timer);
      return false;
    }
    case KC_LALC: {
      static uint16_t lalc_timer = 0;
      shifted_lt(KC_LALT, KC_LBRC, record, &lalc_timer);
      return false;
    }
    default: {
      return true;
    }
  }
}
