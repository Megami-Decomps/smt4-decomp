/* NON_MATCHING: retail loads the data block pointer twice and reads the case 2 handle through a register offset (0x2034) instead of the folded base + 0x2000 form */
#include "common.h"

struct GameDataA {
    u8 unk0000[0x2034];  // 0x0000
    u32 handle;          // 0x2034
};

struct GameGlobalsA {
    u8 unk00[4];     // 0x00
    GameDataA *data; // 0x04
};

extern "C" {

extern GameGlobalsA g_gameGlobals; /* 0x588fd0 */

void FUN_0040b730(u32 handle, s32 mode, s32 arg);
void gameStateChange(s32 state);

/* Calls FUN_0040b730 on the data block's handle with mode 0, 1 or 2, then switches to state 7. */
void FUN_0038b57c(s32 mode)
{
    switch (mode) {
    case 0:
        FUN_0040b730(g_gameGlobals.data->handle, 0, 7);
        break;
    case 1:
        FUN_0040b730(g_gameGlobals.data->handle, 1, 7);
        break;
    case 2:
        FUN_0040b730(g_gameGlobals.data->handle, 2, 7);
        break;
    }
    gameStateChange(7);
}

} /* extern "C" */
