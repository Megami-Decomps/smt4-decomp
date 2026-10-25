#include "map/mapMain.h"

extern "C" {
extern MapMainA *g_mapMain;
void FUN_00227a70(void);
s32 gameFlagIsSet(u32 flag);
void FUN_002a2e98(s32 map, s32 area, s32 overrideMap, s32 overrideArea);
void hakaiEntriesNotify(void);
void FUN_00385a10(void);
void FUN_00353d74(void);
void FUN_00378000(void);
void FUN_0020f12c(s32 map, s32 area);

/* Refresh map-dependent resources, selecting special variants for story progression. */
void mapRefreshResourcesForStory(void)
{
    MapMainA *map = g_mapMain;
    if (map == NULL)
        return;
    FUN_00227a70();
    if ((map->transition.mapId == 17 && map->transition.areaId == 1 && gameFlagIsSet(0xD9) == 0) ||
        (map->transition.mapId == 5 && map->transition.areaId == 1 && gameFlagIsSet(0x1CA) == 0)) {
        FUN_002a2e98(map->transition.mapId, map->transition.areaId, map->transition.mapId, 99);
    } else if (map->transition.mapId == 3 && map->transition.areaId == 3 &&
               gameFlagIsSet(0x171) != 0 && gameFlagIsSet(0x177) == 0) {
        FUN_002a2e98(map->transition.mapId, map->transition.areaId, map->transition.mapId, 99);
    } else {
        FUN_002a2e98(map->transition.mapId, map->transition.areaId, 0, 0);
    }
    hakaiEntriesNotify();
    FUN_00385a10();
    FUN_00353d74();
    FUN_00378000();
    FUN_0020f12c(map->transition.mapId, map->transition.areaId);
}
}
