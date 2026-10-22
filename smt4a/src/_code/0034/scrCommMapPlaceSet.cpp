#include "map/mapDepart.h"

extern "C" {

void mapPlaceSet(u32 a, u32 b, u32 c);
u32 scrGetArg(s32 index);

extern GameStateA g_gameState;

/* Script command: runs mapPlaceSet on the script's first three arguments and clears unk574. */
s32 scrCommMapPlaceSet(void)
{
    u32 a = scrGetArg(0);
    u32 b = scrGetArg(1);
    u32 c = scrGetArg(2);

    mapPlaceSet(a, b, c);
    g_gameState.transitionActive = 0;
    return 1;
}

} /* extern "C" */
