#include "map/mapMain.h"
#include "map/mapDepart.h"

extern "C" {
extern MapMainA *g_mapMain;
extern GameStateA g_gameState;
s32 lmapGetSpawnIndex(void);
void FUN_00244ac8(void);
void FUN_002747dc(void);
void FUN_00364740(s32 mapId, s32 areaId);
void FUN_002c670c(s32 enabled);
void FUN_002ddea0(void);
void FUN_002b7ce0(void);
void FUN_00313440(void);
void FUN_003cb744(void);
void FUN_00245d78(s32 enabled);

void FUN_003b5d20(void)
{
    MapMainA *main = g_mapMain;
    if (g_gameState.progressEnabled) {
        if (lmapGetSpawnIndex()) {
            FUN_00244ac8();
            FUN_002747dc();
            s32 spawn = lmapGetSpawnIndex();
            FUN_00364740(main->transition.mapId, spawn);
            FUN_002c670c(1);
            FUN_00245d78(1);
            return;
        }
        FUN_00244ac8();
        FUN_002747dc();
        FUN_002c670c(1);
        FUN_002ddea0();
        FUN_002b7ce0();
        FUN_00245d78(1);
        return;
    } else {
        FUN_00244ac8();
        s32 mapId = main->transition.mapId;
        s32 areaId = main->transition.areaId;
        FUN_002747dc();
        FUN_00364740(mapId, areaId);
        FUN_00313440();
        FUN_002ddea0();
        FUN_002b7ce0();
        FUN_003cb744();
    }
    FUN_00245d78(1);
}
}
