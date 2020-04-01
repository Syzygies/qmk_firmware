// Copyright 2020 Dave Bayer davebayer@mac.com @Syzygies <https://unlicense.org>

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_60_ansi(
    KC_GRV  , KC_1       , KC_2         , KC_3         , KC_4         , KC_5    , KC_6    , KC_7          , KC_8            , KC_9           , KC_0       , KC_MINS     , KC_EQL    , KC_BSPC ,
    KC_TAB  , KC_Q       , KC_W         , KC_E         , KC_R         , KC_T    , KC_Y    , KC_U          , KC_I            , KC_O           , KC_P       , KC_LBRC     , KC_RBRC   , KC_BSLS ,
    KC_ESC  , KC_A       , KC_S         , KC_D         , KC_F         , KC_G    , KC_H    , KC_J          , KC_K            , KC_L           , KC_SCLN    , KC_QUOT     , KC_ENT    ,
    KC_LSFT , KC_Z       , KC_X         , KC_C         , KC_V         , KC_B    , KC_N    , KC_M          , KC_COMM         , KC_DOT         , KC_SLSH    , KC_RSFT     ,
    KC_LCTL , KC_LALT    , KC_LGUI      , KC_SPC       , KC_RGUI      , KC_RALT , KC_RCTL , MO(2)         
  ),
  [1] = LAYOUT_60_ansi(
    _______ , _______    , _______      , _______      , _______      , _______ , _______ , _______       , _______         , _______        , _______    , _______     , _______   , _______ ,
    _______ , _______    , LT(3,KC_W)   , LT(4,KC_E)   , LT(5,KC_R)   , _______ , _______ , LT(6,KC_U)    , LT(7,KC_I)      , LT(8,KC_O)     , _______    , _______     , _______   , _______ ,
    _______ , _______    , LSFT_T(KC_S) , LT(9,KC_D)   , LT(10,KC_F)  , _______ , _______ , LT(11,KC_J)   , LT(12,KC_K)     , RSFT_T(KC_L)   , _______    , _______     , _______   ,
    _______ , _______    , LCTL_T(KC_X) , LALT_T(KC_C) , LGUI_T(KC_V) , _______ , _______ , RGUI_T(KC_M)  , RALT_T(KC_COMM) , RCTL_T(KC_DOT) , _______    , _______     ,
    _______ , _______    , _______      , _______      , _______      , _______ , _______ , _______       
  ),
  [2] = LAYOUT_60_ansi(
    XXXXXXX , KC_F1      , KC_F2        , KC_F3        , KC_F4        , KC_F5   , KC_F6   , KC_F7         , KC_F8           , KC_F9          , KC__MUTE   , KC__VOLDOWN , KC__VOLUP , XXXXXXX ,
    XXXXXXX , XXXXXXX    , RGB_M_P      , RGB_HUD      , RGB_HUI      , BL_INC  , XXXXXXX , XXXXXXX       , XXXXXXX         , XXXXXXX        , XXXXXXX    , XXXXXXX     , XXXXXXX   , XXXXXXX ,
    TG(1)   , XXXXXXX    , RGB_TOG      , RGB_SAD      , RGB_SAI      , BL_TOGG , XXXXXXX , XXXXXXX       , XXXXXXX         , XXXXXXX        , XXXXXXX    , XXXXXXX     , XXXXXXX   ,
    XXXXXXX , XXXXXXX    , RGB_MOD      , RGB_VAD      , RGB_VAI      , BL_DEC  , XXXXXXX , XXXXXXX       , XXXXXXX         , XXXXXXX        , XXXXXXX    , XXXXXXX     ,
    RESET   , XXXXXXX    , XXXXXXX      , MEH(KC_SPC)  , XXXXXXX      , XXXXXXX , XXXXXXX , _______       
  ),
  [3] = LAYOUT_60_ansi(
    XXXXXXX , XXXXXXX    , XXXXXXX      , XXXXXXX      , XXXXXXX      , XXXXXXX , XXXXXXX , XXXXXXX       , XXXXXXX         , XXXXXXX        , XXXXXXX    , XXXXXXX     , XXXXXXX   , _______ ,
    _______ , XXXXXXX    , _______      , XXXXXXX      , XXXXXXX      , XXXXXXX , XXXXXXX , XXXXXXX       , XXXXXXX         , XXXXXXX        , XXXXXXX    , XXXXXXX     , XXXXXXX   , XXXXXXX ,
    _______ , XXXXXXX    , XXXXXXX      , XXXXXXX      , XXXXXXX      , XXXXXXX , XXXXXXX , XXXXXXX       , XXXXXXX         , XXXXXXX        , XXXXXXX    , XXXXXXX     , _______   ,
    _______ , XXXXXXX    , XXXXXXX      , XXXXXXX      , XXXXXXX      , XXXXXXX , XXXXXXX , XXXXXXX       , XXXXXXX         , XXXXXXX        , XXXXXXX    , _______     ,
    _______ , _______    , _______      , _______      , _______      , _______ , _______ , _______       
  ),
  [4] = LAYOUT_60_ansi(
    XXXXXXX , XXXXXXX    , XXXXXXX      , XXXXXXX      , XXXXXXX      , XXXXXXX , XXXXXXX , XXXXXXX       , XXXXXXX         , XXXXXXX        , XXXXXXX    , XXXXXXX     , XXXXXXX   , _______ ,
    _______ , HYPR(KC_Q) , HYPR(KC_W)   , _______      , HYPR(KC_R)   , XXXXXXX , XXXXXXX , S(G(KC_LBRC)) , S(G(KC_RBRC))   , XXXXXXX        , XXXXXXX    , XXXXXXX     , XXXXXXX   , XXXXXXX ,
    _______ , HYPR(KC_A) , HYPR(KC_S)   , HYPR(KC_D)   , HYPR(KC_F)   , XXXXXXX , XXXXXXX , SCMD(KC_B)    , G(KC_P)         , G(KC_F)        , A(G(KC_F)) , XXXXXXX     , _______   ,
    _______ , HYPR(KC_Z) , HYPR(KC_X)   , HYPR(KC_C)   , HYPR(KC_V)   , XXXXXXX , XXXXXXX , S(G(KC_G))    , G(KC_G)         , S(G(KC_F))     , S(G(KC_H)) , _______     ,
    _______ , _______    , _______      , _______      , _______      , _______ , _______ , _______       
  ),
  [5] = LAYOUT_60_ansi(
    XXXXXXX , XXXXXXX    , XXXXXXX      , XXXXXXX      , XXXXXXX      , XXXXXXX , XXXXXXX , XXXXXXX       , XXXXXXX         , XXXXXXX        , XXXXXXX    , XXXXXXX     , XXXXXXX   , _______ ,
    _______ , MEH(KC_Q)  , MEH(KC_W)    , MEH(KC_E)    , _______      , XXXXXXX , XXXXXXX , XXXXXXX       , XXXXXXX         , XXXXXXX        , XXXXXXX    , XXXXXXX     , XXXXXXX   , XXXXXXX ,
    _______ , MEH(KC_A)  , MEH(KC_S)    , MEH(KC_D)    , MEH(KC_F)    , XXXXXXX , XXXXXXX , XXXXXXX       , XXXXXXX         , XXXXXXX        , XXXXXXX    , XXXXXXX     , _______   ,
    _______ , MEH(KC_Z)  , MEH(KC_X)    , MEH(KC_C)    , MEH(KC_V)    , XXXXXXX , XXXXXXX , XXXXXXX       , XXXXXXX         , XXXXXXX        , XXXXXXX    , _______     ,
    _______ , _______    , _______      , _______      , _______      , _______ , _______ , _______       
  ),
  [6] = LAYOUT_60_ansi(
    XXXXXXX , XXXXXXX    , XXXXXXX      , XXXXXXX      , XXXXXXX      , XXXXXXX , XXXXXXX , XXXXXXX       , XXXXXXX         , XXXXXXX        , XXXXXXX    , XXXXXXX     , XXXXXXX   , _______ ,
    _______ , MEH(KC_Q)  , MEH(KC_W)    , MEH(KC_E)    , MEH(KC_R)    , XXXXXXX , XXXXXXX , _______       , XXXXXXX         , XXXXXXX        , XXXXXXX    , XXXXXXX     , XXXXXXX   , XXXXXXX ,
    _______ , MEH(KC_A)  , MEH(KC_S)    , MEH(KC_D)    , MEH(KC_F)    , XXXXXXX , XXXXXXX , XXXXXXX       , XXXXXXX         , XXXXXXX        , XXXXXXX    , XXXXXXX     , _______   ,
    _______ , MEH(KC_Z)  , MEH(KC_X)    , MEH(KC_C)    , MEH(KC_V)    , XXXXXXX , XXXXXXX , XXXXXXX       , XXXXXXX         , XXXXXXX        , XXXXXXX    , _______     ,
    _______ , _______    , _______      , _______      , _______      , _______ , _______ , _______       
  ),
  [7] = LAYOUT_60_ansi(
    XXXXXXX , XXXXXXX    , XXXXXXX      , XXXXXXX      , XXXXXXX      , XXXXXXX , XXXXXXX , XXXXXXX       , XXXXXXX         , XXXXXXX        , XXXXXXX    , XXXXXXX     , XXXXXXX   , _______ ,
    _______ , HYPR(KC_Q) , HYPR(KC_W)   , HYPR(KC_E)   , HYPR(KC_R)   , XXXXXXX , XXXXXXX , S(G(KC_LBRC)) , _______         , XXXXXXX        , XXXXXXX    , XXXXXXX     , XXXXXXX   , XXXXXXX ,
    _______ , HYPR(KC_A) , HYPR(KC_S)   , HYPR(KC_D)   , HYPR(KC_F)   , XXXXXXX , XXXXXXX , SCMD(KC_B)    , G(KC_P)         , G(KC_F)        , A(G(KC_F)) , XXXXXXX     , _______   ,
    _______ , HYPR(KC_Z) , HYPR(KC_X)   , HYPR(KC_C)   , HYPR(KC_V)   , XXXXXXX , XXXXXXX , S(G(KC_G))    , G(KC_G)         , S(G(KC_F))     , S(G(KC_H)) , _______     ,
    _______ , _______    , _______      , _______      , _______      , _______ , _______ , _______       
  ),
  [8] = LAYOUT_60_ansi(
    XXXXXXX , XXXXXXX    , XXXXXXX      , XXXXXXX      , XXXXXXX      , XXXXXXX , XXXXXXX , XXXXXXX       , XXXXXXX         , XXXXXXX        , XXXXXXX    , XXXXXXX     , XXXXXXX   , _______ ,
    _______ , XXXXXXX    , XXXXXXX      , XXXXXXX      , XXXXXXX      , XXXXXXX , XXXXXXX , XXXXXXX       , XXXXXXX         , _______        , XXXXXXX    , XXXXXXX     , XXXXXXX   , XXXXXXX ,
    _______ , XXXXXXX    , XXXXXXX      , XXXXXXX      , XXXXXXX      , XXXXXXX , XXXXXXX , XXXXXXX       , XXXXXXX         , XXXXXXX        , XXXXXXX    , XXXXXXX     , _______   ,
    _______ , XXXXXXX    , XXXXXXX      , XXXXXXX      , XXXXXXX      , XXXXXXX , XXXXXXX , XXXXXXX       , XXXXXXX         , XXXXXXX        , XXXXXXX    , _______     ,
    _______ , _______    , _______      , _______      , _______      , _______ , _______ , _______       
  ),
  [9] = LAYOUT_60_ansi(
    XXXXXXX , XXXXXXX    , XXXXXXX      , XXXXXXX      , XXXXXXX      , XXXXXXX , XXXXXXX , XXXXXXX       , XXXXXXX         , XXXXXXX        , XXXXXXX    , XXXXXXX     , XXXXXXX   , _______ ,
    _______ , KC_1       , KC_2         , KC_3         , KC_4         , KC_5    , KC_HOME , KC_PGDOWN     , KC_PGUP         , KC_END         , XXXXXXX    , XXXXXXX     , XXXXXXX   , XXXXXXX ,
    _______ , KC_6       , KC_7         , _______      , KC_9         , KC_0    , KC_LEFT , KC_DOWN       , KC_UP           , KC_RGHT        , XXXXXXX    , XXXXXXX     , _______   ,
    _______ , KC_SLSH    , KC_DOT       , KC_COMM      , KC_MINS      , KC_BSPC , KC_DEL  , XXXXXXX       , XXXXXXX         , XXXXXXX        , XXXXXXX    , _______     ,
    _______ , _______    , _______      , _______      , _______      , _______ , _______ , _______       
  ),
  [10] = LAYOUT_60_ansi(
    XXXXXXX , XXXXXXX    , XXXXXXX      , XXXXXXX      , XXXXXXX      , XXXXXXX , XXXXXXX , XXXXXXX       , XXXXXXX         , XXXXXXX        , XXXXXXX    , XXXXXXX     , XXXXXXX   , _______ ,
    _______ , KC_EXLM    , KC_AT        , KC_HASH      , KC_DLR       , KC_PERC , KC_CIRC , KC_AMPR       , KC_ASTR         , KC_LPRN        , KC_RPRN    , XXXXXXX     , XXXXXXX   , XXXXXXX ,
    _______ , KC_TILD    , KC_LCBR      , KC_RCBR      , _______      , KC_PLUS , KC_EQL  , KC_QUOT       , KC_LBRC         , KC_RBRC        , KC_COLN    , XXXXXXX     , _______   ,
    _______ , KC_GRV     , KC_PIPE      , KC_BSLS      , KC_UNDS      , KC_BSPC , KC_DEL  , KC_MINS       , KC_LT           , KC_GT          , KC_QUES    , _______     ,
    _______ , _______    , _______      , _______      , _______      , _______ , _______ , _______       
  ),
  [11] = LAYOUT_60_ansi(
    XXXXXXX , XXXXXXX    , XXXXXXX      , XXXXXXX      , XXXXXXX      , XXXXXXX , XXXXXXX , XXXXXXX       , XXXXXXX         , XXXXXXX        , XXXXXXX    , XXXXXXX     , XXXXXXX   , _______ ,
    _______ , KC_EXLM    , KC_AT        , KC_HASH      , KC_DLR       , KC_PERC , KC_CIRC , KC_AMPR       , KC_ASTR         , KC_LPRN        , KC_RPRN    , XXXXXXX     , XXXXXXX   , XXXXXXX ,
    _______ , KC_TILD    , KC_LCBR      , KC_RCBR      , KC_DQUO      , KC_PLUS , KC_EQL  , _______       , KC_LBRC         , KC_RBRC        , KC_COLN    , XXXXXXX     , _______   ,
    _______ , KC_GRV     , KC_PIPE      , KC_BSLS      , KC_UNDS      , KC_BSPC , KC_DEL  , KC_MINS       , KC_LT           , KC_GT          , KC_QUES    , _______     ,
    _______ , _______    , _______      , _______      , _______      , _______ , _______ , _______       
  ),
  [12] = LAYOUT_60_ansi(
    XXXXXXX , XXXXXXX    , XXXXXXX      , XXXXXXX      , XXXXXXX      , XXXXXXX , XXXXXXX , XXXXXXX       , XXXXXXX         , XXXXXXX        , XXXXXXX    , XXXXXXX     , XXXXXXX   , _______ ,
    _______ , KC_1       , KC_2         , KC_3         , KC_4         , KC_5    , KC_HOME , KC_PGDOWN     , KC_PGUP         , KC_END         , XXXXXXX    , XXXXXXX     , XXXXXXX   , XXXXXXX ,
    _______ , KC_6       , KC_7         , KC_8         , KC_9         , KC_0    , KC_LEFT , KC_DOWN       , _______         , KC_RGHT        , XXXXXXX    , XXXXXXX     , _______   ,
    _______ , KC_SLSH    , KC_DOT       , KC_COMM      , KC_MINS      , KC_BSPC , KC_DEL  , XXXXXXX       , XXXXXXX         , XXXXXXX        , XXXXXXX    , _______     ,
    _______ , _______    , _______      , _______      , _______      , _______ , _______ , _______       
  )
};
