#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BASE 0
#define _SYMB 1
#define _META 2
#define _ADJUST 16

#define KC_____ KC_TRNS
#define KC_RST RESET
#define KC_META MO(_META)
#define KC_SYMB MO(_SYMB)

#define KC_LCTB LCTL_T(KC_TAB)
#define KC_LCA LCA_T(KC_NO)
#define KC_LAL2 LALT_T(KC_LANG2)
#define KC_LCSP LCTL_T(KC_SPC)
#define KC_SYEQ LT(_SYMB, KC_EQL)
#define KC_MTMN LT(_META, KC_MINS)
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
  QWERTY = SAFE_RANGE,
  COLEMAK,
  DVORAK,
  KC_LGTL,
};

#define ADJUST MO(_ADJUST)


// TODO: LGTL, RGDL can be better

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_kc(
  // ┌────┬────┬────┬────┬────┬────┐┌────┬────┬────┬────┬────┬────┐
      GESC, Q  , W  , E  , R  , T  ,  Y  , U  , I  , O  , P  ,BSLS,
  // ├────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┤
      LCTB, A  , S  , D  , F  , G  ,  H  , J  , K  , L  ,SCLN,QUOT,
  // ├────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┤
      LSPO, Z  , X  , C  , V  , B  ,  N  , M  ,COMM,DOT ,SLSH,SFEN,
  // ├────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┤
      HYPR,LCA ,LGUI,LAL2,LCSP,SYEQ, MTMN,RCBS,RAL1,RGDL,SGUI,MEH 
  // └────┴────┴────┴────┴────┴────┘└────┴────┴────┴────┴────┴────┘
  ),

  [_SYMB] = LAYOUT_kc(
  // ┌────┬────┬────┬────┬────┬────┐┌────┬────┬────┬────┬────┬────┐
      ____,EXLM, AT ,HASH,DLR ,PERC, CIRC,AMPR,ASTR,LPRN,RPRN,____,
  // ├────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┤
      ____, 1  , 2  , 3  , 4  , 5  ,  6  , 7  , 8  , 9  , 0  ,____,
  // ├────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┤
      ____,GRV ,LPRN,LBRC,LCBR,EQL , PLUS,RCBR,RBRC,RPRN,SLSH,____,
  // ├────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┤
      ____,____,____,____,____,____, ____,RCDL,____,____,____,____
  // └────┴────┴────┴────┴────┴────┘└────┴────┴────┴────┴────┴────┘
  ),

  [_META] = LAYOUT_kc(
  // ┌────┬────┬────┬────┬────┬────┐┌────┬────┬────┬────┬────┬────┐
       F1 , F2 , F3 , F4 , F5 , F6 , PGUP,PVTB, UP ,NXTB,EXPR,HOME,
  // ├────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┤
       F7 , F8 , F9 ,F10 ,F11 ,F12 , PGDN,LEFT,DOWN,RGHT,CNTR,END ,
  // ├────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┤
      RST ,____,____,BRID,BRIU,____, MUTE,VOLD,VOLU,MPLY,RSFT,____,
  // ├────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┤
      ____,____,____,____,____,____, ____,____,____,____,____,____
  // └────┴────┴────┴────┴────┴────┘└────┴────┴────┴────┴────┴────┘
  ),

  /* Adjust (Lower + Raise)
  * ,-----------------------------------------------------------------------------------.
  * |      | Reset|      |      |      |      |      |      |      |      |      |  Del |
  * |------+------+------+------+------+-------------+------+------+------+------+------|
  * |      |      |      |Aud on|Audoff|AGnorm|AGswap|Qwerty|Colemk|Dvorak|      |      |
  * |------+------+------+------+------+------|------+------+------+------+------+------|
  * |      |      |      |      |      |      |      |      |      |      |      |      |
  * |------+------+------+------+------+------+------+------+------+------+------+------|
  * |      |      |      |      |      |             |      |      |      |      |      |
  * `-----------------------------------------------------------------------------------'
  */
  [_ADJUST] =  LAYOUT_ortho_4x12( \
    _______, RESET,   _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_DEL, \
    _______, _______, _______, AU_ON,   AU_OFF,  AG_NORM, AG_SWAP, QWERTY,  COLEMAK, DVORAK,  _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______ \
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

uint32_t layer_state_set_user(uint32_t state) {
  return update_tri_layer_state(state, _SYMB, _META, _ADJUST);
}

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//   switch (keycode) {
//     case QWERTY:
//       if (record->event.pressed) {
//         set_single_persistent_default_layer(_QWERTY);
//       }
//       return false;
//     case COLEMAK:
//       if (record->event.pressed) {
//         set_single_persistent_default_layer(_COLEMAK);
//       }
//       return false;
//     case DVORAK:
//       if (record->event.pressed) {
//         set_single_persistent_default_layer(_DVORAK);
//       }
//       return false;
//   }
//   return true;
// }
