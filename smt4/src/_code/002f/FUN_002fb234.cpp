/* NON_MATCHING: retail lays the 0x11/99 arm and the shared 99 arm out of line (separate calls to FUN_0027b2b4); built selects the last two arguments with conditional moves. */
#include "map/mapMain.h"
#include "npc_room/NpcRoom.h"
#include "AsdSDK/AsdDebugHooks.h"

extern "C" {

void FUN_00277d2c(u32 mapId, u32 areaId);
void FUN_0027ae90(void);
void FUN_0027b1b4(void);
void mapRangeEntriesRun(void);
void FUN_0027b2b4(u32 mapId, u32 areaId, u32 third, u32 fourth);
s32 gameFlagIsSet(u32 flag);

extern MapMain *g_mapMain;

/* Rebuilds the map's range entries and gimic bounds after a map change, with the special markers of maps 0x11 and 5. */
void FUN_002fb234(void)
{
    MapMain *map = g_mapMain;
    if (map == NULL) {
        return;
    }
    mapCollisionRelease();
    if (map->mapId == 0x11 && map->areaId == 1 && gameFlagIsSet(0xc6) && !gameFlagIsSet(0x108)) {
        FUN_0027b2b4(map->mapId, map->areaId, map->mapId, 99);
    } else {
        u32 third;
        u32 fourth;
        if (map->mapId == 5 && map->areaId == 1 && !gameFlagIsSet(0x719)) {
            third = map->mapId;
            fourth = 99;
        } else {
            third = 0;
            fourth = 0;
        }
        FUN_0027b2b4(map->mapId, map->areaId, third, fourth);
    }
    asdDebugHookVoid();
    mapRangeEntriesRun();
    asdDebugHookVoid();
    asdDebugHookVoid();
    FUN_0027b1b4();
    asdDebugHookVoid();
    asdDebugHookVoid();
    FUN_0027ae90();
    asdDebugHookVoid();
    asdDebugHookVoid();
    mapGimicUpdateVisualBounds();
    FUN_00277d2c(map->mapId, map->areaId);
}

} /* extern "C" */
