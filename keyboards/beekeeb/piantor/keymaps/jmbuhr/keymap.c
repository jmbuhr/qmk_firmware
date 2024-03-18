// Copyright 2022 beekeeb
// SPDX-License-Identifier: GPL-2.0-or-later


#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * From https://config.qmk.fm/#/beekeeb/piantor/LAYOUT_split_3x6_3
 * and keymap.json
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x6_3(KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_TAB, KC_ESC, LSFT_T(KC_A), LCTL_T(KC_S), LALT_T(KC_D), LGUI_T(KC_F), KC_G, KC_H, LGUI_T(KC_J), RALT_T(KC_K), RCTL_T(KC_L), RSFT_T(KC_SCLN), KC_ESC, KC_NO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_NO, KC_LGUI, RALT_T(KC_ESC), LT(1,KC_SPC),  LT(1,KC_SPC), RALT_T(KC_BSPC), KC_ENT),
	[1] = LAYOUT_split_3x6_3(KC_LT, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE, KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_ESC, KC_GRV, KC_GRV, KC_QUOT, KC_MINS, KC_EQL, KC_TAB, KC_TAB, KC_LBRC, KC_RBRC, KC_PLUS, KC_BSLS, KC_NO, KC_NO, LT(2,KC_ENT), KC_NO, KC_NO, KC_ENT, KC_DEL),
	[2] = LAYOUT_split_3x6_3(KC_NO, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, RGB_TOG, BL_TOGG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO, KC_NO, KC_NO, KC_F11, KC_F12, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)





