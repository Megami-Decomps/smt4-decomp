#include "map/mapDepart.h"

extern "C" {

void mapPlaceSet(u32 a, u32 b, u32 c);
void gameFlagSetValue(s32 a, s32 b, s32 c);
s32 gameFlagIsSet(u32 id);
u32 scrGetArg(s32 index);

extern GameStateA g_gameState;

/* Script command: clears effect 0x11F9 when it is set, then runs mapPlaceSet on the first three arguments. */
s32 scrCommMapPlace(void)
{
    u32 a = scrGetArg(0);
    u32 b = scrGetArg(1);
    u32 c = scrGetArg(2);

    if (gameFlagIsSet(0x11F9) != 0) {
        gameFlagSetValue(0x11F9, 0, 1);
    }
    mapPlaceSet(a, b, c);
    g_gameState.unk574 = 0;
    return 1;
}

} /* extern "C" */
