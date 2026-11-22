#include "common.h"
#include "map/LmapGlobals.h"

extern "C" {

typedef struct MapMain {
    /* 0x00 */ u8 unk00[0xB8];
    /* 0xB8 */ u8 status;
} MapMain;

extern MapMain *g_mapMain;

void mapEplUpdateEntries(void);
void FUN_002d5374(void);
void mapNaviUpdateSlots(void);
void sparkleSetUpdate(void);
void FUN_003079b4(void);
void FUN_002712dc(void);
u8 FUN_0027052c(void);
void FUN_001a8cf8(void);
void FUN_0019dd38(void);
void mapIfTimerStep(void);
void mapSelectNearestInteractiveModel(MapVector position, f32 heading);
void FUN_00274798(void);
void FUN_0027522c(void);
void mapGimicUpdate(void);
void FUN_00276a3c(void);
void lmapUpdateSceneModels(void);
void FUN_00275364(void);
void mapRangeUpdateModelVisibilityAndTransforms(void);
void FUN_001b4b54(void);
void mapObjectVisibilityRestore(void);
void FUN_00273f90(void);
void mapIfRefreshMarkers(void);
void gameStateSelectKind(void);
void FUN_001d36cc(void);

/* Per-frame map update: runs each map subsystem in order. */
void mapPerFrameUpdate(void)
{
    MapMain *mapMain = g_mapMain;

    mapEplUpdateEntries();
    FUN_002d5374();
    mapNaviUpdateSlots();
    sparkleSetUpdate();
    FUN_003079b4();
    FUN_002712dc();
    mapMain->status = FUN_0027052c();
    FUN_001a8cf8();
    FUN_0019dd38();
    mapIfTimerStep();
    mapSelectNearestInteractiveModel(g_lmapScene->pose.targetPosition, g_lmapScene->pose.targetHeading);
    FUN_00274798();
    FUN_0027522c();
    mapGimicUpdate();
    FUN_00276a3c();
    lmapUpdateSceneModels();
    FUN_00275364();
    mapRangeUpdateModelVisibilityAndTransforms();
    FUN_001b4b54();
    mapObjectVisibilityRestore();
    FUN_00273f90();
    mapIfRefreshMarkers();
    gameStateSelectKind();
    FUN_001d36cc();
}

} /* extern "C" */
