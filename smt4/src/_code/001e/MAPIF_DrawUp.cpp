#include "map/MapIfGlobals.h"
#include "game/GameState.h"

extern "C" {

s32 FUN_001fb5c4(void);
s32 FUN_001f9ce0(void);
s32 effectDrawExpandingPanels(s32 counter);

/* Draws the map interface for the upper screen and advances its frame counter while counting. */
u32 MAPIF_DrawUp(void)
{
    MapIfState *mapIf = g_mapIf.state;

    if (g_gameState.loading == 0) {
        s32 *counter;

        FUN_001fb5c4();
        if (g_gameState.mapId < 100) {
            FUN_001f9ce0();
        }
        if (mapIf->unkCCD8 != 0) {
            counter = &mapIf->unkCCDC;
            effectDrawExpandingPanels(*counter);
            *counter = *counter + 1;
        }
    }
    return 0;
}

} /* extern "C" */
