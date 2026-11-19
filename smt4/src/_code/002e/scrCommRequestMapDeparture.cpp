#include "map/mapDepart.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include "game/GameState.h"

extern "C" {

void mapDepartSetTarget(s32 a, s32 b, s32 c);
u32 scrGetArg(...);


/* Script command: passes the script's first argument to mapSetDepartureIndex, then runs mapDepartSetTarget and asdSequenceRequest. */
s32 scrCommRequestMapDeparture(void)
{
    u32 value = scrGetArg(0);

    scrGetArg(1);
    mapSetDepartureIndex(value);
    mapDepartSetTarget(0x18, 1, 0);
    g_gameState.map.savedLocationSet = 0;
    asdSequenceRequest(6, 0, 0);
    return 1;
}

} /* extern "C" */
