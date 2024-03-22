// Copyright 2023 Severin Meyer (@sevmeyer), Bernhard Tittelbach, Michael Klamminger
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,        KC_6,    KC_7,    KC_8,    KC_9,     KC_0,    KC_MINS, KC_EQL,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,        KC_Y,    KC_U,    KC_I,    KC_O,     KC_P,    KC_LBRC, KC_RBRC,
        TT(1),   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,        KC_H,    KC_J,    KC_K,    KC_L,     KC_SCLN, KC_QUOT, KC_BSLS,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,        KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH, KC_UP,   KC_RSFT,
        KC_LCTL, XXXXXXX, KC_LGUI, KC_LALT, KC_ENT,  KC_SPC,      KC_SPC,  KC_ENT,  KC_RALT, KC_DEL,   KC_LEFT, KC_DOWN, KC_RIGHT
    ),
    [1] = LAYOUT(
        KC_GRV,  KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,      KC_F12,  XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, KC_BSPC, KC_DEL,
        TG(2),   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,       KC_F6,   XXXXXXX, KC_UP,   XXXXXXX,  XXXXXXX, KC_LPRN, KC_RPRN,
        _______, XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, KC_MSTP,     XXXXXXX, KC_LEFT, KC_DOWN, KC_RIGHT, XXXXXXX, XXXXXXX, KC_APP,
        _______, KC_NUBS, KC_MRWD, KC_CALC, KC_MFFD, KC_MUTE,     KC_NUM,  XXXXXXX, XXXXXXX, XXXXXXX,  KC_PAST, KC_PGUP, _______,
        _______, XXXXXXX, _______, _______, KC_BSPC, _______,     _______, _______, _______, KC_INS,   KC_HOME, KC_PGDN, KC_END
    ),
    [2] = LAYOUT(
        KC_GRV,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, KC_P7,   KC_P8,   KC_P9,    KC_PMNS, XXXXXXX, KC_DEL,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, KC_P4,   KC_P5,   KC_P6,    KC_PPLS, XXXXXXX, KC_RPRN,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, KC_P1,   KC_P2,   KC_P3,    KC_PSLS, XXXXXXX, KC_APP,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     KC_NUM,  KC_P0,   KC_PDOT, KC_PENT,  KC_PAST, XXXXXXX, _______,
        _______, XXXXXXX, _______, _______, _______, _______,     _______, _______, _______, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX
    )
};


#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN) },
    [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
};
#endif
