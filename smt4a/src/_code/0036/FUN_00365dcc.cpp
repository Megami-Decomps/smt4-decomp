/* NON_MATCHING: VFP constant register allocation differs (retail reuses s16 for the degrees-to-radians factor in state 0 after hoisting 5.0f, this build allocates s18) */
#include "map/mapDepart.h"

/* The map scene as the overview camera drives it. */
#define DEGREES_TO_RADIANS 0.017453292f

struct OverviewScene {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ s32 state;
    /* 0x08 */ s32 stateTime;
    /* 0x0c */ u8 unk0c[0x10];
    /* 0x1c */ MapVector position;
    /* 0x28 */ MapVector target;
    /* 0x34 */ u8 unk34[0x18];
    /* 0x4c */ f32 unk4c;
    /* 0x50 */ f32 targetHeading;
    /* 0x54 */ s32 cameraMode;
    /* 0x58 */ f32 cameraSpeed;
    /* 0x5c */ u8 unk5c[0x10];
    /* 0x6c */ u8 unk6c;
};

/* The part of the game state that holds the overview's start pose. */
struct OverviewGameState {
    /* 0x000 */ u8 unk000[0xb0];
    /* 0x0b0 */ s32 overviewRecord;
    /* 0x0b4 */ MapVector overviewPosition;
    /* 0x0c0 */ f32 overviewHeading;
    /* 0x0c4 */ u8 unk0c4[0xc];
    /* 0x0d0 */ f32 overviewDirection;
    /* 0x0d4 */ u8 unk0d4[0x18a];
    /* 0x25e */ u8 transitionCompleted;
};

/* The controller whose pose the overview hands back. */
struct OverviewController {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ f32 heading;
    /* 0x1c */ u8 unk1c[0x94];
    /* 0xb0 */ s32 mode;
};

extern "C" {
extern OverviewScene *g_lmapScene;
extern OverviewController *g_lmapView;
extern OverviewGameState g_gameState;

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
f32 FUN_001bbf0c(f32 angle);
f32 FUN_001bc124(f32 angle);
void sysPlaySe(s32 id);
s32 padButtonIsPressed(u32 button);

/* One frame of the map overview: eases the scene toward its target, then steps the entry,
   hold and exit states. */
void FUN_00365dcc(void)
{
    mapEaseSceneHeading();
    OverviewScene *scene = g_lmapScene;
    scene->position.x = scene->position.x + (scene->target.x - scene->position.x) * 0.33333334f;
    scene->position.y = scene->position.y + (scene->target.y - scene->position.y) * 0.16666667f;
    scene->position.z = scene->position.z + (scene->target.z - scene->position.z) * 0.33333334f;

    switch (scene->state) {
    case 0:
        scene->cameraMode = 0;
        scene->cameraSpeed = 3.0f;
        scene->unk6c = 0;
        scene->target = g_gameState.overviewPosition;
        g_lmapScene->target.x = g_lmapScene->target.x + FUN_001bc124(g_gameState.overviewDirection * DEGREES_TO_RADIANS) * 40.0f;
        g_lmapScene->target.z = g_lmapScene->target.z + FUN_001bbf0c(g_gameState.overviewDirection * DEGREES_TO_RADIANS) * 40.0f;
        g_lmapScene->targetHeading = g_gameState.overviewHeading;
        FUN_00303460(11);
        g_lmapView->mode = -2;
        sysPlaySe(0xdd);
        FUN_00233e10(1, g_gameState.overviewRecord);
        MapVector viewPosition = g_gameState.overviewPosition;
        viewPosition.x = viewPosition.x + FUN_001bc124(g_gameState.overviewHeading * DEGREES_TO_RADIANS) * 80.0f;
        viewPosition.z = viewPosition.z + FUN_001bbf0c(g_gameState.overviewHeading * DEGREES_TO_RADIANS) * 80.0f;
        mapIfSpawnCaveAction(viewPosition.x, viewPosition.y, viewPosition.z, g_gameState.overviewDirection);
        g_lmapScene->state = g_lmapScene->state + 1;
        g_lmapScene->stateTime = 0;
        break;
    case 1:
        scene->stateTime++;
        FUN_00233e10(1, g_gameState.overviewRecord);
        scene = g_lmapScene;
        if (scene->stateTime > 2) {
            scene->cameraMode = 29;
            scene->cameraSpeed = 2.0f;
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
            g_lmapView->heading = g_lmapScene->targetHeading;
            g_lmapView->mode = 0;
            FUN_00303460(0);
            g_lmapScene->cameraMode = 0;
            g_lmapScene->cameraSpeed = 5.0f;
            FUN_00233e10(0, g_gameState.overviewRecord);
            mapIfReleaseSlot2();
            g_lmapScene->state = 90;
            g_lmapScene->stateTime = 0;
        }
        break;
    case 10:
        g_gameState.transitionCompleted = 0;
        scene->cameraMode = 8;
        scene->cameraSpeed = 5.0f;
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
            g_lmapView->heading = g_lmapScene->targetHeading;
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
    FUN_002e364c(&g_lmapScene->target);
    FUN_00327ee8(g_lmapScene->position.x, g_lmapScene->position.z);
}

} /* extern "C" */
