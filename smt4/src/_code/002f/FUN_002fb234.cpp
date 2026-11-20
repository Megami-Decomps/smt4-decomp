#include "map/mapMain.h"
#include "npc_room/NpcRoom.h"
#include "map/MapSceneAccess_Smt4.h"

extern "C" {

void FUN_00277d2c(u32 mapId, u32 areaId);
void mapObjectSpawnAmbientEffects(void);
void FUN_0027b1b4(void);
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
    } else if (map->mapId == 5 && map->areaId == 1 && !gameFlagIsSet(0x719)) {
        FUN_0027b2b4(map->mapId, map->areaId, map->mapId, 99);
    } else {
        FUN_0027b2b4(map->mapId, map->areaId, 0, 0);
    }
    mapRangeEntriesRun();
    FUN_0027b1b4();
    mapObjectSpawnAmbientEffects();
    mapGimicUpdateVisualBounds();
    FUN_00277d2c(map->mapId, map->areaId);
}

} /* extern "C" */
