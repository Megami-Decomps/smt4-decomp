#include "common.h"
#include "game/GameState.h"

extern "C" {


typedef struct MapIf {
    /* 0x0000 */ u8 unk0000[0xCCD8];
    /* 0xCCD8 */ s8 counting;
    /* 0xCCD9 */ u8 unkCCD9[3];
    /* 0xCCDC */ s32 counter;
} MapIf;

extern MapIf *g_mapIf;

s32 FUN_001fb5c4(void);
s32 FUN_001f9ce0(void);
s32 effectDrawExpandingPanels(s32 counter);

/* Draws the map interface for the upper screen and advances its frame counter while counting. */
u32 MAPIF_DrawUp(void)
{
    MapIf *mapIf = g_mapIf;

    if (g_gameState.loading == 0) {
        s32 *counter;

        FUN_001fb5c4();
        if (g_gameState.mapId < 100) {
            FUN_001f9ce0();
        }
        if (mapIf->counting != 0) {
            counter = &mapIf->counter;
            effectDrawExpandingPanels(*counter);
            *counter = *counter + 1;
        }
    }
    return 0;
}

} /* extern "C" */
