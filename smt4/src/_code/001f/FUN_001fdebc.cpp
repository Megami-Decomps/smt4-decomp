/* NON_MATCHING: compiler retains the game-state base in R5 across formatting instead of reloading it. */
#include "runtime/Stdio.h"
#include "map/mapMain.h"
#include "map/mapDepart.h"
#include "game/GameState.h"
extern "C" {
extern const char DAT_00404498[];
extern const char DAT_004044b8[];
void FUN_002a09b4(const char *path, u32 flags);

/* Load map environment settings, including the special-map aliases. */
void FUN_001fdebc(const MapMain *map)
{
    char path[128];
    if (g_gameState.map.darkZone)
        __2sprintf(path, DAT_00404498, map->mapId, map->mapId, map->areaId);
    if (g_gameState.returning) {
        __2sprintf(path, DAT_004044b8, 24, 24, 1);
    } else {
        switch (map->mapId) {
        case 41:
            __2sprintf(path, DAT_004044b8, 2, 2, 6);
            break;
        case 42:
            __2sprintf(path, DAT_004044b8, 14, 14, 1);
            break;
        case 43:
            __2sprintf(path, DAT_004044b8, 36, 36, 1);
            break;
        default:
            __2sprintf(path, DAT_004044b8, map->mapId, map->mapId, map->areaId);
            break;
        }
    }
    FUN_002a09b4(path, 0);
}
}
