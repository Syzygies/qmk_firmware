// Copyright 2020 Dave Bayer The MIT License (MIT)

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_GRV  , KC_1              , KC_2       , KC_3       , KC_4       , KC_5    , KC_6    , KC_7       , KC_8        , KC_9       , KC_0                 , KC_MINS , KC_EQL  , LT(2,KC_BSPC) , DF(1)   ,
    KC_TAB  , KC_Q              , KC_W       , KC_E       , KC_R       , KC_T    , KC_Y    , KC_U       , KC_I        , KC_O       , KC_P                 , KC_LBRC , KC_RBRC , KC_BSLS       , KC_DEL  ,
    KC_ESC  , MT(MOD_LSFT,KC_A) , LT(5,KC_S) , LT(4,KC_D) , LT(3,KC_F) , KC_G    , KC_H    , LT(3,KC_J) , LT(4,KC_K)  , LT(5,KC_L) , MT(MOD_RSFT,KC_SCLN) , KC_QUOT , KC_ENT  ,
    KC_LSFT , KC_Z              , KC_X       , KC_C       , KC_V       , KC_B    , KC_N    , KC_M       , KC_COMM     , KC_DOT     , KC_SLSH              , KC_RSFT , KC_UP   ,
    KC_LCTL , KC_LALT           , KC_LGUI    , KC_SPC     , KC_RGUI    , KC_RALT , KC_RCTL , KC_LEFT    , KC_DOWN     , KC_RGHT    
  ),
  [1] = LAYOUT(
    KC_GRV  , KC_1              , KC_2       , KC_3       , KC_4       , KC_5    , KC_6    , KC_7       , KC_8        , KC_9       , KC_0                 , KC_MINS , KC_EQL  , LT(2,KC_BSPC) , DF(0)   ,
    KC_TAB  , KC_Q              , KC_W       , KC_E       , KC_R       , KC_T    , KC_Y    , KC_U       , KC_I        , KC_O       , KC_P                 , KC_LBRC , KC_RBRC , KC_BSLS       , KC_DEL  ,
    KC_ESC  , KC_A              , KC_S       , KC_D       , KC_F       , KC_G    , KC_H    , KC_J       , KC_K        , KC_L       , KC_SCLN              , KC_QUOT , KC_ENT  ,
    KC_LSFT , KC_Z              , KC_X       , KC_C       , KC_V       , KC_B    , KC_N    , KC_M       , KC_COMM     , KC_DOT     , KC_SLSH              , KC_RSFT , KC_UP   ,
    KC_LCTL , KC_LALT           , KC_LGUI    , KC_SPC     , KC_RGUI    , KC_RALT , KC_RCTL , KC_LEFT    , KC_DOWN     , KC_RGHT    
  ),
  [2] = LAYOUT(
    XXXXXXX , KC_F1             , KC_F2      , KC_F3      , KC_F4      , KC_F5   , KC_F6   , KC_F7      , KC_F8       , KC_F9      , KC_F10               , KC_F11  , KC_F12  , XXXXXXX       , RESET   ,
    XXXXXXX , XXXXXXX           , XXXXXXX    , XXXXXXX    , XXXXXXX    , XXXXXXX , XXXXXXX , XXXXXXX    , XXXXXXX     , XXXXXXX    , XXXXXXX              , XXXXXXX , XXXXXXX , XXXXXXX       , XXXXXXX ,
    XXXXXXX , XXXXXXX           , XXXXXXX    , XXXXXXX    , XXXXXXX    , XXXXXXX , XXXXXXX , XXXXXXX    , XXXXXXX     , XXXXXXX    , XXXXXXX              , XXXXXXX , XXXXXXX ,
    XXXXXXX , XXXXXXX           , XXXXXXX    , XXXXXXX    , XXXXXXX    , XXXXXXX , XXXXXXX , XXXXXXX    , XXXXXXX     , XXXXXXX    , XXXXXXX              , XXXXXXX , XXXXXXX ,
    XXXXXXX , XXXXXXX           , XXXXXXX    , XXXXXXX    , XXXXXXX    , XXXXXXX , XXXXXXX , XXXXXXX    , XXXXXXX     , XXXXXXX    
  ),
  [3] = LAYOUT(
    XXXXXXX , XXXXXXX           , XXXXXXX    , XXXXXXX    , XXXXXXX    , XXXXXXX , XXXXXXX , XXXXXXX    , XXXXXXX     , XXXXXXX    , XXXXXXX              , XXXXXXX , XXXXXXX , KC_BSPC       , XXXXXXX ,
    KC_TAB  , KC_TILD           , KC_LCBR    , KC_RCBR    , KC_EXLM    , KC_AT   , KC_HASH , KC_DLR     , KC_PERC     , KC_BSLS    , KC_PIPE              , XXXXXXX , XXXXXXX , XXXXXXX       , KC_DEL  ,
    XXXXXXX , KC_GRV            , KC_LPRN    , KC_RPRN    , KC_UNDS    , KC_CIRC , KC_AMPR , KC_MINS    , KC_EQL      , KC_PLUS    , KC_COLN              , KC_DQUO , KC_ENT  ,
    XXXXXXX , XXXXXXX           , KC_LBRC    , KC_RBRC    , KC_ASTR    , XXXXXXX , KC_QUOT , KC_DQUO    , KC_LT       , KC_GT      , KC_QUES              , XXXXXXX , XXXXXXX ,
    XXXXXXX , XXXXXXX           , XXXXXXX    , KC_SPC     , XXXXXXX    , XXXXXXX , XXXXXXX , XXXXXXX    , XXXXXXX     , XXXXXXX    
  ),
  [4] = LAYOUT(
    XXXXXXX , XXXXXXX           , XXXXXXX    , XXXXXXX    , XXXXXXX    , XXXXXXX , XXXXXXX , XXXXXXX    , XXXXXXX     , XXXXXXX    , XXXXXXX              , XXXXXXX , XXXXXXX , KC_BSPC       , XXXXXXX ,
    KC_TAB  , KC_1              , KC_2       , KC_3       , KC_4       , KC_5    , XXXXXXX , KC_HOME    , KC_PGDOWN   , KC_PGUP    , KC_END               , XXXXXXX , XXXXXXX , XXXXXXX       , KC_DEL  ,
    XXXXXXX , KC_6              , KC_7       , KC_8       , KC_9       , KC_0    , XXXXXXX , KC_LEFT    , KC_DOWN     , KC_UP      , KC_RGHT              , XXXXXXX , KC_ENT  ,
    XXXXXXX , LCMD(KC_Z)        , LCMD(KC_X) , LCMD(KC_C) , LCMD(KC_V) , XXXXXXX , XXXXXXX , KC__MUTE   , KC__VOLDOWN , KC__VOLUP  , XXXXXXX              , XXXXXXX , XXXXXXX ,
    XXXXXXX , XXXXXXX           , XXXXXXX    , KC_SPC     , XXXXXXX    , XXXXXXX , XXXXXXX , XXXXXXX    , XXXXXXX     , XXXXXXX    
  ),
  [5] = LAYOUT(
    XXXXXXX , XXXXXXX           , XXXXXXX    , XXXXXXX    , XXXXXXX    , XXXXXXX , XXXXXXX , XXXXXXX    , XXXXXXX     , XXXXXXX    , XXXXXXX              , XXXXXXX , XXXXXXX , KC_BSPC       , XXXXXXX ,
    KC_TAB  , XXXXXXX           , XXXXXXX    , XXXXXXX    , XXXXXXX    , XXXXXXX , XXXXXXX , XXXXXXX    , XXXXXXX     , XXXXXXX    , XXXXXXX              , XXXXXXX , XXXXXXX , XXXXXXX       , KC_DEL  ,
    XXXXXXX , XXXXXXX           , XXXXXXX    , XXXXXXX    , XXXXXXX    , XXXXXXX , XXXXXXX , XXXXXXX    , XXXXXXX     , XXXXXXX    , XXXXXXX              , XXXXXXX , KC_ENT  ,
    XXXXXXX , XXXXXXX           , XXXXXXX    , XXXXXXX    , XXXXXXX    , XXXXXXX , XXXXXXX , XXXXXXX    , XXXXXXX     , XXXXXXX    , XXXXXXX              , XXXXXXX , XXXXXXX ,
    XXXXXXX , XXXXXXX           , XXXXXXX    , KC_SPC     , XXXXXXX    , XXXXXXX , XXXXXXX , XXXXXXX    , XXXXXXX     , XXXXXXX    
  )
};
