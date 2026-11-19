#include "map/mapDepart.h"
#include "game/GameStateA.h"

extern "C" {

void mapPlaceSet(s32 a, s32 b, s32 c);
u32 scrGetArg(...);
void asdSequenceRequest(s32 a, s32 b, s32 c);

/* Script command: passes the script's first argument to mapSetDepartureIndex, then runs mapPlaceSet and asdSequenceRequest. */
s32 FUN_00370198(void)
{
    u32 value = scrGetArg(0);

    scrGetArg(1);
    mapSetDepartureIndex(value);
    mapPlaceSet(0x18, 1, 0);
    g_gameState.savedLocationSet = 0;
    asdSequenceRequest(6, 0, 0);
    return 1;
}

} /* extern "C" */
