#ifndef UI_MENU_TRANSITION_H
#define UI_MENU_TRANSITION_H
#include "shard/W5_W5Match2_ScalarArguments.h"
#include <stddef.h>

struct MenuCursorMotion {
    u8 unk00[0x0C]; // 0x00
    s32 fixedX; // 0x0C
    s32 fixedY; // 0x10
    u8 unk14[0x76]; // 0x14
    s8 unk8A; // 0x8A
    u8 unk8B; // 0x8B
};
struct MenuTransitionWork {
    u8 unk00[0x14]; // 0x000
    u32 state; // 0x014
    u32 step; // 0x018
    u8 unk1C[0x7A]; // 0x01C
    u8 unk96[0x32]; // 0x096
    FloatPoint position; // 0x0C8
    u8 unkD0[0xB8]; // 0x0D0
    MenuCursorMotion cursor; // 0x188
};
typedef char MenuCursorMotionSizeCheck[sizeof(MenuCursorMotion) == 0x8C ? 1 : -1];
typedef char MenuTransitionPositionCheck[offsetof(MenuTransitionWork, position) == 0xC8 ? 1 : -1];
typedef char MenuTransitionCursorCheck[offsetof(MenuTransitionWork, cursor) == 0x188 ? 1 : -1];
#endif
