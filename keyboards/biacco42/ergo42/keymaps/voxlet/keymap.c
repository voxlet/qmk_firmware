#include QMK_KEYBOARD_H
#include "voxlet.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_kc(
  // ┌────┬────┬────┬────┬────┬────┬────┐┌────┬────┬────┬────┬────┬────┬────┐
      GRV ,    , W  , E  , R  , T  ,BRIU, VOLU, Y  , U  , I  , O  ,    ,BSPC,
  // ├────┼────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┼────┤
      LCA , Q  , S  , D  , F  , G  ,BRID, VOLD, H  , J  , K  , L  , P  ,ENT ,
  // ├────┼────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┼────┤
      LGUI, A  , X  , C  , V  , B  ,    , MUTE, N  , M  ,COMM,DOT ,SCLN,RGUI,
  // ├────┼────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┼────┤
      META, Z  ,LGUI,LALT,LCSP,SYMB,    ,     ,META,RSBS,RGDL,RALT,SLSH,SYMB
  // └────┴────┴────┴────┴────┴────┴────┘└────┴────┴────┴────┴────┴────┴────┘
  ),

  [_SYMB] = LAYOUT_kc(
  // ┌────┬────┬────┬────┬────┬────┬────┐┌────┬────┬────┬────┬────┬────┬────┐
      RST ,    , 2  , 3  , 4  , 5  ,    ,     , 6  , 7  , 8  , 9  ,    ,    ,
  // ├────┼────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┼────┤
          , 1  ,    ,    ,    ,    ,    ,     ,    ,MINS,EQL ,LBRC, 0  ,    ,
  // ├────┼────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┼────┤
          ,    ,    ,    ,    ,    ,    ,     ,    ,QUOT,GRV ,    ,RBRC,    ,
  // ├────┼────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┼────┤
          ,    ,    ,    ,    ,    ,    ,     ,    ,    ,    ,    ,BSLS,
  // └────┴────┴────┴────┴────┴────┴────┘└────┴────┴────┴────┴────┴────┴────┘
  ),

  [_META] = LAYOUT_kc(
  // ┌────┬────┬────┬────┬────┬────┬────┐┌────┬────┬────┬────┬────┬────┬────┐
          ,    ,    ,    ,    ,    ,    ,     ,PGUP,PVTB, UP ,NXTB,    ,RST ,
  // ├────┼────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┼────┤
          ,    ,    ,    ,    ,    ,    ,     ,PGDN,LEFT,DOWN,RGHT,HOME,    ,
  // ├────┼────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┼────┤
          ,    ,    ,    ,    ,    ,    ,     ,ENT ,TAB ,AGRV,    ,END ,    ,
  // ├────┼────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┼────┤
          ,    ,    ,    ,    ,    ,    ,     ,    ,    ,    ,    ,ESC ,
  // └────┴────┴────┴────┴────┴────┴────┘└────┴────┴────┴────┴────┴────┴────┘
  ),

  [_ADJUST] =  LAYOUT_kc(
  // ┌────┬────┬────┬────┬────┬────┬────┐┌────┬────┬────┬────┬────┬────┬────┐
          ,    , F2 , F3 , F4 , F5 ,    ,     , F6 , F7 , F8 , F9 ,    ,    ,
  // ├────┼────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┼────┤
          , F1 ,    ,    ,    ,    ,    ,     ,    ,    ,    ,F11 ,F10 ,    ,
  // ├────┼────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┼────┤
          ,    ,    ,    ,    ,    ,    ,     ,    ,    ,    ,    ,F12 ,    ,
  // ├────┼────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┼────┤
          ,    ,    ,    ,    ,    ,    ,     ,    ,    ,    ,    ,    ,
  // └────┴────┴────┴────┴────┴────┴────┘└────┴────┴────┴────┴────┴────┴────┘
  )
};
