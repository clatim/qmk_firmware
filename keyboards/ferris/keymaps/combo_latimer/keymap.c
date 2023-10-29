#include <stdint.h>
#include QMK_KEYBOARD_H
#include "keycodes.h"
#include "g/keymap_combo.h"

// Define the keymap
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_split_3x5_2(
                KC_Q,         KC_W,         KC_E,        KC_R, KC_T,                     KC_Y, KC_U, KC_I, KC_O, KC_P,
                KC_A,         KC_S,         KC_D,        KC_F, KC_G,                     KC_H, KC_J, KC_K, KC_L, KC_SCLN,
                KC_Z,         KC_X,         KC_C,        KC_V, KC_B,                     KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,
                                                         OSL(_MODS), KC_LSFT,                 KC_SPC, MO(_NUMBERS)
    ),
    [_NUMBERS]    = LAYOUT_split_3x5_2(
        MO(_FUNC), UK_AT, XXXXXXX, XXXXXXX, XXXXXXX,                KC_ASTR, KC_7, KC_8, KC_9, KC_PLUS,
        KC_LT, KC_SLASH, KC_LCBR, KC_LPRN, KC_LBRC,                KC_SLASH, KC_4, KC_5, KC_6, KC_MINUS,
        KC_GT, KC_NUBS, KC_RCBR, KC_RPRN, KC_RBRC,                KC_0, KC_1, KC_2, KC_3, KC_EQL,
                                    OSL(_SYM), KC_LSFT,                   MO(_BOOTLOADER), XXXXXXX
    ),
    [_MODS]    = LAYOUT_split_3x5_2(
        KC_ESC, XXXXXXX, XXXXXXX, LCTL(KC_A), XXXXXXX,                KC_PGUP, KC_HOME, KC_UP, KC_END, KC_INS,
        OSM(MOD_LALT), OSM(MOD_LGUI), OSM(MOD_LSFT), OSM(MOD_LCTL), XXXXXXX,                KC_PGDN, KC_LEFT, KC_DOWN, KC_RIGHT, KC_PSCR,
        LCTL(KC_Z), LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), KC_LCMD,                KC_DELETE, KC_BACKSPACE, KC_TAB, KC_APP, XXXXXXX,
                                               XXXXXXX, MO(_BOOTLOADER),        KC_ENTER, OSL(_FUNC)
    ),
    [_FUNC]    = LAYOUT_split_3x5_2(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                KC_F12, KC_F7, KC_F8, KC_F9, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                KC_F11, KC_F4, KC_F5, KC_F6, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                KC_F10, KC_F1, KC_F2, KC_F3, XXXXXXX,
                                               XXXXXXX, XXXXXXX,        XXXXXXX, XXXXXXX
    ),
    [_SYM]    = LAYOUT_split_3x5_2(
        KC_CIRC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                KC_WH_U, KC_BTN1, KC_MS_U, KC_BTN2, XXXXXXX,
        KC_BSLS, KC_TILD, KC_AMPR, KC_UNDS, KC_AT,                KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R, XXXXXXX,
        KC_GRAVE, XXXXXXX, KC_HASH, KC_PIPE, KC_QUOTE,                XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                               XXXXXXX, XXXXXXX,        XXXXXXX, XXXXXXX
    ),
    [_BOOTLOADER]    = LAYOUT_split_3x5_2(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOTLOADER,                QK_BOOTLOADER, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                               XXXXXXX, XXXXXXX,        XXXXXXX, XXXXXXX
    )
};
