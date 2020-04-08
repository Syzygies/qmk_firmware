// Copyright 2020 Dave Bayer davebayer@mac.com @Syzygies <https://unlicense.org>

#include QMK_KEYBOARD_H

enum layers {
  _Base,
  _Hold,
  _Fn,
  _Lock,
  _FJ,
  _DK,
  _RU,
  _EI,
  _WO,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_Base] = LAYOUT(
    KC_GRV           , KC_1       , KC_2         , KC_3         , KC_4         , KC_5    , KC_6      , KC_7          , KC_8            , KC_9           , KC_0       , KC_MINS     , KC_EQL    , KC_BSPC         , MO(_Fn) ,
    KC_TAB           , KC_Q       , KC_W         , KC_E         , KC_R         , KC_T    , KC_Y      , KC_U          , KC_I            , KC_O           , KC_P       , KC_LBRC     , KC_RBRC   , KC_BSLS         , KC_DEL  ,
    KC_ESC           , KC_A       , KC_S         , KC_D         , KC_F         , KC_G    , KC_H      , KC_J          , KC_K            , KC_L           , KC_SCLN    , KC_QUOT     , KC_ENT    ,
    KC_LSFT          , KC_Z       , KC_X         , KC_C         , KC_V         , KC_B    , KC_N      , KC_M          , KC_COMM         , KC_DOT         , KC_SLSH    , KC_RSFT     , KC_UP     ,
    KC_LCTL          , KC_LALT    , KC_LGUI      , KC_SPC       , KC_RGUI      , KC_RALT , KC_RCTL   , KC_LEFT       , KC_DOWN         , KC_RGHT        
  ),
  [_Hold] = LAYOUT(
    _______          , _______    , _______      , _______      , _______      , _______ , _______   , _______       , _______         , _______        , _______    , _______     , _______   , LT(_Fn,KC_BSPC) , _______ ,
    _______          , _______    , LT(_WO,KC_W) , LT(_EI,KC_E) , LT(_RU,KC_R) , _______ , _______   , LT(_RU,KC_U)  , LT(_EI,KC_I)    , LT(_WO,KC_O)   , _______    , _______     , _______   , _______         , _______ ,
    LT(_Lock,KC_ESC) , _______    , LSFT_T(KC_S) , LT(_DK,KC_D) , LT(_FJ,KC_F) , _______ , _______   , LT(_FJ,KC_J)  , LT(_DK,KC_K)    , RSFT_T(KC_L)   , _______    , _______     , _______   ,
    _______          , _______    , LCTL_T(KC_X) , LALT_T(KC_C) , LGUI_T(KC_V) , _______ , _______   , RGUI_T(KC_M)  , RALT_T(KC_COMM) , RCTL_T(KC_DOT) , _______    , _______     , _______   ,
    _______          , _______    , _______      , _______      , _______      , _______ , _______   , _______       , _______         , _______        
  ),
  [_Fn] = LAYOUT(
    XXXXXXX          , KC_F1      , KC_F2        , KC_F3        , KC_F4        , KC_F5   , KC_F6     , KC_F7         , KC_F8           , KC_F9          , KC__MUTE   , KC__VOLDOWN , KC__VOLUP , _______         , _______ ,
    XXXXXXX          , XXXXXXX    , XXXXXXX      , XXXXXXX      , XXXXXXX      , XXXXXXX , XXXXXXX   , XXXXXXX       , XXXXXXX         , XXXXXXX        , XXXXXXX    , XXXXXXX     , XXXXXXX   , XXXXXXX         , XXXXXXX ,
    TG(_Hold)        , XXXXXXX    , XXXXXXX      , XXXXXXX      , XXXXXXX      , XXXXXXX , XXXXXXX   , XXXXXXX       , XXXXXXX         , XXXXXXX        , XXXXXXX    , XXXXXXX     , RESET     ,
    XXXXXXX          , XXXXXXX    , XXXXXXX      , XXXXXXX      , XXXXXXX      , XXXXXXX , XXXXXXX   , XXXXXXX       , XXXXXXX         , XXXXXXX        , XXXXXXX    , XXXXXXX     , XXXXXXX   ,
    XXXXXXX          , XXXXXXX    , XXXXXXX      , MEH(KC_SPC)  , XXXXXXX      , XXXXXXX , XXXXXXX   , XXXXXXX       , XXXXXXX         , XXXXXXX        
  ),
  [_Lock] = LAYOUT(
    XXXXXXX          , XXXXXXX    , XXXXXXX      , XXXXXXX      , XXXXXXX      , XXXXXXX , XXXXXXX   , XXXXXXX       , XXXXXXX         , XXXXXXX        , XXXXXXX    , XXXXXXX     , XXXXXXX   , XXXXXXX         , XXXXXXX ,
    XXXXXXX          , XXXXXXX    , TG(_WO)      , TG(_EI)      , TG(_RU)      , XXXXXXX , XXXXXXX   , TG(_RU)       , TG(_EI)         , TG(_WO)        , XXXXXXX    , XXXXXXX     , XXXXXXX   , XXXXXXX         , XXXXXXX ,
    _______          , XXXXXXX    , XXXXXXX      , TG(_DK)      , TG(_FJ)      , XXXXXXX , XXXXXXX   , TG(_FJ)       , TG(_DK)         , XXXXXXX        , XXXXXXX    , XXXXXXX     , XXXXXXX   ,
    XXXXXXX          , XXXXXXX    , XXXXXXX      , XXXXXXX      , XXXXXXX      , XXXXXXX , XXXXXXX   , XXXXXXX       , XXXXXXX         , XXXXXXX        , XXXXXXX    , KC_CAPS     , XXXXXXX   ,
    XXXXXXX          , XXXXXXX    , XXXXXXX      , XXXXXXX      , XXXXXXX      , XXXXXXX , XXXXXXX   , XXXXXXX       , XXXXXXX         , XXXXXXX        
  ),
  [_FJ] = LAYOUT(
    XXXXXXX          , XXXXXXX    , XXXXXXX      , XXXXXXX      , XXXXXXX      , XXXXXXX , XXXXXXX   , XXXXXXX       , XXXXXXX         , XXXXXXX        , XXXXXXX    , XXXXXXX     , XXXXXXX   , _______         , _______ ,
    _______          , KC_EXLM    , KC_AT        , KC_HASH      , KC_DLR       , KC_PERC , KC_CIRC   , KC_AMPR       , KC_ASTR         , KC_LPRN        , KC_RPRN    , XXXXXXX     , XXXXXXX   , XXXXXXX         , _______ ,
    TG(_FJ)          , KC_TILD    , KC_LCBR      , KC_RCBR      , KC_DQUO      , KC_PLUS , KC_EQL    , KC_QUOT       , KC_LBRC         , KC_RBRC        , KC_COLN    , XXXXXXX     , _______   ,
    _______          , KC_GRV     , KC_PIPE      , KC_BSLS      , KC_UNDS      , KC_BSPC , KC_DEL    , KC_MINS       , KC_LT           , KC_GT          , KC_QUES    , _______     , _______   ,
    _______          , _______    , _______      , _______      , _______      , _______ , _______   , _______       , _______         , _______        
  ),
  [_DK] = LAYOUT(
    XXXXXXX          , XXXXXXX    , XXXXXXX      , XXXXXXX      , XXXXXXX      , XXXXXXX , XXXXXXX   , XXXXXXX       , XXXXXXX         , XXXXXXX        , XXXXXXX    , XXXXXXX     , XXXXXXX   , _______         , _______ ,
    _______          , KC_1       , KC_2         , KC_3         , KC_4         , KC_5    , KC_HOME   , KC_PGDOWN     , KC_PGUP         , KC_END         , XXXXXXX    , XXXXXXX     , XXXXXXX   , XXXXXXX         , _______ ,
    TG(_DK)          , KC_6       , KC_7         , KC_8         , KC_9         , KC_0    , KC_LEFT   , KC_DOWN       , KC_UP           , KC_RGHT        , KC_EQL     , XXXXXXX     , _______   ,
    _______          , XXXXXXX    , KC_COLN      , KC_COMM      , KC_DOT       , KC_BSPC , KC_DEL    , KC_PLUS       , KC_MINS         , KC_ASTR        , KC_SLSH    , _______     , _______   ,
    _______          , _______    , _______      , _______      , _______      , _______ , _______   , _______       , _______         , _______        
  ),
  [_RU] = LAYOUT(
    XXXXXXX          , XXXXXXX    , XXXXXXX      , XXXXXXX      , XXXXXXX      , XXXXXXX , XXXXXXX   , XXXXXXX       , XXXXXXX         , XXXXXXX        , XXXXXXX    , XXXXXXX     , XXXXXXX   , _______         , _______ ,
    _______          , MEH(KC_Q)  , MEH(KC_W)    , MEH(KC_E)    , MEH(KC_R)    , XXXXXXX , XXXXXXX   , A(KC_DOWN)    , A(KC_UP)        , XXXXXXX        , XXXXXXX    , XXXXXXX     , XXXXXXX   , XXXXXXX         , _______ ,
    TG(_RU)          , MEH(KC_A)  , MEH(KC_S)    , MEH(KC_D)    , MEH(KC_F)    , XXXXXXX , S(KC_TAB) , S(KC_DOWN)    , S(KC_UP)        , KC_TAB         , XXXXXXX    , XXXXXXX     , _______   ,
    _______          , MEH(KC_Z)  , MEH(KC_X)    , MEH(KC_C)    , MEH(KC_V)    , XXXXXXX , XXXXXXX   , XXXXXXX       , XXXXXXX         , XXXXXXX        , XXXXXXX    , _______     , _______   ,
    _______          , _______    , _______      , _______      , _______      , _______ , _______   , _______       , _______         , _______        
  ),
  [_EI] = LAYOUT(
    XXXXXXX          , XXXXXXX    , XXXXXXX      , XXXXXXX      , XXXXXXX      , XXXXXXX , XXXXXXX   , XXXXXXX       , XXXXXXX         , XXXXXXX        , XXXXXXX    , XXXXXXX     , XXXXXXX   , _______         , _______ ,
    _______          , HYPR(KC_Q) , HYPR(KC_W)   , HYPR(KC_E)   , HYPR(KC_R)   , XXXXXXX , XXXXXXX   , S(G(KC_LBRC)) , S(G(KC_RBRC))   , XXXXXXX        , XXXXXXX    , XXXXXXX     , XXXXXXX   , XXXXXXX         , _______ ,
    TG(_EI)          , HYPR(KC_A) , HYPR(KC_S)   , HYPR(KC_D)   , HYPR(KC_F)   , XXXXXXX , XXXXXXX   , SCMD(KC_B)    , G(KC_P)         , G(KC_F)        , A(G(KC_F)) , XXXXXXX     , _______   ,
    _______          , HYPR(KC_Z) , HYPR(KC_X)   , HYPR(KC_C)   , HYPR(KC_V)   , XXXXXXX , XXXXXXX   , S(G(KC_G))    , G(KC_G)         , S(G(KC_F))     , S(G(KC_H)) , _______     , _______   ,
    _______          , _______    , _______      , _______      , _______      , _______ , _______   , _______       , _______         , _______        
  ),
  [_WO] = LAYOUT(
    XXXXXXX          , XXXXXXX    , XXXXXXX      , XXXXXXX      , XXXXXXX      , XXXXXXX , XXXXXXX   , XXXXXXX       , XXXXXXX         , XXXXXXX        , XXXXXXX    , XXXXXXX     , XXXXXXX   , _______         , _______ ,
    _______          , XXXXXXX    , XXXXXXX      , XXXXXXX      , XXXXXXX      , XXXXXXX , XXXXXXX   , XXXXXXX       , XXXXXXX         , XXXXXXX        , XXXXXXX    , XXXXXXX     , XXXXXXX   , XXXXXXX         , _______ ,
    TG(_WO)          , XXXXXXX    , XXXXXXX      , XXXXXXX      , XXXXXXX      , XXXXXXX , XXXXXXX   , XXXXXXX       , XXXXXXX         , XXXXXXX        , XXXXXXX    , XXXXXXX     , _______   ,
    _______          , XXXXXXX    , XXXXXXX      , XXXXXXX      , XXXXXXX      , XXXXXXX , XXXXXXX   , XXXXXXX       , XXXXXXX         , XXXXXXX        , XXXXXXX    , _______     , _______   ,
    _______          , _______    , _______      , _______      , _______      , _______ , _______   , _______       , _______         , _______        
  )
};
