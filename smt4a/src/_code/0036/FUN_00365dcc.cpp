/* NON_MATCHING: VFP constant register allocation differs (retail reuses s16 for the degrees-to-radians factor in state 0 after hoisting 5.0f, this build allocates s18) */
#include "map/mapDepart.h"
#include "game/GameStateA.h"
#include "map/LmapGlobals.h"

/* The map scene as the overview camera drives it. */
#define DEGREES_TO_RADIANS 0.017453292f

/* The controller whose pose the overview hands back. */
struct OverviewController {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ f32 heading;
    /* 0x1c */ u8 unk1c[0x94];
    /* 0xb0 */ s32 mode;
};

extern "C" {
extern OverviewController *g_lmapView;

void mapEaseSceneHeading(void);
void mapIfSpawnCaveAction(f32 x, f32 y, f32 z, f32 direction);
void mapIfReleasePanel(void);
void mapIfReleaseSlot2(void);
void FUN_00233e10(s32 mode, s32 record);
s32 mapIfHasSelection(void);
void FUN_002342b8(void);
s32 inputIsQuestMenuPressed(void);
void mapIfSetMode1(void);
s32 FUN_004d0584(void);
void mapSetSceneState(u32 id);
void FUN_00303460(s32 mode);
void FUN_00324e38(s32 mode);
void FUN_00327ee8(f32 x, f32 z);
void FUN_002e364c(MapVector *position);
f32 libm_cosf(f32 angle);
f32 libm_sinf(f32 angle);
void sysPlaySe(s32 id);
s32 padButtonIsPressed(u32 button);

/* One frame of the map overview: eases the scene toward its target, then steps the entry,
   hold and exit states. */
void FUN_00365dcc(void)
{
    mapEaseSceneHeading();
    LmapSceneA *scene = g_lmapScene;
    scene->pose.position.x = scene->pose.position.x + (scene->pose.targetPosition.x - scene->pose.position.x) * 0.33333334f;
    scene->pose.position.y = scene->pose.position.y + (scene->pose.targetPosition.y - scene->pose.position.y) * 0.16666667f;
    scene->pose.position.z = scene->pose.position.z + (scene->pose.targetPosition.z - scene->pose.position.z) * 0.33333334f;

    switch (scene->state) {
    case 0:
        scene->moveMode = 0;
        scene->moveSpeed = 3.0f;
        scene->unk06C = 0;
        scene->pose.targetPosition = g_gameState.overviewPosition;
        g_lmapScene->pose.targetPosition.x = g_lmapScene->pose.targetPosition.x + libm_sinf(g_gameState.pointHeading * DEGREES_TO_RADIANS) * 40.0f;
        g_lmapScene->pose.targetPosition.z = g_lmapScene->pose.targetPosition.z + libm_cosf(g_gameState.pointHeading * DEGREES_TO_RADIANS) * 40.0f;
        g_lmapScene->pose.targetHeading = g_gameState.overviewHeading;
        FUN_00303460(11);
        g_lmapView->mode = -2;
        sysPlaySe(0xdd);
        FUN_00233e10(1, g_gameState.overviewRecord);
        MapVector viewPosition = g_gameState.overviewPosition;
        viewPosition.x = viewPosition.x + libm_sinf(g_gameState.overviewHeading * DEGREES_TO_RADIANS) * 80.0f;
        viewPosition.z = viewPosition.z + libm_cosf(g_gameState.overviewHeading * DEGREES_TO_RADIANS) * 80.0f;
        mapIfSpawnCaveAction(viewPosition.x, viewPosition.y, viewPosition.z, g_gameState.pointHeading);
        g_lmapScene->state = g_lmapScene->state + 1;
        g_lmapScene->stateTime = 0;
        break;
    case 1:
        scene->stateTime++;
        FUN_00233e10(1, g_gameState.overviewRecord);
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
        FUN_00233e10(1, g_gameState.overviewRecord);
        if (FUN_004d0584()) {
            g_lmapScene->state = 10;
            g_lmapScene->stateTime = 0;
        } else if (padButtonIsPressed(5) || inputIsQuestMenuPressed()) {
            g_lmapView->heading = g_lmapScene->pose.targetHeading;
            g_lmapView->mode = 0;
            FUN_00303460(0);
            g_lmapScene->moveMode = 0;
            g_lmapScene->moveSpeed = 5.0f;
            FUN_00233e10(0, g_gameState.overviewRecord);
            mapIfReleaseSlot2();
            g_lmapScene->state = 90;
            g_lmapScene->stateTime = 0;
        }
        break;
    case 10:
        g_gameState.transitionCompleted = 0;
        scene->moveMode = 8;
        scene->moveSpeed = 5.0f;
        FUN_00324e38(1);
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
            g_lmapView->mode = 0;
            FUN_00303460(0);
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
