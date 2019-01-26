#include QMK_KEYBOARD_H
#include "action_layer.h"

extern keymap_config_t keymap_config;

#define _BASE 0
#define _SYMB 1
#define _META 2

#define KC_____ KC_TRNS
#define KC_RST RESET
#define KC_META MO(_META)
#define KC_SYMB MO(_SYMB)

#define KC_LCTB LCTL_T(KC_TAB)
#define KC_LCA LCA_T(KC_NO)
#define KC_LAL2 LALT_T(KC_LANG2)
#define KC_LCSP LCTL_T(KC_SPC)
#define KC_SYMN LT(_SYMB, KC_MINS)
#define KC_MTEQ LT(_META, KC_EQL)
#define KC_RCBS RCTL_T(KC_BSPC)
#define KC_RCDL RCTL_T(KC_DEL)
#define KC_RAL1 RALT_T(KC_LANG1)
#define KC_RGDL RGUI_T(KC_DEL)
#define KC_SGUI SGUI_T(KC_NO)
#define KC_SFEN KC_SFTENT
#define KC_NXTB LCTL(KC_TAB)
#define KC_PVTB LCTL(LSFT(KC_TAB))
#define KC_EXPR LALT(LSFT(KC_UP))
#define KC_CNTR LALT(LSFT(KC_DOWN))

enum custom_keycodes {
  KC_LGTL = SAFE_RANGE, // LGUI_T(KC_TILD)
};

// TODO: LGTL, RGDL can be better

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_kc(
  // ┌────┬────┬────┬────┬────┬────┬────┐┌────┬────┬────┬────┬────┬────┬────┐
      GRV ,GESC, Q  , W  , E  , R  , T  ,  Y  , U  , I  , O  , P  ,BSLS,BSPC,
  // ├────┼────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┼────┤
      LCA ,LCTB, A  , S  , D  , F  , G  ,  H  , J  , K  , L  ,SCLN,QUOT,ENT ,
  // ├────┼────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┼────┤
      LGUI,LSPO, Z  , X  , C  , V  , B  ,  N  , M  ,COMM,DOT ,SLSH,SFEN,RGUI,
  // ├────┼────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┼────┤
      META,HYPR,LCA ,LGTL,LAL2,LCSP,SYMN, MTEQ,RCBS,RAL1,RGDL,SGUI,MEH ,SYMB
  // └────┴────┴────┴────┴────┴────┴────┘└────┴────┴────┴────┴────┴────┴────┘
  ),

  [_SYMB] = LAYOUT_kc(
  // ┌────┬────┬────┬────┬────┬────┬────┐┌────┬────┬────┬────┬────┬────┬────┐
      ____,____,EXLM, AT ,HASH,DLR ,PERC, CIRC,AMPR,ASTR,LPRN,RPRN,____,____,
  // ├────┼────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┼────┤
      ____,____, 1  , 2  , 3  , 4  , 5  ,  6  , 7  , 8  , 9  , 0  ,____,____,
  // ├────┼────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┼────┤
      ____,____,GRV ,LPRN,LBRC,LCBR,EQL , PLUS,RCBR,RBRC,RPRN,SLSH,____,____,
  // ├────┼────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┼────┤
      ____,____,____,____,____,____,____, ____,RCDL,____,____,____,____,____
  // └────┴────┴────┴────┴────┴────┴────┘└────┴────┴────┴────┴────┴────┴────┘
  ),

  [_META] = LAYOUT_kc(
  // ┌────┬────┬────┬────┬────┬────┬────┐┌────┬────┬────┬────┬────┬────┬────┐
      ____, F1 , F2 , F3 , F4 , F5 , F6 , PGUP,PVTB, UP ,NXTB,EXPR,HOME,____,
  // ├────┼────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┼────┤
      RST , F7 , F8 , F9 ,F10 ,F11 ,F12 , PGDN,LEFT,DOWN,RGHT,CNTR,END ,____,
  // ├────┼────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┼────┤
      ____,____,____,____,BRID,BRIU,____, MUTE,VOLD,VOLU,MPLY,RSFT,____,____,
  // ├────┼────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┼────┤
      ____,____,____,____,____,____,____, ____,____,____,____,____,____,____
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
    case KC_LGTL: {
      static uint16_t lgtl_timer = 0;
      shifted_lt(KC_LGUI, KC_GRV, record, &lgtl_timer);
      return false;
    }
    default: {
      return true;
    }
  }
}
