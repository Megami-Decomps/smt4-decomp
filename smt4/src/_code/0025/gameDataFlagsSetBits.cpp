#include "common.h"
#include "gamedata/GameDataAccess_Smt4.h"

extern "C" {

typedef struct GameDataFlags {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ u8 clear;
    /* 0x02 */ u8 unk02[0x12];
    /* 0x14 */ u32 flags;
} GameDataFlags;

extern GameDataFlags g_gameDataBlocks;

s32 FUN_002c411c(s32 arg);

/* Clears the byte at +1 of the game data table and ORs `flags` into its flag word. */
void gameDataFlagsSetBits(u32 flags)
{
    g_gameDataBlocks.clear = 0;
    g_gameDataBlocks.flags |= flags;
    FUN_002c411c(0);
}

}
