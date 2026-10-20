#include "common.h"

extern "C" {

typedef struct GameDataFlagsView {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ u8 noFlags;  /* 1 when `flags` is zero */
    /* 0x02 */ u8 unk02[0x16];
    /* 0x18 */ u32 flags;
} GameDataFlagsView;

extern GameDataFlagsView g_gameDataBlocks;

s32 FUN_00140e00(void);

/* Clears the given bits of the flag word and updates the "no flags set" byte. */
void FUN_00137ea0(u32 mask)
{
    g_gameDataBlocks.flags &= ~mask;
    if (g_gameDataBlocks.flags != 0) {
        g_gameDataBlocks.noFlags = 0;
        FUN_00140e00();
        return;
    }
    g_gameDataBlocks.noFlags = 1;
    FUN_00140e00();
}

} /* extern "C" */
