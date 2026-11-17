#include "map/mapDepart.h"
#include "game/GameStateA.h"

extern "C" {

void mapPlaceSet(s32 a, u32 b, u32 c);
u32 scrGetArg(u32 index);

/* Script command: runs mapPlaceSet with 0xC9 and the script's argument and clears unk574. */
s32 scrMapPlaceSet(void)
{
    u32 value = scrGetArg(0);

    mapPlaceSet(0xC9, value, 0xFFFFFFFF);
    g_gameState.savedLocationSet = 0;
    return 1;
}

} /* extern "C" */
