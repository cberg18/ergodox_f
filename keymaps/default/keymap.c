#include QMK_KEYBOARD_H
#include "version.h"

#define BASE 0 //base layer

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |   ESC  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |           |      |  F7  |  F8  |  F9  |  F10 |  F11 |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |   =    |   1  |   2  |   3  |   4  |   5  | LEFT |           | RIGHT|   6  |   7  |   8  |   9  |   0  |   -    |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Del    |   Q  |   W  |   E  |   R  |   T  |  L1  |           |  L1  |   Y  |   U  |   I  |   O  |   P  |   \    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | BkSp   |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |; / L2|' / Cmd |
 * |--------+------+------+------+------+------| Hyper|           | Meh  |------+------+------+------+------+--------|
 * | LShift |  Z   |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |//Ctrl| RShift |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |Grv/L1|  '"  |AltShf| Left | Right|                                       |  Up  | Down |   [  |   ]  | ~L1  |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        | App  | LGui |       | Alt  |Ctrl/Esc|
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      | Home |       | PgUp |        |      |
 *                                 | Space|Backsp|------|       |------|  Tab   |Enter |
 *                                 |      |ace   | End  |       | PgDn |        |      |
 *                                 `--------------------'       `----------------------'
 */
    [0] = LAYOUT(                                                                                                                                                                         \
    // left hand
    KC_ESC,       KC_F1,       KC_F2,     KC_F3,      KC_F4,      KC_F5,      KC_F6,                KC_TRNS,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,     \
    KC_EQL,       KC_1,        KC_2,      KC_3,       KC_4,       KC_5,       KC_LEFT,              KC_RGHT,      KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,    \
    KC_DEL,       KC_Q,        KC_W,      KC_E,       KC_R,       KC_T,       KC_TRNS,              KC_TRNS,      KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_BSLS,    \
    KC_BSPC,      KC_A,        KC_S,      KC_D,       KC_F,       KC_G,       KC_TRNS,              KC_H,         KC_J,       KC_K,       KC_L,       KC_TRNS,    KC_TRNS,                \
    KC_LSFT,      KC_TRNS,     KC_X,      KC_C,       KC_V,       KC_B,       KC_TRNS,              KC_TRNS,      KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_TRNS,                \
    KC_TRNS,      KC_QUOT,     KC_TRNS,   KC_LEFT,    KC_RGHT,                                      KC_UP,        KC_DOWN,    KC_LBRC,    KC_RBRC,    KC_TRNS,                            \
                                                                    KC_TRNS,    KC_LGUI,              KC_LALT,      KC_TRNS,                                                              \
                                                        KC_SPC,     KC_BSPC,    KC_HOME,              KC_PGUP,      KC_TAB,     KC_ENT                                                    \
                                                                                KC_END,               KC_PGDN,                                                                            \
    )
};


