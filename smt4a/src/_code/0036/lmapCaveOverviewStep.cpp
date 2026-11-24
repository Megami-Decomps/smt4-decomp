#include "map/mapDepart.h"
#include "map/MapIfGlobals.h"
#include "code/Code0032_Smt4a.h"
#include "game/GameStateA.h"
#include "map/LmapViewGlobals.h"
#include "util/TrigF32.h"

extern "C" {

void mapEaseSceneHeading(void);
void mapIfReleasePanel(void);
void mapIfReleaseSlot2(void);
void mapIfApplyEntryRequest(s32 mode, s32 record);
s32 mapIfHasSelection(void);
void FUN_002342b8(void);
s32 inputIsQuestMenuPressed(void);
void mapIfSetMode1(void);
s32 inputConfirmPressed(void);
void mapSetSceneState(u32 id);
void lmapCameraSetMode(s32 mode);
void FUN_00327ee8(f32 x, f32 z);
void FUN_002e364c(MapVector *position);

void sysPlaySe(s32 id);
s32 padButtonIsPressed(u32 button);

/* One frame of the map overview: eases the scene toward its target, then steps the entry,
   hold and exit states. */
void lmapCaveOverviewStep(void)
{
    mapEaseSceneHeading();
    LmapSceneA *scene = g_lmapScene;
    scene->pose.position.x = scene->pose.position.x + (scene->pose.targetPosition.x - scene->pose.position.x) * 0.33333334f;
    scene->pose.position.y = scene->pose.position.y + (scene->pose.targetPosition.y - scene->pose.position.y) * 0.16666667f;
    scene->pose.position.z = scene->pose.position.z + (scene->pose.targetPosition.z - scene->pose.position.z) * 0.33333334f;

    switch (scene->state) {
    case 0: {
        const f32 radiansPerDegree = 0.017453292f;
        scene->moveMode = 0;
        scene->moveSpeed = 3.0f;
        scene->unk06C = 0;
        scene->pose.targetPosition = g_gameState.overviewPosition;
        g_lmapScene->pose.targetPosition.x = g_lmapScene->pose.targetPosition.x + libm_sinf(g_gameState.pointHeading * radiansPerDegree) * 40.0f;
        g_lmapScene->pose.targetPosition.z = g_lmapScene->pose.targetPosition.z + libm_cosf(g_gameState.pointHeading * radiansPerDegree) * 40.0f;
        g_lmapScene->pose.targetHeading = g_gameState.overviewHeading;
        lmapCameraSetMode(11);
        g_lmapView->contextMode = -2;
        sysPlaySe(0xdd);
        mapIfApplyEntryRequest(1, g_gameState.overviewRecord);
        MapMarkerPosition marker = { g_gameState.overviewPosition.x, g_gameState.overviewPosition.y,
                                     g_gameState.overviewPosition.z };
        marker.x += libm_sinf(g_gameState.overviewHeading * radiansPerDegree) * 80.0f;
        marker.z += libm_cosf(g_gameState.overviewHeading * radiansPerDegree) * 80.0f;
        marker.w = g_gameState.pointHeading;
        mapIfSpawnCaveAction(marker);
        g_lmapScene->state = g_lmapScene->state + 1;
        g_lmapScene->stateTime = 0;
        break;
    }
    case 1:
        scene->stateTime++;
        mapIfApplyEntryRequest(1, g_gameState.overviewRecord);
        scene = g_lmapScene;
        if (scene->stateTime > 2) {
            scene->moveMode = 29;
            scene->moveSpeed = 2.0f;
            scene->state = scene->state + 1;
            scene->stateTime = 0;
        }
        break;
    case 2:
        scene->stateTime++;
        mapIfApplyEntryRequest(1, g_gameState.overviewRecord);
        if (inputConfirmPressed()) {
            g_lmapScene->state = 10;
            g_lmapScene->stateTime = 0;
        } else if (padButtonIsPressed(5) || inputIsQuestMenuPressed()) {
            g_lmapView->heading = g_lmapScene->pose.targetHeading;
            g_lmapView->contextMode = 0;
            lmapCameraSetMode(0);
            g_lmapScene->moveMode = 0;
            g_lmapScene->moveSpeed = 5.0f;
            mapIfApplyEntryRequest(0, g_gameState.overviewRecord);
            mapIfReleaseSlot2();
            g_lmapScene->state = 90;
            g_lmapScene->stateTime = 0;
        }
        break;
    case 10:
        g_gameState.transitionCompleted = 0;
        scene->moveMode = 8;
        scene->moveSpeed = 5.0f;
        mapDepartSpawnPlayerEffect(1);
        g_lmapScene->state = g_lmapScene->state + 1;
        g_lmapScene->stateTime = 0;
        break;
    case 11:
        scene->stateTime++;
        if (scene->stateTime == 20) {
            FUN_002342b8();
            g_lmapScene->state = g_lmapScene->state + 1;
            g_lmapScene->stateTime = 0;
        }
        break;
    case 12:
        if (!mapIfHasSelection()) {
            mapIfReleaseSlot2();
            g_lmapView->heading = g_lmapScene->pose.targetHeading;
            g_lmapView->contextMode = 0;
            lmapCameraSetMode(0);
            g_lmapScene->state = g_lmapScene->state + 1;
            g_lmapScene->stateTime = 0;
        }
        break;
    case 13:
        scene->stateTime++;
        if (scene->stateTime == 20) {
            mapIfReleasePanel();
            mapIfSetMode1();
            mapSetSceneState(10);
        }
        break;
    case 90:
        scene->state = scene->state + 1;
        scene->stateTime = 0;
        break;
    case 91:
        mapIfReleasePanel();
        g_lmapScene->state = g_lmapScene->state + 1;
        g_lmapScene->stateTime = 0;
        break;
    case 92:
        scene->stateTime++;
        if (scene->stateTime > 3) {
            mapSetSceneState(1);
        }
        break;
    }
    FUN_002e364c(&g_lmapScene->pose.targetPosition);
    FUN_00327ee8(g_lmapScene->pose.position.x, g_lmapScene->pose.position.z);
}

} /* extern "C" */
