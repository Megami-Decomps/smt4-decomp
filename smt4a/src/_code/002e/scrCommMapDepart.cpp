#include "game/GameStateA.h"
#include "map/mapDepart.h"
#include "script/ScriptArgs.h"
#include "shard/W6_W6Match2_EntrySequence.h"

extern "C" {
void mapPlaceSet(s32 map, s32 area, u32 variant);

/* Sets the departure destination and requests the map transition sequence. */
u32 scrCommMapDepart(void)
{
    s32 map = scrGetArg(0);
    s32 area = scrGetArg(1);
    u32 variant = scrGetArg(2);
    if (map == 0x18) {
        mapPlaceSet(map, 1, variant);
        mapSetDepartureIndex(area);
        g_gameState.unk028 = 1;
    } else {
        mapPlaceSet(map, area, variant);
    }
    g_gameState.savedLocationSet = 0;
    asdSequenceRequest(6, NULL, 0);
    return 1;
}
} /* extern "C" */
