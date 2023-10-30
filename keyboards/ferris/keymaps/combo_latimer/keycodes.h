#pragma once
#include QMK_KEYBOARD_H

enum layers {
    _BASE,
    _NUMBERS,
    _MODS,
    _FUNC,
    _SYM,
    _BOOTLOADER,
    _COMBO_REF,
};

#define UK_AT LSFT(KC_QUOTE)
