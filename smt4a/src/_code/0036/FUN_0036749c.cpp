/* NON_MATCHING: 104 lines. distSpatial and mathPositionHeadingDegrees now take their real by-value MapVector arguments, the behind-the-player placement is written per branch (the heading field read at each use, the spawn copied whole), the frame limits are retail's (> 2, > 15, > 3) and FUN_00327ee8 takes the eased x and z. Retail keeps the eased position in s0-s2 for distSpatial (the build reloads it), loads 1/3 and 1/6 into s3/s2, and gives the degree-to-radian factor and the distance 100 the other two saved VFP registers. */
#include "common.h"
#include "game/GameStateA.h"
#include "map/LmapViewGlobals.h"
#include "util/TrigF32.h"
#include "util/MathFunctions.h"
#include "shard/W6_W6Match1_PositionedStream.h"

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
#define LMAP_SOUND_ENTER 0xDD

extern "C" {

void mapIfApplyEntryRequest(s32 active, u32 record);
void mapSetSceneState(u32 scene);
void lmapCameraSetMode(s32 mode);
void FUN_00324e38(s32 mode);
void FUN_00327ee8(f32 x, f32 z);
void FUN_002e364c(MapVector *position);
void mapEaseSceneHeading(void);

void sysPlaySe(u32 sound);
s32 inputIsQuestMenuPressed(void);
s32 inputConfirmPressed(void);
s32 padButtonIsPressed(u32 button);

void FUN_0036749c(void)
{
    mapEaseSceneHeading();
    LmapSceneA *scene = g_lmapScene;
    scene->pose.position.x += (scene->pose.targetPosition.x - scene->pose.position.x) * 0.33333334f;
    scene->pose.position.y += (scene->pose.targetPosition.y - scene->pose.position.y) * 0.16666667f;
    scene->pose.position.z += (scene->pose.targetPosition.z - scene->pose.position.z) * 0.33333334f;

    switch (scene->state) {
    case LMAP_STATE_SETUP:
        scene->moveMode = 0;
        scene->moveSpeed = 3.0f;
        scene->unk06C = 0;
        /* The target goes behind the player: opposite the current heading when the camera is already close,
         * else opposite the heading from the camera to the player. */
        if (distSpatial(g_lmapScene->pose.position, g_gameState.overviewPosition) < LMAP_NEAR_DISTANCE) {
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
        g_lmapView->contextMode = -1;
        sysPlaySe(LMAP_SOUND_ENTER);
        mapIfApplyEntryRequest(1, g_gameState.overviewRecord);
        scene = g_lmapScene;
        scene->state++;
        scene->stateTime = 0;
        break;

    case LMAP_STATE_SETTLE:
        scene->stateTime++;
        mapIfApplyEntryRequest(1, g_gameState.overviewRecord);
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
        mapIfApplyEntryRequest(1, g_gameState.overviewRecord);
        if (inputConfirmPressed() != 0) {
            g_lmapScene->state = LMAP_STATE_ENTER;
            g_lmapScene->stateTime = 0;
        } else if (padButtonIsPressed(LMAP_BUTTON_ACCEPT) != 0 || inputIsQuestMenuPressed() != 0) {
            g_lmapView->heading = g_lmapScene->pose.targetHeading;
            g_lmapView->contextMode = 0;
            lmapCameraSetMode(0);
            g_lmapScene->moveMode = 0;
            g_lmapScene->moveSpeed = 5.0f;
            mapIfApplyEntryRequest(0, g_gameState.overviewRecord);
            g_lmapScene->state = LMAP_STATE_EXIT_A;
            g_lmapScene->stateTime = 0;
        }
        break;

    case LMAP_STATE_ENTER:
        g_gameState.transitionCompleted = 0;
        scene->moveMode = 8;
        scene->moveSpeed = 5.0f;
        FUN_00324e38(1);
        scene = g_lmapScene;
        scene->state++;
        scene->stateTime = 0;
        break;

    case LMAP_STATE_ENTER_WAIT:
        scene->stateTime++;
        if (scene->stateTime > LMAP_ENTER_FRAMES)
            mapSetSceneState(LMAP_SCENE_ENTER);
        break;

    case LMAP_STATE_EXIT_A:
    case LMAP_STATE_EXIT_B:
        scene->state++;
        scene->stateTime = 0;
        break;

    case LMAP_STATE_EXIT_WAIT:
        scene->stateTime++;
        if (scene->stateTime > LMAP_EXIT_FRAMES) {
            FUN_00324e38(0);
            mapSetSceneState(LMAP_SCENE_MAP);
        }
        break;

    default:
        break;
    }

    FUN_002e364c(&g_lmapScene->pose.targetPosition);
    FUN_00327ee8(g_lmapScene->pose.position.x, g_lmapScene->pose.position.z);
}

} /* extern "C" */
