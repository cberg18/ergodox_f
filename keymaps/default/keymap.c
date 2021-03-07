#include QMK_KEYBOARD_H
#include "version.h"

#define BASE 0 //base layer

/*
┌─┬─┐
│ │	│
├─┼─┤
│ │	│
└─┴─┘
*/
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |   ESC  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |           |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12   |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |  Grave |   1  |   2  |   3  |   4  |   5  |  (   |           |  )   |   6  |   7  |   8  |   9  |   0  |   -    |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |  Tab   |   Q  |   W  |   E  |   R  |   T  |  [   |           |  ]   |   Y  |   U  |   I  |   O  |   P  |   \ |  |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | Caps   |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |        |
 * |--------+------+------+------+------+------|  {   |           |   }  |------+------+------+------+------+--------|
 * | LShift |  Z   |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |  /   | RShift |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |LCTRL | LGUI | LALT | Left | Right|                                       |  Up  | Down | LALT | RGUI | LCTRL  |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        | DEL  | LGui |       | Alt  |Ctrl/Esc|
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      | Home |       | PgUp |        |      |
 *                                 | Space|Backsp|------|       |------|  Tab   |Enter |
 *                                 |      |ace   | End  |       | PgDn |        |      |
 *                                 `--------------------'       `----------------------'
 */
    [0] = LAYOUT(                                                                                                                                                                         \
    // left hand
    KC_ESC,       KC_F1,       KC_F2,     KC_F3,      KC_F4,      KC_F5,      KC_F6,                KC_TRNS,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,     \
    KC_EQL,       KC_1,        KC_2,      KC_3,       KC_4,       KC_5,       KC_LPRN,              KC_RPRN,      KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,    \
    KC_DEL,       KC_Q,        KC_W,      KC_E,       KC_R,       KC_T,       KC_LBRC,              KC_RBRC,      KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_BSLS,    \
    KC_BSPC,      KC_A,        KC_S,      KC_D,       KC_F,       KC_G,       KC_LCBR,              KC_RCBR,      KC_J,       KC_K,       KC_L,       KC_TRNS,    KC_TRNS,                \
    KC_LSFT,      KC_Y,        KC_X,      KC_C,       KC_V,       KC_B,                                           KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_TRNS,                \
    KC_TRNS,      KC_QUOT,     KC_TRNS,   KC_LEFT,    KC_RGHT,                                                    KC_UP,        KC_DOWN,    KC_LBRC,    KC_RBRC,    KC_TRNS,              \
                                                                    KC_DEL,    KC_LGUI,             KC_LALT,      KC_TRNS,                                                                \
                                                        KC_SPC,     KC_BSPC,    KC_HOME,            KC_PGUP,      KC_TAB,     KC_ENT                                                      \
                                                                                KC_END,             KC_PGDN,                                                                              \
    )
};
