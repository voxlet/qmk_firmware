#pragma once

enum layer_names {
  _BASE,
  _GAME,
  _MAC,
  _SYMB,
  _SYMB_GAME,
  _META,
  _META_MAC,
  _ADJUST,
  _ADJUST_GAME,
};

#define KC_ KC_TRNS
#define KC_RST QK_BOOTLOADER
#define KC_MAC TG(_MAC)
#define KC_GAME TG(_GAME)
#define KC_META MO(_META)
#define KC_SYMB MO(_SYMB)
#define KC_ADJS MO(_ADJUST)

#define KC_LCTB LCTL_T(KC_TAB)
#define KC_HYL2 HYPR_T(KC_LANG2)
#define KC_LCA LCA_T(KC_NO)
#define KC_LAL2 LALT_T(KC_LANG2)
#define KC_LAEN LALT_T(KC_ENT)
#define KC_LATB LALT_T(KC_TAB)
#define KC_LAES LALT_T(KC_ESC)
#define KC_LCSP LCTL_T(KC_SPC)
#define KC_SYEN LT(_SYMB, KC_ENT)
#define KC_SYSP LT(_SYMB, KC_SPC)
#define KC_SYTB LT(_SYMB, KC_TAB)
#define KC_SYES LT(_SYMB, KC_ESC)
#define KC_MTEN LT(_META, KC_ENT)
#define KC_MTTB LT(_META, KC_TAB)
#define KC_RCBS RCTL_T(KC_BSPC)
#define KC_RCDL RCTL_T(KC_DEL)
#define KC_RSBS RSFT_T(KC_BSPC)
#define KC_RSDL RSFT_T(KC_DEL)
#define KC_RSTB RSFT_T(KC_TAB)
#define KC_RGDL RGUI_T(KC_DEL)
#define KC_RAL1 RALT_T(KC_LANG1)
#define KC_RAEN RALT_T(KC_ENT)
#define KC_RADL RALT_T(KC_DEL)
#define KC_SGUI SGUI_T(KC_NO)
#define KC_MEL1 MEH_T(KC_LANG1)
#define KC_SFEN KC_SFTENT
// #define KC_NXTB LCTL(KC_TAB)
// #define KC_PVTB LCTL(LSFT(KC_TAB))
#define KC_NXTB RSFT(RALT(KC_RBRC))
#define KC_PVTB RSFT(RALT(KC_LBRC))
#define KC_EXPR LALT(LSFT(KC_UP))
#define KC_CNTR LALT(LSFT(KC_DOWN))
#define KC_AGRV LALT(KC_GRV)
#define KC_LNG2 KC_LANG2
#define KC_LNG1 KC_LANG1
#define KC_LG_A LGUI_T(KC_A)
#define KC_LA_S LALT_T(KC_S)
#define KC_LC_D LCTL_T(KC_D)
#define KC_LS_F LSFT_T(KC_F)
#define KC_LS_A LSFT_T(KC_A)
#define KC_LG_S LGUI_T(KC_S)
#define KC_LG_Z LGUI_T(KC_Z)
#define KC_LA_D LALT_T(KC_D)
#define KC_LA_X LALT_T(KC_X)
#define KC_LC_F LCTL_T(KC_F)
#define KC_MT_G LT(_META, KC_G)
#define KC_SY_H LT(_SYMB, KC_H)
#define KC_RS_J RSFT_T(KC_J)
#define KC_RC_K RCTL_T(KC_K)
#define KC_RA_L RALT_T(KC_L)
#define KC_RADT RALT_T(KC_DOT)
#define KC_RGSC RGUI_T(KC_SCLN)
#define KC_RASL RALT_T(KC_SLSH)
#define KC_RGSL RGUI_T(KC_SLSH)
#define KC_RC_J RCTL_T(KC_J)
#define KC_RA_K RALT_T(KC_K)
#define KC_RG_L RGUI_T(KC_L)
#define KC_RSSC RSFT_T(KC_SCLN)

// mac alts
#define KC_LASP LALT_T(KC_SPC)
#define KC_NXTM RGUI(KC_RCBR)
#define KC_PVTM RGUI(KC_LCBR)

// B for Bling
#define KC_BTOG RGB_TOG // Toggle #define RGB lighting on or off
#define KC_BMOD RGB_MOD // Cycle through modes, reverse direction when Shift is held
#define KC_BHUI RGB_HUI // Increase hue
#define KC_BHUD RGB_HUD // Decrease hue
#define KC_BSAI RGB_SAI // Increase saturation
#define KC_BSAD RGB_SAD // Decrease saturation
#define KC_BVAI RGB_VAI // Increase value (brightness)
#define KC_BVAD RGB_VAD // Decrease value (brightness)
#define KC_BSPI RGB_SPI // Increase effect speed (does not support eeprom yet), decrease speed when Shift is held
#define KC_BSPD RGB_SPD // Decrease effect speed (does not support eeprom yet), increase speed when Shift is held

#define KC_BMPL RGB_M_P // Static (no animation) mode
#define KC_BMBR RGB_M_B // Breathing animation mode
#define KC_BMRB RGB_M_R // Rainbow animation mode
#define KC_BMSW RGB_M_SW // Swirl animation mode
#define KC_BMSN RGB_M_SN // Snake animation mode
#define KC_BMKR RGB_M_K // "Knight Rider" animation mode
#define KC_BMXM RGB_M_X // Christmas animation mode
#define KC_BMGR RGB_M_G // Static gradient animation mode
#define KC_BMRT RGB_M_T	// Red,Green,Blue test animation mode

// enum custom_keycodes {
//   KC_LGTL = SAFE_RANGE, // LGUI_T(KC_TILD)
// };

#ifndef LAYOUT_kc_ortho_4x12
#define LAYOUT_kc_ortho_4x12( \
    L00, L01, L02, L03, L04, L05, R00, R01, R02, R03, R04, R05, \
    L10, L11, L12, L13, L14, L15, R10, R11, R12, R13, R14, R15, \
    L20, L21, L22, L23, L24, L25, R20, R21, R22, R23, R24, R25, \
    L30, L31, L32, L33, L34, L35, R30, R31, R32, R33, R34, R35 \
    ) \
    LAYOUT_ortho_4x12( \
        KC_##L00, KC_##L01, KC_##L02, KC_##L03, KC_##L04, KC_##L05, KC_##R00, KC_##R01, KC_##R02, KC_##R03, KC_##R04, KC_##R05, \
        KC_##L10, KC_##L11, KC_##L12, KC_##L13, KC_##L14, KC_##L15, KC_##R10, KC_##R11, KC_##R12, KC_##R13, KC_##R14, KC_##R15, \
        KC_##L20, KC_##L21, KC_##L22, KC_##L23, KC_##L24, KC_##L25, KC_##R20, KC_##R21, KC_##R22, KC_##R23, KC_##R24, KC_##R25, \
        KC_##L30, KC_##L31, KC_##L32, KC_##L33, KC_##L34, KC_##L35, KC_##R30, KC_##R31, KC_##R32, KC_##R33, KC_##R34, KC_##R35 \
    )

#endif
