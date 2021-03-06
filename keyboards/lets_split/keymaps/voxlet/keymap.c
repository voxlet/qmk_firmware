#include QMK_KEYBOARD_H
#include "voxlet.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_kc(
  // ┌────┬────┬────┬────┬────┬────┐┌────┬────┬────┬────┬────┬────┐
          , W  , E  , R  , T  ,BRIU, VOLU, Y  , U  , I  , O  ,    ,
  // ├────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┤
       Q  , S  , D  , F  , G  ,BRID, VOLD, H  , J  , K  , L  , P  ,
  // ├────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┤
       A  , X  , C  , V  , B  ,    , MUTE, N  , M  ,COMM,DOT ,SCLN,
  // ├────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┤
       Z  ,LGUI,LALT,LCSP,SYMB,    ,     ,META,RSBS,RGDL,RALT,SLSH
  // └────┴────┴────┴────┴────┴────┘└────┴────┴────┴────┴────┴────┘
  ),

  [_SYMB] = LAYOUT_kc(
  // ┌────┬────┬────┬────┬────┬────┐┌────┬────┬────┬────┬────┬────┐
      RST , 2  , 3  , 4  , 5  ,    ,     , 6  , 7  , 8  , 9  ,    ,
  // ├────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┤
       1  ,    ,    ,    ,    ,    ,     ,    ,MINS,EQL ,LBRC, 0  ,
  // ├────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┤
          ,    ,    ,    ,    ,    ,     ,    ,QUOT,GRV ,    ,RBRC,
  // ├────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┤
          ,    ,    ,    ,    ,    ,     ,    ,    ,    ,    ,BSLS
  // └────┴────┴────┴────┴────┴────┘└────┴────┴────┴────┴────┴────┘
  ),

  [_META] = LAYOUT_kc(
  // ┌────┬────┬────┬────┬────┬────┐┌────┬────┬────┬────┬────┬────┐
          ,    ,    ,    ,    ,    ,     ,PGUP,PVTB, UP ,NXTB,    ,
  // ├────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┤
          ,    ,    ,    ,    ,    ,     ,PGDN,LEFT,DOWN,RGHT,HOME,
  // ├────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┤
          ,    ,    ,    ,    ,    ,     ,ENT ,TAB ,AGRV,    ,END ,
  // ├────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┤
          ,    ,    ,    ,    ,    ,     ,    ,    ,    ,    ,ESC
  // └────┴────┴────┴────┴────┴────┘└────┴────┴────┴────┴────┴────┘
  ),

  [_ADJUST] =  LAYOUT_kc(
  // ┌────┬────┬────┬────┬────┬────┐┌────┬────┬────┬────┬────┬────┐
      RST , F2 , F3 , F4 , F5 ,    ,     , F6 , F7 , F8 , F9 ,    ,
  // ├────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┤
       F1 ,    ,BMOD,BVAI,    ,    ,     ,    ,BHUI,BSAI,F11 ,F10 ,
  // ├────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┤
          ,    ,BTOG,BVAD,    ,    ,     ,    ,BHUD,BSAD,    ,F12 ,
  // ├────┼────┼────┼────┼────┼────┤├────┼────┼────┼────┼────┼────┤
          ,    ,    ,    ,    ,    ,     ,    ,    ,    ,    ,
  // └────┴────┴────┴────┴────┴────┘└────┴────┴────┴────┴────┴────┘
  )
};
