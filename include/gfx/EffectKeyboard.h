#ifndef GFX_EFFECTKEYBOARD_H
#define GFX_EFFECTKEYBOARD_H
#include "common.h"
#include <stddef.h>

struct KeyboardState {
    s32 x; // 0x00
    s32 y; // 0x04
    s32 mode; // 0x08
    s32 cursor; // 0x0c
    s32 length; // 0x10
    s32 maxLength; // 0x14
    s32 result; // 0x18
    s32 formatArg; // 0x1c
    u8 unk20;
    u8 text[1]; // 0x21
};
typedef char KeyboardStateLayoutCheck[
    offsetof(KeyboardState, mode) == 8 && offsetof(KeyboardState, formatArg) == 0x1c &&
    offsetof(KeyboardState, text) == 0x21 && sizeof(KeyboardState) == 0x24 ? 1 : -1];
#endif
