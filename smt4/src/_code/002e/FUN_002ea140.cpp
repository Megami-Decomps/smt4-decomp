/* NON_MATCHING: per-frame step of the lmap intro/exit scene (eases the camera, then a state machine: set up the camera behind the player, wait, hand to the map, and the exit steps that switch back to scene 1 / 0x10); written from the decompilation, the arguments of mathDistanceBetweenPoints / mathPositionHeadingDegrees / the trig helpers are not recovered (called with the angle where one is visible) and the u32 copies of the float targets are kept */
#include "map/LmapPlayerModel.h"
#include "common.h"
#include "map/LmapGlobals.h"
#include "util/TrigF32.h"
#include "game/GameState.h"
#include "map/LmapViewGlobals.h"

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
#define LMAP_SETTLE_FRAMES 3
#define LMAP_ENTER_FRAMES 0x10
#define LMAP_EXIT_FRAMES 4
#define LMAP_SCENE_MAP 1
#define LMAP_SCENE_ENTER 0x10
#define LMAP_BUTTON_ACCEPT 5
#define LMAP_BUTTON_HELP_PRESET 0xDB

extern "C" {

void mapIfActivateRecord(s32 active, u32 record);
void lmapSetSceneId(u32 scene);
void lmapCameraSetMode(s32 mode);
void mapSelectContainingRegions(void);
void FUN_002804ec(f32 *position);
void mapEaseSceneHeading(void);
f32 mathDistanceBetweenPoints(void);
f32 mathPositionHeadingDegrees(void);
void buttonHelpSetPreset(s32 preset);
s32 inputIsQuestMenuPressed(void);
s32 inputConfirmPressed(void);
s32 padIsButtonPressed(u32 button);

/* Moves the target to the spawn position, pushed out behind `heading`. */
static __inline void lmapPlaceBehind(LmapScene *scene, f32 heading)
{
    scene->pose.targetPosition.x = g_gameState.overviewPosition.x;
    scene->pose.targetPosition.y = g_gameState.overviewPosition.y;
    scene->pose.targetPosition.z = g_gameState.overviewPosition.z;
    f32 angle = (heading + LMAP_HALF_TURN) * LMAP_DEG_TO_RAD;
    scene->pose.targetPosition.x += mathRemPio2f(angle) * LMAP_BEHIND_DISTANCE;
    scene->pose.targetPosition.z += libm_cosf(angle) * LMAP_BEHIND_DISTANCE;
}

void FUN_002ea140(void)
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
        if (mathDistanceBetweenPoints() < LMAP_NEAR_DISTANCE) {
            lmapPlaceBehind(scene, scene->pose.heading);
            scene = g_lmapScene;
            scene->pose.targetHeading = mathPositionHeadingDegrees();
        } else {
            scene->pose.targetHeading = mathPositionHeadingDegrees();
            lmapPlaceBehind(scene, scene->pose.targetHeading);
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
        if (scene->stateTime >= LMAP_SETTLE_FRAMES) {
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
        if (scene->stateTime >= LMAP_ENTER_FRAMES)
            lmapSetSceneId(LMAP_SCENE_ENTER);
        break;

    case LMAP_STATE_EXIT_A:
    case LMAP_STATE_EXIT_B:
        scene->state++;
        scene->stateTime = 0;
        break;

    case LMAP_STATE_EXIT_WAIT:
        scene->stateTime++;
        if (scene->stateTime >= LMAP_EXIT_FRAMES) {
            mapDepartSpawnPlayerEffect(0);
            lmapSetSceneId(LMAP_SCENE_MAP);
        }
        break;

    default:
        break;
    }

    FUN_002804ec(&g_lmapScene->pose.targetPosition.x);
    mapSelectContainingRegions();
}

} /* extern "C" */
