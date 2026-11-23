#include "map/mapMain.h"
#include "map/LmapGlobals.h"
#include "code/Code0027_Smt4a.h"

extern "C" {
extern MapMainA *g_mapMain;
__weak u32 FUN_0037a07c_hook(u32 value);
void mapEplUpdateEntries(void);
u32 uiSelectionRefresh(void);
void sparkleSetUpdate(u32 value);
void FUN_00395904(void);
u8 FUN_00246bd4(void);
u8 FUN_00249dec(void);
void FUN_002332f4(void);
void FUN_002242a0(void);
void FUN_002237a0(void);
void FUN_00234b30(void);
void FUN_0023534c(void);
void FUN_002737a8(void);
void lmapCameraUpdate(void);
void FUN_00296530(void);
void FUN_002b7490(void);
void FUN_00243ea0(void);
void FUN_00297c3c(void);
void FUN_0027461c(void);
void FUN_0024aeb0(void);
void FUN_002d8cec(void);
void FUN_0023a52c(void);
void FUN_003254a0(void);
void gameStateSelectKind(void);
void ambientSoundUpdateByDistance(void);

/* Updates the field-map subsystems and refreshes its cached status byte. */
void FUN_0037a07c(void)
{
    MapMainA *map = g_mapMain;
    mapEplUpdateEntries();
    sparkleSetUpdate(FUN_0037a07c_hook(uiSelectionRefresh()));
    FUN_00395904();
    FUN_00246bd4();
    u8 status = FUN_00249dec();
    map->unkBC = status;
    FUN_002332f4();
    FUN_002242a0();
    FUN_002237a0();
    mapTargetUpdateNearest(g_lmapScene->pose.targetPosition, g_lmapScene->pose.targetHeading);
    FUN_00234b30();
    FUN_0023534c();
    FUN_002737a8();
    lmapCameraUpdate();
    FUN_00296530();
    FUN_002b7490();
    FUN_00243ea0();
    FUN_00297c3c();
    FUN_0027461c();
    FUN_0024aeb0();
    FUN_002d8cec();
    FUN_0023a52c();
    FUN_003254a0();
    gameStateSelectKind();
    ambientSoundUpdateByDistance();
}
}
