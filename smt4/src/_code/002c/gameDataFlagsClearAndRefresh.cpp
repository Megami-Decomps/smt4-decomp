#include "common.h"
#include "gamedata/GameDataAccess_Smt4.h"

extern "C" {

typedef struct GameDataFlags {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ u8 noFlags;      /* 1 when `flags` is zero */
    /* 0x02 */ u8 unk02[0x12];
    /* 0x14 */ u32 flags;
} GameDataFlags;

extern GameDataFlags g_gameDataBlocks;
extern void FUN_002c411c(void);

/* Clears the given bits of the flag word at +0x14, records whether any is left and refreshes through FUN_002c411c. */
void gameDataFlagsClearAndRefresh(u32 mask)
{
    g_gameDataBlocks.flags &= ~mask;
    if (g_gameDataBlocks.flags != 0) {
        g_gameDataBlocks.noFlags = 0;
        FUN_002c411c();
        return;
    }
    g_gameDataBlocks.noFlags = 1;
    FUN_002c411c();
}

} /* extern "C" */
