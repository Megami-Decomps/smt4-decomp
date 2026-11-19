#include "shard/W5_W5Match7_SceneState.h"
#include "game/GameStateA.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include "map/mapDepart.h"

extern "C" {
u32 scrGetArg(s32 index);
void mapPlaceSet(s32 map, s32 area, s32 object);
void gameFlagsLoadTable4cEntry(u32 id);

u32 scrCommStartMapTransition(void)
{
    u32 id = scrGetArg(0);
    mapSetDepartureIndex(id + 100);
    mapPlaceSet(0x18, 1, 0);
    gameFlagsLoadTable4cEntry(id);
    g_gameState.progressEnabled = 1;
    g_gameState.savedLocationSet = 0;
    g_gameState.transitionPending = 1;
    asdSequenceRequest(6, NULL, 0);
    return 1;
}
}
