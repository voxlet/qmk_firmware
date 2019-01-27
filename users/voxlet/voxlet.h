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
