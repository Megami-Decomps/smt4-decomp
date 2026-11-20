#include "map/mapMain.h"
#include "game/GameStateA.h"
#include "map/mapDepart.h"

extern "C" {
extern MapMainA *g_mapMain;
s32 lmapGetSpawnIndex(void);
void FUN_00244ac8(void);
void mapIfResetRecords(void);
void FUN_00364740(s32 mapId, s32 areaId);
void FUN_002c670c(s32 enabled);
void lmapUpdateEngineRecordNavigation(void);
void FUN_002b7ce0(void);
void mapSpawnActiveSignboardEffects(void);
void FUN_003cb744(void);
void mapIfRestartActiveRecords(s32 enabled);

void FUN_003b5d20(void)
{
    MapMainA *main = g_mapMain;
    if (g_gameState.progressEnabled) {
        if (lmapGetSpawnIndex()) {
            FUN_00244ac8();
            mapIfResetRecords();
            s32 spawn = lmapGetSpawnIndex();
            FUN_00364740(main->transition.mapId, spawn);
            FUN_002c670c(1);
            mapIfRestartActiveRecords(1);
            return;
        }
        FUN_00244ac8();
        mapIfResetRecords();
        FUN_002c670c(1);
        lmapUpdateEngineRecordNavigation();
        FUN_002b7ce0();
        mapIfRestartActiveRecords(1);
        return;
    } else {
        FUN_00244ac8();
        s32 mapId = main->transition.mapId;
        s32 areaId = main->transition.areaId;
        mapIfResetRecords();
        FUN_00364740(mapId, areaId);
        mapSpawnActiveSignboardEffects();
        lmapUpdateEngineRecordNavigation();
        FUN_002b7ce0();
        FUN_003cb744();
    }
    mapIfRestartActiveRecords(1);
}
}
