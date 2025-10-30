/* Copyright 2023 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

enum layers {
    L0,
    L1,
    L2,
    L3,
    L4,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [L0] = LAYOUT_61_ansi(
        LT(2, KC_GRV),          KC_1,               KC_2,               KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,   KC_EQL,  KC_BSPC,
        MT(MOD_LCTL, KC_TAB),   KC_Q,               KC_W,               KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,   KC_RBRC, KC_BSLS,
        LT(2, KC_ESC),          KC_A,               KC_S,               KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,
        KC_LSFT,                KC_Z,               KC_X,               KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,             KC_RSFT,
        LM(1, MOD_LCTL),        LM(1, MOD_LALT),    LM(1, MOD_LGUI),    KC_SPC,                                                               KC_RGUI,  MO(L2),    MO(L3),  KC_RCTL),

    [L1] = LAYOUT_61_ansi(
        KC_GRV,         KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,
        KC_TAB,         KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,
        LT(2, KC_ESC),  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,
        KC_LSFT,          KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,                    KC_RSFT,
        KC_LCTL,  KC_LALT,  KC_LGUI,                                KC_SPC,                                      KC_RGUI, MO(L2),   MO(L3),   KC_RCTL),

    [L2] = LAYOUT_61_ansi(
        _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,  _______,
        _______,  XXXXXXX,  LM(4, MOD_LCTL | MOD_LALT | MOD_LGUI),  XXXXXXX,  XXXXXXX,  XXXXXXX,  G(KC_LEFT),  XXXXXXX,  XXXXXXX,  G(KC_RIGHT),  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
        _______,  LM(4, MOD_HYPR), LM(3, MOD_LCTL | MOD_LALT),  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT,  XXXXXXX,  XXXXXXX,            _______,
        _______,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,             _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______),

    [L3] = LAYOUT_61_ansi(
        XXXXXXX,  BT_HST1,  BT_HST2,  BT_HST3,  RGB_HUD,  RGB_HUI,  RGB_SAD,  RGB_SAI,  RGB_VAD,  RGB_VAI,  RGB_SPD,  RGB_SPI,  RGB_MOD,  RGB_TOG,
        XXXXXXX,  KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_VOLU,  KC_I,     KC_O,     KC_MPLY,  KC_LBRC,  KC_RBRC,  KC_BSLS,
        RGB_TOG,  KC_A,     KC_S,     KC_VOLD,  KC_F,     KC_G,     KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT, KC_SCLN,  KC_QUOT,            KC_ENT,
        XXXXXXX,            KC_Z,     KC_X,     KC_C,     KC_V,     BAT_LVL,  KC_N,     KC_MUTE,  KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,
        XXXXXXX,  XXXXXXX,  XXXXXXX,                                XXXXXXX,                                XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX),

    [L4] = LAYOUT_61_ansi(
        XXXXXXX,  KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,   KC_MINS,  KC_EQL,   XXXXXXX,
        XXXXXXX,  KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,
        XXXXXXX,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT, KC_SCLN,  KC_QUOT,            XXXXXXX,
        XXXXXXX,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,             XXXXXXX,
        XXXXXXX,  XXXXXXX,  XXXXXXX,                                XXXXXXX,                                XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX),
};
