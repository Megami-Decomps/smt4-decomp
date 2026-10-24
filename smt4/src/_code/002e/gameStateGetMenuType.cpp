#include "common.h"

extern "C" {

/* The head of the game state block. */
struct GameStateHead {
    s32 mode;
    s32 submode;
};

extern GameStateHead g_gameState; /* 0x49f91c */

/* Maps a script category (0..0x3c) to its menu type. */
u32 gameStateGetMenuType(u32 category)
{
    switch (category) {
    case 0:
        return 1;
    case 1:
        return 2;
    case 2:
        return 3;
    case 4:
        return 6;
    case 5:
        return 9;
    case 6:
        if (g_gameState.mode != 25 && g_gameState.mode != 26 && g_gameState.mode != 27 && g_gameState.mode != 28 && g_gameState.mode != 29 &&
            g_gameState.mode != 30 && g_gameState.mode != 31 && g_gameState.mode != 32 && g_gameState.mode != 33 && g_gameState.mode != 34 &&
            g_gameState.mode != 35) {
            if (g_gameState.mode != 5 || g_gameState.submode != 6) {
                return 14;
            }
        }
        return 15;
    case 7:
        if (g_gameState.mode == 26 || (g_gameState.mode == 5 && g_gameState.submode == 6)) {
            return 17;
        }
        return 16;
    case 8:
        return 18;
    case 9:
        return 19;
    case 3:
    case 0x12:
        return 4;
    case 0x13:
        return 12;
    case 0x14:
    case 0x16:
        return 13;
    case 0x19:
        return 21;
    case 0x1a:
        return 22;
    case 0x18:
    case 0x1b:
    case 0x1c:
        return 20;
    case 0xc:
    case 0xd:
    case 0xf:
    case 0x10:
    case 0x1d:
        return 32;
    case 0x15:
    case 0x1e:
        return 11;
    case 0x20:
        return 24;
    case 0x21:
        return 25;
    case 0x22:
        return 10;
    case 0x23:
        return 27;
    case 0x24:
        return 26;
    case 0x25:
        return 5;
    case 0x1f:
    case 0x28:
        return 23;
    case 0xa:
    case 0x2a:
        return 7;
    case 0x2b:
        return 33;
    case 0xb:
    case 0x2c:
    case 0x2d:
        return 8;
    case 0x2e:
        return 34;
    case 0x36:
        return 36;
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x35:
    case 0x37:
        return 35;
    case 0x3c:
        return 39;
    default:
        return 0;
    }
}

} /* extern "C" */
