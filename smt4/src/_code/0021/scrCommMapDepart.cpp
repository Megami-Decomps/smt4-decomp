#include "map/mapDepart.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include "game/GameState.h"

extern "C" {
void mapDepartSetTarget(s32 area, u32 map, u32 entrance);
s32 scrGetArg(u32 index);

/* Sets the departure destination and requests the map transition sequence. */
u32 scrCommMapDepart(void)
{
    s32 area = scrGetArg(0);
    u32 map = scrGetArg(1);
    u32 entrance = scrGetArg(2);
    if (area == 0x18) {
        mapDepartSetTarget(area, 1, entrance);
        mapSetDepartureIndex(map);
        g_gameState.progressEnabled = 1;
    } else {
        mapDepartSetTarget(area, map, entrance);
    }
    g_gameState.map.savedLocationSet = 0;
    asdSequenceRequest(6, 0, 0);
    return 1;
}
}
