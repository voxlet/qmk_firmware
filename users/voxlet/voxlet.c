#include QMK_KEYBOARD_H
#include "voxlet.h"

uint32_t layer_state_set_user(uint32_t state) {
  return update_tri_layer_state(state, _SYMB, _META, _ADJUST);
}

// void shifted_lt(uint16_t mod, uint16_t unshifted, keyrecord_t *record, uint16_t *timer) {
//   if (record->event.pressed) {
//     *timer = timer_read();
//     register_mods(MOD_BIT(mod));
//   }
//   else {
//     unregister_mods(MOD_BIT(mod));
//     if (timer_elapsed(*timer) < TAPPING_TERM) {
//       register_mods(MOD_BIT(KC_LSFT));
//       tap_code(unshifted);
//       unregister_mods(MOD_BIT(KC_LSFT));
//     }
//   }
// }

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

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//   switch (keycode) {
//     case KC_LGTL: {
//       static uint16_t lgtl_timer = 0;
//       shifted_lt(KC_LGUI, KC_GRV, record, &lgtl_timer);
//       return false;
//     }
//     default: {
//       return true;
//     }
//   }
// }
