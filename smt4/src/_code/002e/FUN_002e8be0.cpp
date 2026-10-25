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
    /* 0x000 */ u8 unk000[0x80];
    /* 0x080 */ s32 overviewRecord;
    /* 0x084 */ MapVector overviewPosition;
    /* 0x090 */ f32 overviewHeading;
    /* 0x094 */ u8 unk094[0xc];
    /* 0x0a0 */ f32 overviewDirection;
    /* 0x0a4 */ u8 unk0a4[0x186];
    /* 0x22a */ u8 transitionCompleted;
};

/* The controller whose pose the overview hands back. */
struct OverviewController {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ f32 heading;
    /* 0x1c */ u8 unk1c[0x90];
    /* 0xac */ s32 mode;
};

extern "C" {
extern OverviewScene *g_lmapScene;
extern OverviewController *DAT_004474f4;
extern OverviewGameState g_gameState;

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
f32 FUN_00282390(f32 angle);
f32 FUN_0028250c(f32 angle);
void buttonHelpSetPreset(s32 preset);
s32 padIsButtonPressed(u32 button);

/* One frame of the map overview: eases the scene toward its target, then steps the entry,
   hold and exit states. */
void FUN_002e8be0(void)
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
        g_lmapScene->target.x = g_lmapScene->target.x + FUN_0028250c(g_gameState.overviewDirection * DEGREES_TO_RADIANS) * 40.0f;
        g_lmapScene->target.z = g_lmapScene->target.z + FUN_00282390(g_gameState.overviewDirection * DEGREES_TO_RADIANS) * 40.0f;
        g_lmapScene->targetHeading = g_gameState.overviewHeading;
        FUN_0027fc14(11);
        DAT_004474f4->mode = -2;
        buttonHelpSetPreset(0xdb);
        mapIfActivateRecord(1, g_gameState.overviewRecord);
        MapVector viewPosition;
        viewPosition.x = g_gameState.overviewPosition.x;
        viewPosition.y = g_gameState.overviewPosition.y;
        viewPosition.z = g_gameState.overviewPosition.z;
        viewPosition.x = viewPosition.x + FUN_0028250c(g_gameState.overviewHeading * DEGREES_TO_RADIANS) * 80.0f;
        viewPosition.z = viewPosition.z + FUN_00282390(g_gameState.overviewHeading * DEGREES_TO_RADIANS) * 80.0f;
        FUN_001b4478(viewPosition.x, viewPosition.y, viewPosition.z, g_gameState.overviewDirection);
        g_lmapScene->state = g_lmapScene->state + 1;
        g_lmapScene->stateTime = 0;
        break;
    case 1:
        scene->stateTime++;
        mapIfActivateRecord(1, g_gameState.overviewRecord);
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
        mapIfActivateRecord(1, g_gameState.overviewRecord);
        if (FUN_0027ee9c()) {
            g_lmapScene->state = 10;
            g_lmapScene->stateTime = 0;
        } else if (padIsButtonPressed(5) || inputIsQuestMenuPressed()) {
            DAT_004474f4->heading = g_lmapScene->targetHeading;
            DAT_004474f4->mode = 0;
            FUN_0027fc14(0);
            g_lmapScene->cameraMode = 0;
            g_lmapScene->cameraSpeed = 5.0f;
            mapIfActivateRecord(0, g_gameState.overviewRecord);
            mapIfReleaseSlot1();
            g_lmapScene->state = 90;
            g_lmapScene->stateTime = 0;
        }
        break;
    case 10:
        g_gameState.transitionCompleted = 0;
        scene->cameraMode = 8;
        scene->cameraSpeed = 5.0f;
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
            DAT_004474f4->heading = g_lmapScene->targetHeading;
            DAT_004474f4->mode = 0;
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
    FUN_002804ec(&g_lmapScene->target);
    mapSelectContainingRegions(g_lmapScene->position.x, g_lmapScene->position.z);
}

} /* extern "C" */
