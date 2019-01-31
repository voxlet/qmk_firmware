#pragma once

#define _BASE 0
#define _SYMB 1
#define _META 2
#define _ADJUST 16

#define KC_ KC_TRNS
#define KC_RST RESET
#define KC_META MO(_META)
#define KC_SYMB MO(_SYMB)

#define KC_LCTB LCTL_T(KC_TAB)
#define KC_HYL2 HYPR_T(KC_LANG2)
#define KC_LCA LCA_T(KC_NO)
#define KC_LAL2 LALT_T(KC_LANG2)
#define KC_LAGV LALT_T(KC_GRV)
#define KC_LCEQ LCTL_T(KC_EQL)
#define KC_LCSP LCTL_T(KC_SPC)
#define KC_SYEN LT(_SYMB, KC_ENT)
#define KC_SYSP LT(_SYMB, KC_SPC)
#define KC_MTMN LT(_META, KC_MINS)
#define KC_MTEN LT(_META, KC_ENT)
#define KC_RCBS RCTL_T(KC_BSPC)
#define KC_RCDL RCTL_T(KC_DEL)
#define KC_RSBS RSFT_T(KC_BSPC)
#define KC_RSDL RSFT_T(KC_DEL)
#define KC_RAL1 RALT_T(KC_LANG1)
#define KC_RAEQ RALT_T(KC_EQL)
#define KC_SGUI SGUI_T(KC_NO)
#define KC_MEL1 MEH_T(KC_LANG1)
#define KC_SFEN KC_SFTENT
#define KC_NXTB LCTL(KC_TAB)
#define KC_PVTB LCTL(LSFT(KC_TAB))
#define KC_EXPR LALT(LSFT(KC_UP))
#define KC_CNTR LALT(LSFT(KC_DOWN))

// B for Bling
#define KC_BTOG RGB_TOG // Toggle #define RGB lighting on or off
#define KC_BMOD RGB_MOD // Cycle through modes, reverse direction when Shift is held
#define KC_BHUI RGB_HUI // Increase hue
#define KC_BHUD RGB_HUD // Decrease hue
#define KC_BSAI RGB_SAI // Increase saturation
#define KC_BSAD RGB_SAD // Decrease saturation
#define KC_BVAI RGB_VAI // Increase value (brightness)
#define KC_BVAD RGB_VAD // Decrease value (brightness)
#define KC_BMPL RGB_M_P // Static (no animation) mode
#define KC_BMBR RGB_M_B // Breathing animation mode
#define KC_BMRB RGB_M_R // Rainbow animation mode
#define KC_BMSW RGB_M_SW // Swirl animation mode
#define KC_BMSN RGB_M_SN // Snake animation mode
#define KC_BMKR RGB_M_K // "Knight Rider" animation mode
#define KC_BMGR RGB_M_G // Static gradient animation mode

// enum custom_keycodes {
//   KC_LGTL = SAFE_RANGE, // LGUI_T(KC_TILD)
// };
