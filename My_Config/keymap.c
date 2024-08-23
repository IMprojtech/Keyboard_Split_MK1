/*
 * keymap.c for the Keyboard Split MK1
 * Layout: Italian (IT)
 *
 * This keymap is based on the Italian keyboard layout.
 * It includes custom modifications to optimize the typing experience.
 *
 * Make sure to configure the QMK firmware correctly to work with this layout.
 *
 * Hardware: Keyboard Split MK1, built with Arduino Micro controllers.
 * Firmware: QMK Firmware
 */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT_split_3x6_3(
KC_TAB,KC_Q,KC_W,KC_E,KC_R,KC_T,                                                KC_Y,KC_U,KC_I,KC_O,KC_P,KC_BSPC,
KC_LSFT,KC_A,KC_S,KC_D,KC_F,KC_G,                                               KC_H,KC_J,KC_K,KC_L,KC_GRV,KC_RSFT,
KC_LCTL,KC_Z,KC_X,KC_C,KC_V,KC_B,                                               KC_N,KC_M,KC_COMM,KC_DOT,KC_SLSH,KC_RCTL,
KC_LGUI,MO(1),KC_SPC,                                                           KC_ENT,MO(2),KC_LGUI),

[1] = LAYOUT_split_3x6_3(
KC_ESC,KC_1,KC_2,KC_3,KC_4,KC_5,                                                KC_6,KC_7,KC_8,KC_9,KC_0,KC_DEL,
KC_LSFT,LSFT(KC_1),LSFT(KC_2),LSFT(KC_3),LSFT(KC_4),LSFT(KC_5),                 LSFT(KC_6),LSFT(KC_7),LSFT(KC_8),LSFT(KC_9),LSFT(KC_0),KC_RSFT,
KC_LCTL,KC_NUBS,RALT(KC_SCLN),RALT(KC_QUOT),KC_RBRC,LSFT(KC_RBRC),              KC_MINS,LSFT(KC_DOT),RALT(KC_LBRC),RALT(KC_RBRC),RALT(KC_EQL),KC_RCTL,
KC_LGUI,KC_TRNS,KC_SPC,                                                         KC_ENT,MO(3),KC_LGUI),

[2] = LAYOUT_split_3x6_3(
KC_ESC,KC_1,KC_2,KC_3,KC_4,KC_5,                                                KC_6,KC_7,KC_8,KC_9,KC_0,KC_DEL,
KC_LSFT,LSFT(KC_1),LSFT(KC_2),LSFT(KC_3),LSFT(KC_4),LSFT(KC_5),                 LSFT(KC_6),LSFT(KC_7),LSFT(KC_8),LSFT(KC_9),LSFT(KC_0),KC_RSFT,
KC_LCTL,KC_NUBS,RALT(KC_SCLN),RALT(KC_QUOT),KC_RBRC,LSFT(KC_RBRC),              KC_MINS,LSFT(KC_DOT),RALT(KC_LBRC),RALT(KC_RBRC),RALT(KC_EQL),KC_RCTL,
KC_LGUI,MO(3),KC_SPC,                                                           KC_ENT,KC_TRNS,KC_LGUI),

[3] = LAYOUT_split_3x6_3(
KC_ESC,KC_PSCR,KC_NO,KC_LBRC,KC_NO,KC_NO,                                       KC_NO,KC_BSLS,KC_EQL,KC_SCLN,KC_PGUP,KC_DEL,
KC_LSFT,KC_QUOT,KC_NO,KC_NO,KC_NO,QK_BOOT,                                      KC_LEFT,KC_DOWN,KC_UP,KC_RGHT,KC_PGDN,KC_RSFT,
KC_LCTL,KC_LALT,KC_NO,KC_NO,KC_NO,KC_NO,                                        KC_NO,KC_NO,KC_NO,KC_APP,KC_RALT,KC_RCTL,
KC_LGUI,KC_TRNS,KC_SPC,                                                         KC_ENT,KC_TRNS,KC_LGUI)
};
