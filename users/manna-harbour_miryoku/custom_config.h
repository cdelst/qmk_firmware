// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#define XXX KC_NO

#ifdef MIRYOKU_CLIPBOARD_MAC
      #define BASE_A LGUI_T(KC_A)
      #define BASE_S LCTL_T(KC_S)
      #define BASE_E LCTL_T(KC_E)
      #define BASE_O LGUI_T(KC_O)
      #define GUI   KC_LGUI
      #define CTRL  KC_LCTL
#else
      #define BASE_A LCTL_T(KC_A)
      #define BASE_S LGUI_T(KC_S)
      #define BASE_E LGUI_T(KC_E)
      #define BASE_O LCTL_T(KC_O)
      #define GUI   KC_LCTL
      #define CTRL  KC_LGUI
#endif



#define MIRYOKU_LAYER_BASE \
KC_GRV,     KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,                /**/     KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,                    KC_BSLS, \
KC_LSFT,    BASE_A,            LALT_T(KC_R),      BASE_S,            LSFT_T(KC_T),      KC_G,                /**/     KC_M,              LSFT_T(KC_N),      BASE_E,            LALT_T(KC_I),      BASE_O,                     KC_SCLN, \
GUI,        LT(U_BUTTON,KC_Z), ALGR_T(KC_X),      KC_C,              KC_D,              KC_V,                /**/     KC_K,              KC_H,              KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),       KC_END, \
U_NP,       U_NP,              U_NP,              LT(U_PROG,KC_ESC), LT(U_NAV,KC_SPC),  LSFT_T(KC_TAB),      /**/     LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP,                       U_NP

#define MIRYOKU_LAYER_SYM \
KC_NO,      KC_CIRC,           KC_AMPR,           KC_ASTR,           KC_LCBR,           KC_RCBR,             /**/     U_NA,              TD(U_TD_U_BASE),   TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    TD(U_TD_BOOT),              KC_NO,  \
KC_NO,      KC_COLN,           KC_DLR,            KC_PERC,           KC_LBRC,           KC_RBRC,             /**/     U_NA,              KC_LSFT,           CTRL,              KC_LALT,           GUI,                        KC_NO,  \
KC_NO,      KC_TILD,           KC_EXLM,           KC_AT,             KC_HASH,           KC_PIPE,             /**/     U_NA,              TD(U_TD_U_SYM),    TD(U_TD_U_MOUSE),  KC_ALGR,           U_NA,                       KC_NO,  \
U_NP,       U_NP,              U_NP,              KC_LPRN,           KC_RPRN,           KC_UNDS,             /**/     U_NA,              U_NA,              U_NA,              U_NP,              U_NP,                       U_NP 

#define MIRYOKU_LAYER_NUM \
KC_NO,      KC_LBRC,           KC_7,              KC_8,              KC_9,              KC_PLUS,             /**/     U_NA,              TD(U_TD_U_BASE),   TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    TD(U_TD_BOOT),              KC_NO,   \
KC_NO,      KC_SCLN,           KC_4,              KC_5,              KC_6,              KC_EQL,              /**/     U_NA,              KC_LSFT,           CTRL,              KC_LALT,           GUI,                        KC_NO,   \
KC_NO,      KC_GRV,            KC_1,              KC_2,              KC_3,              KC_BSLS,             /**/     U_NA,              TD(U_TD_U_NUM),    TD(U_TD_U_NAV),    KC_ALGR,           U_NA,                       KC_NO,   \
U_NP,       U_NP,              U_NP,              KC_DOT,            KC_0,              KC_MINS,             /**/     U_NA,              U_NA,              U_NA,              U_NP,              U_NP,                       U_NP

#define MIRYOKU_LAYER_FUN \
KC_NO,      KC_F12,            KC_F7,             KC_F8,             KC_F9,             KC_PSCR,             /**/     U_NA,              TD(U_TD_U_BASE),   TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    TD(U_TD_BOOT),              KC_NO,   \
KC_NO,      KC_F11,            KC_F4,             KC_F5,             KC_F6,             KC_SCRL,             /**/     U_NA,              KC_LSFT,           CTRL,              KC_LALT,           GUI,                        KC_NO,   \
KC_NO,      KC_F10,            KC_F1,             KC_F2,             KC_F3,             KC_PAUS,             /**/     U_NA,              TD(U_TD_U_FUN),    TD(U_TD_U_MEDIA),  KC_ALGR,           U_NA,                       KC_NO,   \
U_NP,       U_NP,              U_NP,              KC_APP,            KC_SPC,            KC_TAB,              /**/     U_NA,              U_NA,              U_NA,              U_NP,              U_NP,                       U_NP

#define MIRYOKU_LAYER_MEDIA \
KC_NO,      TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,                /**/     RGB_TOG,           RGB_MOD,           RGB_HUI,           RGB_SAI,           RGB_VAI,                    KC_NO,   \
KC_NO,      GUI,               KC_LALT,           CTRL,              KC_LSFT,           U_NA,                /**/     U_NU,              KC_MPRV,           KC_VOLD,           KC_VOLU,           KC_MNXT,                    KC_NO,   \
KC_NO,      U_NA,              KC_ALGR,           TD(U_TD_U_FUN),    TD(U_TD_U_MEDIA),  U_NA,                /**/     OU_AUTO,           U_NU,              U_NU,              U_NU,              U_NU,                       KC_NO,   \
U_NP,       U_NP,              U_NP,              U_NA,              U_NA,              U_NA,                /**/     KC_MSTP,           KC_MPLY,           KC_MUTE,           U_NP,              U_NP,                       U_NP

#define MIRYOKU_LAYER_MOUSE \
KC_NO,      TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,                /**/     U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,                      KC_NO,   \
KC_NO,      GUI,               KC_LALT,           CTRL,              KC_LSFT,           U_NA,                /**/     U_NU,              KC_MS_L,           KC_MS_D,           KC_MS_U,           KC_MS_R,                    KC_NO,   \
KC_NO,      U_NA,              KC_ALGR,           TD(U_TD_U_SYM),    TD(U_TD_U_MOUSE),  U_NA,                /**/     U_NU,              KC_WH_L,           KC_WH_D,           KC_WH_U,           KC_WH_R,                    KC_NO,   \
U_NP,       U_NP,              U_NP,              U_NA,              U_NA,              U_NA,                /**/     KC_BTN2,           KC_BTN1,           KC_BTN3,           U_NP,              U_NP,                       U_NP

#define MIRYOKU_LAYER_NAV \
KC_NO,      TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,                /**/     U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,                      KC_NO,  \
KC_NO,      GUI,               KC_LALT,           CTRL,              KC_LSFT,           U_NA,                /**/     CW_TOGG,           KC_LEFT,           KC_DOWN,           KC_UP,             KC_RGHT,                    KC_NO,  \
KC_NO,      U_NA,              KC_ALGR,           TD(U_TD_U_NUM),    TD(U_TD_U_NAV),    U_NA,                /**/     KC_INS,            KC_HOME,           KC_PGDN,           KC_PGUP,           KC_END,                     KC_NO,  \
U_NP,       U_NP,              U_NP,              U_NA,              U_NA,              U_NA,                /**/     KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP,                       U_NP 

#define MIRYOKU_LAYER_BUTTON \
KC_NO,      U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,               /**/     U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,                      KC_NO,   \
KC_NO,      GUI,               KC_LALT,           CTRL,              KC_LSFT,           U_NU,                /**/     U_NU,              KC_LSFT,           CTRL,              KC_LALT,           GUI,                        KC_NO,   \
KC_NO,      U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,               /**/     U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,                      KC_NO,   \
U_NP,       U_NP,              U_NP,              KC_BTN3,           KC_BTN1,           KC_BTN2,             /**/     KC_BTN2,           KC_BTN1,           KC_BTN3,           U_NP,              U_NP,                       U_NP   

#define MIRYOKU_LAYER_TAP \
KC_NO,      KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,                /**/     KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,                    KC_NO,   \
KC_NO,      KC_A,              KC_R,              KC_S,              KC_T,              KC_G,                /**/     KC_M,              KC_N,              KC_E,              KC_I,              KC_O,                       KC_NO,   \
KC_NO,      KC_Z,              KC_X,              KC_C,              KC_D,              KC_V,                /**/     KC_K,              KC_H,              KC_COMM,           KC_DOT,            KC_SLSH,                    KC_NO,   \
U_NP,       U_NP,              U_NP,              KC_ESC,            KC_SPC,            KC_TAB,              /**/     KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP,                       U_NP       

#define MIRYOKU_LAYER_EXTRA \
KC_NO,      KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,                /**/     KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,                    KC_NO,   \
KC_NO,      BASE_A,            LALT_T(KC_R),      BASE_S,            LSFT_T(KC_T),      KC_G,                /**/     KC_M,              LSFT_T(KC_N),      BASE_E,            LALT_T(KC_I),      BASE_O,                     KC_NO,   \
KC_NO,      LT(U_BUTTON,KC_Z), ALGR_T(KC_X),      KC_C,              KC_D,              KC_V,                /**/     KC_K,              KC_H,              KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH),       KC_NO,   \
U_NP,       U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),  /**/     LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP,                       U_NP

#define MIRYOKU_LAYER_PROG \
KC_NO,      TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,                /**/     KC_LABK,           KC_EXLM,           KC_AMPR,           KC_ASTR,           KC_GRAVE,                   KC_NO,  \
KC_NO,      GUI,               KC_LALT,           CTRL,              KC_LSFT,           U_NA,         /**/     KC_QUOT,           KC_LPRN,           KC_LCBR,           KC_LBRC,           KC_SCLN,                    CUST_COLON_EQUAL,  \
KC_NO,      U_NA,              KC_ALGR,           TD(U_TD_U_NUM),    TD(U_TD_U_NAV),    U_NA,                /**/     KC_SLASH,          KC_EQUAL,          KC_MINUS,          KC_COMM,           KC_DOT,                     KC_QUES,  \
U_NP,       U_NP,              U_NP,              U_NA,              MO(U_MEDIA),       U_NA,                /**/     MO(U_PROGB),           KC_BSPC,           KC_DEL,            U_NP,              U_NP,                       U_NP 

#define MIRYOKU_LAYER_PROGB \
KC_NO,      TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,                /**/     KC_RABK,           KC_QUES,           KC_PIPE,           KC_CIRC,           KC_TILD,                    KC_NO,  \
KC_NO,      GUI,               KC_LALT,           CTRL,              KC_LSFT,           U_NA,                /**/     KC_DQUO,           KC_RPRN,           KC_RCBR,           KC_RBRC,           KC_COLN,                    CUST_RIGHT_ARROW,  \
KC_NO,      U_NA,              KC_ALGR,           TD(U_TD_U_NUM),    TD(U_TD_U_NAV),    U_NA,                /**/     KC_BSLS,           KC_PLUS,           KC_UNDS,           KC_COMM,           KC_DOT,                     KC_QUES,  \
U_NP,       U_NP,              U_NP,              U_NA,              MO(U_MEDIA),       U_NA,                /**/     KC_LSFT,           KC_BSPC,           KC_DEL,            U_NP,              U_NP,                       U_NP 


#define MIRYOKU_MAPPING( \
K00,  K01,  K02,  K03,  K04, K05,     K06,  K07,  K08,  K09, K10, K11, \
K12,  K13,  K14,  K15,  K16, K17,     K18,  K19,  K20,  K21, K22, K23, \
K24,  K25,  K26,  K27,  K28, K29,     K30,  K31,  K32,  K33, K34, K35, \
N36,  N37,  K38,  K39,  K40, K41,     K42,  K43,  K44,  K45, K46, K47 \
) \
LAYOUT_split_3x6_3( \
      K00,  K01,  K02,  K03,  K04,  K05,       K06,  K07,  K08,  K09,  K10, K11, \
      K12,  K13,  K14,  K15,  K16,  K17,       K18,  K19,  K20,  K21,  K22, K23, \
      K24,  K25,  K26,  K27,  K28,  K29,       K30,  K31,  K32,  K33,  K34, K35, \
                         K39,  K40,  K41,     K42,  K43,  K44 \
)
