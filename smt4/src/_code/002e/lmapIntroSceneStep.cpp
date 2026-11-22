/* NON_MATCHING: per-frame step of the lmap intro/exit scene (eases the player, then a state machine: set up the target behind the overview position, wait, hand to the map, and the exit steps that switch back to scene 1 / 0x10). Retail keeps the eased position in s0-s2 for the distance call (this build reloads x and y, with the easing constants in other registers) and gives the three spawn constants other VFP registers. */
#include "map/LmapPlayerModel.h"
#include "common.h"
#include "map/LmapGlobals.h"
#include "util/TrigF32.h"
#include "game/GameState.h"
#include "map/LmapViewGlobals.h"
#include "map/MapVector.h"

#define LMAP_STATE_SETUP 0
#define LMAP_STATE_SETTLE 1
#define LMAP_STATE_WAIT 2
#define LMAP_STATE_ENTER 10
#define LMAP_STATE_ENTER_WAIT 0xB
#define LMAP_STATE_EXIT_A 0x5A
#define LMAP_STATE_EXIT_B 0x5B
#define LMAP_STATE_EXIT_WAIT 0x5C
#define LMAP_NEAR_DISTANCE 60.0f
#define LMAP_BEHIND_DISTANCE 100.0f
#define LMAP_DEG_TO_RAD 0.017453292f
#define LMAP_HALF_TURN 180.0f
#define LMAP_SETTLE_FRAMES 2
#define LMAP_ENTER_FRAMES 15
#define LMAP_EXIT_FRAMES 3
#define LMAP_SCENE_MAP 1
#define LMAP_SCENE_ENTER 0x10
#define LMAP_BUTTON_ACCEPT 5
#define LMAP_BUTTON_HELP_PRESET 0xDB

extern "C" {

f32 mathDistanceBetweenPoints(MapVector from, MapVector to); // declcheck: local (util/MathFunctions.h declares six floats for its float callers; retail moves this caller's points as by-value vectors, as in mapSelectNearbyDeferredModel)
f32 mathPositionHeadingDegrees(MapVector from, MapVector to); // declcheck: local (as util/MathFunctions.h, which this unit cannot include beside the by-value distance above)
void mapIfActivateRecord(s32 active, u32 record);
void lmapSetSceneId(u32 scene);
void lmapCameraSetMode(s32 mode);
void mapSelectContainingRegions(f32 x, f32 z);
void FUN_002804ec(f32 *position);
void mapEaseSceneHeading(void);
void buttonHelpSetPreset(s32 preset);
s32 inputIsQuestMenuPressed(void);
s32 inputConfirmPressed(void);
s32 padIsButtonPressed(u32 button);

void lmapIntroSceneStep(void)
{
    mapEaseSceneHeading();
    LmapScene *scene = g_lmapScene;
    scene->pose.position.x += (scene->pose.targetPosition.x - scene->pose.position.x) * 0.33333334f;
    scene->pose.position.y += (scene->pose.targetPosition.y - scene->pose.position.y) * 0.16666667f;
    scene->pose.position.z += (scene->pose.targetPosition.z - scene->pose.position.z) * 0.33333334f;

    switch (scene->state) {
    case LMAP_STATE_SETUP:
        scene->moveMode = 0;
        scene->moveSpeed = 3.0f;
        scene->unk06C = 0;
        /* The target goes behind the overview position: behind the player's heading when it is already close,
           else behind the heading from the target to it. */
        if (mathDistanceBetweenPoints(scene->pose.position, g_gameState.overviewPosition) < LMAP_NEAR_DISTANCE) {
            g_lmapScene->pose.targetPosition = g_gameState.overviewPosition;
            g_lmapScene->pose.targetPosition.x +=
                libm_sinf((g_lmapScene->pose.heading + LMAP_HALF_TURN) * LMAP_DEG_TO_RAD) * LMAP_BEHIND_DISTANCE;
            g_lmapScene->pose.targetPosition.z +=
                libm_cosf((g_lmapScene->pose.heading + LMAP_HALF_TURN) * LMAP_DEG_TO_RAD) * LMAP_BEHIND_DISTANCE;
            g_lmapScene->pose.targetHeading =
                mathPositionHeadingDegrees(g_lmapScene->pose.targetPosition, g_gameState.overviewPosition);
        } else {
            g_lmapScene->pose.targetHeading =
                mathPositionHeadingDegrees(g_lmapScene->pose.targetPosition, g_gameState.overviewPosition);
            g_lmapScene->pose.targetPosition = g_gameState.overviewPosition;
            g_lmapScene->pose.targetPosition.x +=
                libm_sinf((g_lmapScene->pose.targetHeading + LMAP_HALF_TURN) * LMAP_DEG_TO_RAD) * LMAP_BEHIND_DISTANCE;
            g_lmapScene->pose.targetPosition.z +=
                libm_cosf((g_lmapScene->pose.targetHeading + LMAP_HALF_TURN) * LMAP_DEG_TO_RAD) * LMAP_BEHIND_DISTANCE;
        }
        lmapCameraSetMode(10);
        g_mapCamera->contextMode = -1;
        buttonHelpSetPreset(LMAP_BUTTON_HELP_PRESET);
        mapIfActivateRecord(1, g_gameState.overviewRecord);
        scene = g_lmapScene;
        scene->state++;
        scene->stateTime = 0;
        break;

    case LMAP_STATE_SETTLE:
        scene->stateTime++;
        mapIfActivateRecord(1, g_gameState.overviewRecord);
        scene = g_lmapScene;
        if (scene->stateTime > LMAP_SETTLE_FRAMES) {
            scene->moveMode = 0x1D;
            scene->moveSpeed = 2.0f;
            scene->state++;
            scene->stateTime = 0;
        }
        break;

    case LMAP_STATE_WAIT:
        scene->stateTime++;
        mapIfActivateRecord(1, g_gameState.overviewRecord);
        if (inputConfirmPressed() != 0) {
            g_lmapScene->state = LMAP_STATE_ENTER;
            g_lmapScene->stateTime = 0;
        } else if (padIsButtonPressed(LMAP_BUTTON_ACCEPT) != 0 || inputIsQuestMenuPressed() != 0) {
            g_mapCamera->heading = g_lmapScene->pose.targetHeading;
            g_mapCamera->contextMode = 0;
            lmapCameraSetMode(0);
            g_lmapScene->moveMode = 0;
            g_lmapScene->moveSpeed = 5.0f;
            mapIfActivateRecord(0, g_gameState.overviewRecord);
            g_lmapScene->state = LMAP_STATE_EXIT_A;
            g_lmapScene->stateTime = 0;
        }
        break;

    case LMAP_STATE_ENTER:
        g_gameState.map.transitionCompleted = 0;
        scene->moveMode = 8;
        scene->moveSpeed = 5.0f;
        mapDepartSpawnPlayerEffect(1);
        scene = g_lmapScene;
        scene->state++;
        scene->stateTime = 0;
        break;

    case LMAP_STATE_ENTER_WAIT:
        scene->stateTime++;
        if (scene->stateTime > LMAP_ENTER_FRAMES)
            lmapSetSceneId(LMAP_SCENE_ENTER);
        break;

    case LMAP_STATE_EXIT_A:
    case LMAP_STATE_EXIT_B:
        scene->state++;
        scene->stateTime = 0;
        break;

    case LMAP_STATE_EXIT_WAIT:
        scene->stateTime++;
        if (scene->stateTime > LMAP_EXIT_FRAMES) {
            mapDepartSpawnPlayerEffect(0);
            lmapSetSceneId(LMAP_SCENE_MAP);
        }
        break;

    default:
        break;
    }

    FUN_002804ec(&g_lmapScene->pose.targetPosition.x);
    mapSelectContainingRegions(g_lmapScene->pose.position.x, g_lmapScene->pose.position.z);
}

} /* extern "C" */
