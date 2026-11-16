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
extern void sleepModeSetEnabled(void);

/* Clears the given bits of the flag word at +0x14, records whether any is left and refreshes through sleepModeSetEnabled. */
void gameDataFlagsClearAndRefresh(u32 mask)
{
    g_gameDataBlocks.flags &= ~mask;
    if (g_gameDataBlocks.flags != 0) {
        g_gameDataBlocks.noFlags = 0;
        sleepModeSetEnabled();
        return;
    }
    g_gameDataBlocks.noFlags = 1;
    sleepModeSetEnabled();
}

} /* extern "C" */
