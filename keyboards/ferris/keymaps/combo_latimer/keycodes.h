#pragma once
#include QMK_KEYBOARD_H

enum layers {
    _QWERTY,
    _NUMBERS,
    _MODS,
    _FUNC,
    _SYM,
    _5,
    _6,
    _BOOTLOADER,
};

#define UK_AT LSFT(KC_QUOTE)
