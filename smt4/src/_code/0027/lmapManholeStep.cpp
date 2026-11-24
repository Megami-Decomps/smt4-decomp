/* NON_MATCHING: 193 lines (shape 99): as in lmapIntroSceneStep, retail eases the position through s0-s2 and
 * keeps them for the distance call where this build reloads them, and keeps 180.0 in s19 (here s16); written
 * in the form of the IDENTICAL sibling lmapOverviewClimbStep. */
#include "common.h"
#include "map/LmapPlayerModel.h"
#include "map/LmapGlobals.h"
#include "map/LmapViewGlobals.h"
#include "map/MapActionMarker.h"
#include "map/MapVector.h"
#include "game/GameState.h"
#include "quest_center/qcMain.h"
#include "util/TrigF32.h"

extern "C" {

f32 mathDistanceBetweenPoints(MapVector from, MapVector to); // declcheck: local (util/MathFunctions.h declares six floats for its float callers; retail passes this caller's points as by-value vectors, as in lmapIntroSceneStep)
f32 mathPositionHeadingDegrees(MapVector from, MapVector to); // declcheck: local (as util/MathFunctions.h, which this unit cannot include beside the by-value distance above)
void vec3DirectionBetween(MapVector *out, MapVector from, MapVector to);
u32 mapProjectPositionToGround(MapVector *position, MapVector *previous);
void mapIfActivateRecord(s32 active, u32 record);
void mapIfSpawnManholeAction(MapMarkerPosition position);
void mapIfReleaseSlot0(void);
bool mapIfHasSelection(void);
void mapIfSetMode1(void);
void mapPartDestroy(void);
void mapInterfaceSetStateTwo(void);
void lmapSetSceneId(u32 scene);
void lmapCameraSetMode(s32 mode);
void mapSelectContainingRegions(f32 x, f32 z);
void FUN_002804ec(f32 *position);
void mapEaseSceneHeading(void);
s32 inputIsQuestMenuPressed(void);
s32 inputConfirmPressed(void);
s32 padIsButtonPressed(u32 button);

/* Per-frame step of the lmap scene at a manhole: eases the player and walks it in front of the overview
 * position, shows the manhole marker until the player confirms (then hands over to the map interface and
 * switches to scene 8) or cancels (then switches back to scene 1). */
void lmapManholeStep(void)
{
    MapVector previousTarget = g_lmapScene->pose.targetPosition;

    mapEaseSceneHeading();
    LmapScene *scene = g_lmapScene;
    scene->pose.position.x += (scene->pose.targetPosition.x - scene->pose.position.x) * 0.33333334f;
    scene->pose.position.y += (scene->pose.targetPosition.y - scene->pose.position.y) * 0.16666667f;
    scene->pose.position.z += (scene->pose.targetPosition.z - scene->pose.position.z) * 0.33333334f;

    switch (scene->state) {
    case 0:
        scene->moveMode = 0;
        scene->moveSpeed = 3.0f;
        scene->unk06C = 0;
        /* Walk to a point behind the overview position: behind the player's heading when it is already
           close, else behind the heading it is going to take. */
        if (mathDistanceBetweenPoints(g_lmapScene->pose.position, g_gameState.overviewPosition) < 60.0f) {
            g_lmapScene->directMoveTarget = g_gameState.overviewPosition;
            g_lmapScene->directMoveTarget.x +=
                libm_sinf((g_lmapScene->pose.heading + 180.0f) * 0.017453292f) * 100.0f;
            g_lmapScene->directMoveTarget.z +=
                libm_cosf((g_lmapScene->pose.heading + 180.0f) * 0.017453292f) * 100.0f;
            vec3DirectionBetween(&g_lmapScene->directMoveDirection, g_lmapScene->pose.targetPosition,
                                 g_lmapScene->directMoveTarget);
            g_lmapScene->directMoveStep = 30.0f;
            g_lmapScene->directMoveActive = 1;
            g_lmapScene->pose.targetHeading =
                mathPositionHeadingDegrees(g_lmapScene->pose.targetPosition, g_gameState.overviewPosition);
        } else {
            g_lmapScene->directMoveTarget = g_gameState.overviewPosition;
            g_lmapScene->directMoveTarget.x +=
                libm_sinf((g_lmapScene->pose.targetHeading + 180.0f) * 0.017453292f) * 100.0f;
            g_lmapScene->directMoveTarget.z +=
                libm_cosf((g_lmapScene->pose.targetHeading + 180.0f) * 0.017453292f) * 100.0f;
            vec3DirectionBetween(&g_lmapScene->directMoveDirection, g_lmapScene->pose.targetPosition,
                                 g_lmapScene->directMoveTarget);
            g_lmapScene->directMoveStep = 30.0f;
            g_lmapScene->directMoveActive = 1;
            g_lmapScene->pose.targetHeading =
                mathPositionHeadingDegrees(g_lmapScene->pose.targetPosition, g_gameState.overviewPosition);
        }
        lmapCameraSetMode(10);
        g_mapCamera->contextMode = -1;
        buttonHelpSetPreset(219);
        mapIfActivateRecord(1, g_gameState.overviewRecord);
        {
            MapMarkerPosition marker;
            marker.x = g_gameState.overviewPosition.x;
            marker.y = g_gameState.overviewPosition.y;
            marker.z = g_gameState.overviewPosition.z;
            marker.w = g_lmapScene->pose.targetHeading + 180.0f;
            mapIfSpawnManholeAction(marker);
        }
        g_lmapScene->state++;
        g_lmapScene->stateTime = 0;
        break;

    case 1:
        scene->stateTime++;
        mapIfActivateRecord(1, g_gameState.overviewRecord);
        if (g_lmapScene->stateTime > 2) {
            g_lmapScene->moveMode = 29;
            g_lmapScene->moveSpeed = 2.0f;
            g_lmapScene->state++;
            g_lmapScene->stateTime = 0;
        }
        break;

    case 2:
        scene->stateTime++;
        mapIfActivateRecord(1, g_gameState.overviewRecord);
        if (inputConfirmPressed() != 0) {
            g_lmapScene->state = 10;
            g_lmapScene->stateTime = 0;
        } else if (padIsButtonPressed(5) != 0 || inputIsQuestMenuPressed() != 0) {
            g_mapCamera->heading = g_lmapScene->pose.targetHeading;
            g_mapCamera->contextMode = 0;
            lmapCameraSetMode(0);
            g_lmapScene->moveMode = 0;
            g_lmapScene->moveSpeed = 5.0f;
            mapIfActivateRecord(0, g_gameState.overviewRecord);
            mapIfReleaseSlot0();
            g_lmapScene->state = 90;
            g_lmapScene->stateTime = 0;
        }
        break;

    case 10:
        g_gameState.map.transitionCompleted = 0;
        scene->moveMode = 8;
        scene->moveSpeed = 5.0f;
        scene->state++;
        scene->stateTime = 0;
        break;

    case 11:
        scene->stateTime++;
        if (scene->stateTime == 20) {
            mapInterfaceSetStateTwo();
            g_lmapScene->state++;
            g_lmapScene->stateTime = 0;
        }
        break;

    case 12:
        if (!mapIfHasSelection()) {
            mapIfReleaseSlot0();
            g_mapCamera->heading = g_lmapScene->pose.targetHeading;
            g_mapCamera->contextMode = 0;
            lmapCameraSetMode(0);
            g_lmapScene->state++;
            g_lmapScene->stateTime = 0;
        }
        break;

    case 13:
        scene->stateTime++;
        if (scene->stateTime == 20) {
            mapPartDestroy();
            mapIfSetMode1();
            lmapSetSceneId(8);
        }
        break;

    case 90:
        scene->state++;
        scene->stateTime = 0;
        break;

    case 91:
        mapPartDestroy();
        g_lmapScene->state++;
        g_lmapScene->stateTime = 0;
        break;

    case 92:
        scene->stateTime++;
        if (scene->stateTime > 3) {
            lmapSetSceneId(1);
        }
        break;
    }

    if (g_lmapScene->directMoveActive) {
        if (mathDistanceBetweenPoints(g_lmapScene->pose.targetPosition, g_lmapScene->directMoveTarget) <=
            g_lmapScene->directMoveStep) {
            g_lmapScene->pose.targetPosition = g_lmapScene->directMoveTarget;
            g_lmapScene->directMoveActive = 0;
        } else {
            MapVector step;
            mapVectorScale(&step, &g_lmapScene->directMoveDirection, g_lmapScene->directMoveStep);
            mapVectorAdd(&g_lmapScene->pose.targetPosition, &g_lmapScene->pose.targetPosition, &step);
        }
        g_lmapScene->pose.previousPosition = previousTarget;
        if (mapProjectPositionToGround(&g_lmapScene->pose.targetPosition, &g_lmapScene->pose.previousPosition)) {
            g_lmapScene->directMoveActive = 0;
        }
    }

    FUN_002804ec(&g_lmapScene->pose.targetPosition.x);
    mapSelectContainingRegions(g_lmapScene->pose.position.x, g_lmapScene->pose.position.z);
}

} /* extern "C" */
