#include "map/mapDepart.h"
#include "shard/W6_W6Match2_EntrySequence.h"

extern "C" {

void mapDepartSetTarget(s32 a, s32 b, s32 c);
void FUN_0027d5ac(u32 value);
u32 scrGetArg(...);

extern GameState g_gameState;

/* Script command: passes the script's first argument to FUN_0027d5ac, then runs mapDepartSetTarget and asdSequenceRequest. */
s32 scrCommRequestMapDeparture(void)
{
    u32 value = scrGetArg(0);

    scrGetArg(1);
    FUN_0027d5ac(value);
    mapDepartSetTarget(0x18, 1, 0);
    g_gameState.unk2F8 = 0;
    asdSequenceRequest(6, 0, 0);
    return 1;
}

} /* extern "C" */
