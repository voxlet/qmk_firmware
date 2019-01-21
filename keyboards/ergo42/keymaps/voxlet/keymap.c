#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define BASE 0
#define SYMB 1
#define META 2

#define xLCA LCA_T(KC_NO)
#define xHYPER HYPR_T(KC_NO)
#define xMEH MEH_T(KC_NO)
#define LCBR S(KC_LBRC)
#define LPAR S(KC_9)
#define RCBR S(KC_RBRC)
#define RPAR S(KC_0)

#define LCA_HASH LCA_T(S(KC_3))
#define LGUI_LCBR LGUI_T(LCBR)
#define LALT_LBRC LALT_T(KC_LBRC)
#define LCTL_LPAR LCTL_T(LPAR)
#define SYMB_SPC LT(SYMB, KC_SPC)
#define META_BSPC LT(META, KC_BSPC)
#define RCTL_ENT RCTL_T(KC_ENT)
#define RALT_DEL RALT_T(KC_DEL)
#define RGUI_MIN RGUI_T(KC_MINS)
#define SGUI_EQL SGUI_T(KC_EQL)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* BASE
   * ,------------------------------------------------.   ,------------------------------------------------.
   * |   `  | GESC |   Q  |   W  |   E  |   R  |   T  |   |   Y  |   U  |   I  |   O  |   P  |   \  | Bspc |
   * |------+------+------+------+------+------+------|   |-------------+------+------+------+------+------|
   * |  LCA |  Tab |   A  |   S  |   D  |   F  |   G  |   |   H  |   J  |   K  |   L  |   ;  |   '  | Enter|
   * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
   * | LGUI |LSft/(|   Z  |   X  |   C  |   V  |   B  |   |   N  |   M  |   ,  |   .  |   /  |RSft/)| RGUI |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * | META | Hyper| LCA/ | LGUI/| LAlt/|LCtrl/| SYMB/|   | META/|RCtrl/| RALT/| RGUI/| SGUI/|  Meh | SYMB |
   * |      |      | #    | {    | [    |(     | Space|   | Bspc | Enter| Del  | -    | =    |      |      |
   * `------------------------------------------------'   `------------------------------------------------'
   */
  [BASE] = LAYOUT( \
    KC_GRV,   KC_GESC, KC_Q,     KC_W,      KC_E,      KC_R,      KC_T,     /**/ KC_Y,      KC_U,     KC_I,     KC_O,     KC_P,     KC_BSLS, KC_BSPC, \
    xLCA,     KC_TAB,  KC_A,     KC_S,      KC_D,      KC_F,      KC_G,     /**/ KC_H,      KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT, KC_ENT, \
    KC_LGUI,  KC_LSPO, KC_Z,     KC_X,      KC_C,      KC_V,      KC_B,     /**/ KC_N,      KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSPC, KC_RGUI, \
    MO(META), xHYPER,  LCA_HASH, LGUI_LCBR, LALT_LBRC, LCTL_LPAR, SYMB_SPC, /**/ META_BSPC, RCTL_ENT, RALT_DEL, RGUI_MIN, SGUI_EQL, xMEH,    MO(SYMB) \
  ),

  /* SYMB
   * ,------------------------------------------------.   ,------------------------------------------------.
   * |      |      |   !  |   @  |   #  |   $  |   %  |   |   ^  |   &  |   *  |   (  |   )  |      |      |
   * |------+------+------+------+------+------+------|   |-------------+------+------+------+------+------|
   * |      |      |   1  |   2  |   3  |   4  |   5  |   |   6  |   7  |   8  |   9  |   0  |      |      |
   * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
   * |      |      |   `  |   {  |   [  |   (  |   -  |   |   =  |   )  |   ]  |   }  |   \  |      |      |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * |      |      |      |      |      |      |      |   |      |      |      |      |      |      |      |
   * `------------------------------------------------'   `------------------------------------------------'
   */
  [SYMB] = LAYOUT( \
    _______, _______, S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5), /**/ S(KC_6), S(KC_7), S(KC_8), S(KC_9), S(KC_0), _______, _______, \
    _______, _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    /**/ KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______, _______, \
    _______, _______, KC_GRV,  LCBR,    KC_LBRC, LPAR,    KC_MINS, /**/ KC_EQL,  RPAR,    KC_RBRC, RCBR,    KC_SLSH, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, /**/ _______, _______, _______, _______, _______, _______, _______ \
  ),

  /* META
   * ,------------------------------------------------.   ,------------------------------------------------.
   * |      |      |      |  try |  out | some | mouse|   |  PGUP| HOME |  UP  |  END |      |      |      |
   * |------+------+------+------+------+------+------|   |-------------+------+------+------+------+------|
   * | RESET|      |      |  keys|  here|   ?  |   ?  |   |  PGDN| LEFT | DOWN | RIGHT|      |      |      |
   * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
   * |      |      |  F1  |  F2  |  F3  |  F4  |  F5  |   |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * |      |      |      |      | BRID | BRIU |      |   |      | PLAY | MUTE | VOLU | VOLD |      |      |
   * `------------------------------------------------'   `------------------------------------------------'
   */
  [META] = LAYOUT( \
     _______, _______, _______, _______, _______, _______, _______, /**/ KC_PGUP, KC_HOME, KC_UP,   KC_END,  _______, _______, _______, \
     RESET,   _______, _______, _______, _______, _______, _______, /**/ KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, \
     _______, _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   /**/ KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,    KC_F12, \
     _______, _______, _______, _______, KC_BRID, KC_BRIU, _______, /**/ _______, KC_MPLY, KC_MUTE, KC_VOLU, KC_VOLD, _______, _______ \
  )

};

