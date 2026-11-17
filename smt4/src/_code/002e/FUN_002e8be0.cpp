/* NON_MATCHING: VFP constant register allocation differs (retail reuses s16 for the degrees-to-radians factor in state 0 after hoisting 5.0f, this build allocates s18) */
#include "map/mapDepart.h"
#include "map/LmapGlobals.h"
#include "util/TrigF32.h"
#include "game/GameState.h"
#include "map/LmapViewGlobals.h"

#define DEGREES_TO_RADIANS 0.017453292f

/* The controller whose pose the overview hands back. */

extern "C" {

void mapEaseSceneHeading(void);
void FUN_001b4478(f32 x, f32 y, f32 z, f32 direction);
void mapDestroyInterfaceModel(void);
void mapIfReleaseSlot1(void);
void mapIfActivateRecord(s32 mode, s32 record);
s32 mapIfHasSelection(void);
void mapInterfaceSetStateTwo(void);
s32 inputIsQuestMenuPressed(void);
void mapIfSetMode1(void);
s32 FUN_0027ee9c(void);
void lmapSetSceneId(u32 id);
void FUN_0027fc14(s32 mode);
void FUN_0027fca0(s32 mode);
void mapSelectContainingRegions(f32 x, f32 z);
void FUN_002804ec(MapVector *position);
void buttonHelpSetPreset(s32 preset);
s32 padIsButtonPressed(u32 button);

/* One frame of the map overview: eases the scene toward its target, then steps the entry,
   hold and exit states. */
void FUN_002e8be0(void)
{
    mapEaseSceneHeading();
    LmapScene *scene = g_lmapScene;
    scene->pose.position.x = scene->pose.position.x + (scene->pose.targetPosition.x - scene->pose.position.x) * 0.33333334f;
    scene->pose.position.y = scene->pose.position.y + (scene->pose.targetPosition.y - scene->pose.position.y) * 0.16666667f;
    scene->pose.position.z = scene->pose.position.z + (scene->pose.targetPosition.z - scene->pose.position.z) * 0.33333334f;

    switch (scene->state) {
    case 0:
        scene->moveMode = 0;
        scene->moveSpeed = 3.0f;
        scene->unk06C = 0;
        scene->pose.targetPosition = g_gameState.overviewPosition;
        g_lmapScene->pose.targetPosition.x = g_lmapScene->pose.targetPosition.x + mathRemPio2f(g_gameState.heading * DEGREES_TO_RADIANS) * 40.0f;
        g_lmapScene->pose.targetPosition.z = g_lmapScene->pose.targetPosition.z + FUN_00282390(g_gameState.heading * DEGREES_TO_RADIANS) * 40.0f;
        g_lmapScene->pose.targetHeading = g_gameState.overviewHeading;
        FUN_0027fc14(11);
        g_mapCamera->contextMode = -2;
        buttonHelpSetPreset(0xdb);
        mapIfActivateRecord(1, g_gameState.overviewRecord);
        MapVector viewPosition;
        viewPosition.x = g_gameState.overviewPosition.x;
        viewPosition.y = g_gameState.overviewPosition.y;
        viewPosition.z = g_gameState.overviewPosition.z;
        viewPosition.x = viewPosition.x + mathRemPio2f(g_gameState.overviewHeading * DEGREES_TO_RADIANS) * 80.0f;
        viewPosition.z = viewPosition.z + FUN_00282390(g_gameState.overviewHeading * DEGREES_TO_RADIANS) * 80.0f;
        FUN_001b4478(viewPosition.x, viewPosition.y, viewPosition.z, g_gameState.heading);
        g_lmapScene->state = g_lmapScene->state + 1;
        g_lmapScene->stateTime = 0;
        break;
    case 1:
        scene->stateTime++;
        mapIfActivateRecord(1, g_gameState.overviewRecord);
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
        mapIfActivateRecord(1, g_gameState.overviewRecord);
        if (FUN_0027ee9c()) {
            g_lmapScene->state = 10;
            g_lmapScene->stateTime = 0;
        } else if (padIsButtonPressed(5) || inputIsQuestMenuPressed()) {
            g_mapCamera->heading = g_lmapScene->pose.targetHeading;
            g_mapCamera->contextMode = 0;
            FUN_0027fc14(0);
            g_lmapScene->moveMode = 0;
            g_lmapScene->moveSpeed = 5.0f;
            mapIfActivateRecord(0, g_gameState.overviewRecord);
            mapIfReleaseSlot1();
            g_lmapScene->state = 90;
            g_lmapScene->stateTime = 0;
        }
        break;
    case 10:
        g_gameState.map.transitionCompleted = 0;
        scene->moveMode = 8;
        scene->moveSpeed = 5.0f;
        FUN_0027fca0(1);
        g_lmapScene->state = g_lmapScene->state + 1;
        g_lmapScene->stateTime = 0;
        break;
    case 11:
        scene->stateTime++;
        if (scene->stateTime == 20) {
            mapInterfaceSetStateTwo();
            g_lmapScene->state = g_lmapScene->state + 1;
            g_lmapScene->stateTime = 0;
        }
        break;
    case 12:
        if (!mapIfHasSelection()) {
            mapIfReleaseSlot1();
            g_mapCamera->heading = g_lmapScene->pose.targetHeading;
            g_mapCamera->contextMode = 0;
            FUN_0027fc14(0);
            g_lmapScene->state = g_lmapScene->state + 1;
            g_lmapScene->stateTime = 0;
        }
        break;
    case 13:
        scene->stateTime++;
        if (scene->stateTime == 20) {
            mapDestroyInterfaceModel();
            mapIfSetMode1();
            lmapSetSceneId(10);
        }
        break;
    case 90:
        scene->state = scene->state + 1;
        scene->stateTime = 0;
        break;
    case 91:
        mapDestroyInterfaceModel();
        g_lmapScene->state = g_lmapScene->state + 1;
        g_lmapScene->stateTime = 0;
        break;
    case 92:
        scene->stateTime++;
        if (scene->stateTime > 3) {
            lmapSetSceneId(1);
        }
        break;
    }
    FUN_002804ec(&g_lmapScene->pose.targetPosition);
    mapSelectContainingRegions(g_lmapScene->pose.position.x, g_lmapScene->pose.position.z);
}

} /* extern "C" */
