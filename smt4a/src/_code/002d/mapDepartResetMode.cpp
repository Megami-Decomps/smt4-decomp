#include "common.h"
extern "C" {
extern struct { u8 unk00[0x5F0]; u32 mode; } g_gameState;
extern struct { u32 unk00; struct { u32 value; u8 unk04[0xAC]; u32 progress; u8 unkB4[0x14]; u32 mode; } *work; } DAT_005806a0;
/* Clears the active map work, selecting the default mode outside mode one. */
void mapDepartResetMode(void)
{
    if (g_gameState.mode == 1) {
        DAT_005806a0.work->mode = 0;
    } else {
        DAT_005806a0.work->value = 0;
        DAT_005806a0.work->mode = 2;
        DAT_005806a0.work->progress = 0;
    }
}
}
