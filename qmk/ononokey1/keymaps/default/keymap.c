// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * 
     */
    [0] = LAYOUT(
        KC_ESC, KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,
        KC_GRV, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_HOME, 
        KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_END, 
        KC_LCTL,KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_PGUP, 
        KC_LSFT,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_PGDN, 
        KC_LCTL,KC_LGUI,KC_LALT,MO(2),  KC_LSFT,KC_SPC, KC_ENT,
        
        KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, KC_CAPS, 
        KC_DEL, KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_BSPC, 
        KC_BSPC,KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC, 
        KC_ENT, KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT, 
        _______,KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_RSFT, 
        KC_ALGR,KC_SPC, MO(2),  KC_LEFT,KC_DOWN,KC_UP,  KC_RGHT
    ),
    // Colemak DH overwrite layout
    [1] = LAYOUT(
        _______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,
        _______,KC_Q,   KC_W,   KC_F,   KC_P,   KC_B,   _______,
        _______,KC_A,   KC_R,   KC_S,   KC_T,   KC_G,   _______,
        _______,KC_Z,   KC_X,   KC_C,   KC_D,   KC_V,   _______,
        _______,_______,_______,_______,_______,_______,_______,
        
        _______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______,
        _______,KC_J,   KC_L,   KC_U,   KC_Y,   KC_SCLN,_______,
        _______,KC_M,   KC_N,   KC_E,   KC_I,   KC_O,   _______,
        _______,KC_K,   KC_H,   _______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,_______
    ),
    [2] = LAYOUT(
        _______,_______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,KC_PSCR,
        _______,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,KC_SCRL,
        _______,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,KC_NUM,
        _______,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,_______,
        _______,_______,_______,_______,_______,_______,_______,
        
        _______,_______,_______,_______,_______,_______,TG(1),
        KC_INS, _______,_______,_______,_______,_______,_______,
        KC_PAUS,XXXXXXX,KC_EQL ,KC_UP,  KC_MINS,XXXXXXX,KC_RBRC,
        _______,XXXXXXX,KC_LEFT,KC_DOWN,KC_RGHT,XXXXXXX,_______,
        _______,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,KC_BSLS,_______,
        _______,_______,_______,_______,_______,_______,_______
    )
};
