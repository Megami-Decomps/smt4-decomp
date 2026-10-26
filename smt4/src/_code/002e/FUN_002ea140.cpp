/* NON_MATCHING: per-frame step of the lmap intro/exit scene (eases the camera, then a state machine: set up the camera behind the player, wait, hand to the map, and the exit steps that switch back to scene 1 / 0x10); written from the decompilation, the arguments of mathDistanceBetweenPoints / mathPositionHeadingDegrees / the trig helpers are not recovered (called with the angle where one is visible) and the u32 copies of the float targets are kept */
#include "common.h"
#include "util/TrigF32.h"

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

struct LmapScene {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 state;
    /* 0x08 */ s32 frame;
    /* 0x0C */ u8 unk0C[0x10];
    /* 0x1C */ f32 camX;
    /* 0x20 */ f32 camY;
    /* 0x24 */ f32 camZ;
    /* 0x28 */ f32 targetX;
    /* 0x2C */ f32 targetY;
    /* 0x30 */ f32 targetZ;
    /* 0x34 */ u8 unk34[0x18];
    /* 0x4C */ f32 heading;
    /* 0x50 */ f32 savedHeading;
    /* 0x54 */ u32 easeMode;
    /* 0x58 */ f32 easeValue;
    /* 0x5C */ u8 unk5C[0x10];
    /* 0x6C */ u8 flag;
};

struct LmapView {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ f32 heading;
    /* 0x1C */ u8 unk1C[0x90];
    /* 0xAC */ s32 selection;
};

extern "C" {
// The fields of g_gameState this function uses.
struct GameStateView {
    u8 pad000[0x80];
    u32 f0049f99c; /* 0x080 */
    u32 f0049f9a0; /* 0x084 */
    u32 f0049f9a4; /* 0x088 */
    u32 f0049f9a8; /* 0x08c */
    u8 pad090[0x19a];
    u8 f0049fb46; /* 0x22a */
};
extern GameStateView g_gameState;

extern LmapView *DAT_004474f4;
extern LmapScene *g_lmapScene;






void mapIfActivateRecord(s32 active, u32 record);
void lmapSetSceneId(u32 scene);
void FUN_0027fc14(s32 mode);
void FUN_0027fca0(s32 mode);
void mapSelectContainingRegions(void);
void FUN_002804ec(f32 *position);
void mapEaseSceneHeading(void);
f32 mathDistanceBetweenPoints(void);
f32 mathPositionHeadingDegrees(void);
void buttonHelpSetPreset(s32 preset);
s32 inputIsQuestMenuPressed(void);
s32 FUN_0027ee9c(void);
s32 padIsButtonPressed(u32 button);

/* Moves the target to the spawn position, pushed out behind `heading`. */
static __inline void lmapPlaceBehind(LmapScene *scene, f32 heading)
{
    scene->targetX = *reinterpret_cast<f32 *>(&g_gameState.f0049f9a0);
    scene->targetY = *reinterpret_cast<f32 *>(&g_gameState.f0049f9a4);
    scene->targetZ = *reinterpret_cast<f32 *>(&g_gameState.f0049f9a8);
    f32 angle = (heading + LMAP_HALF_TURN) * LMAP_DEG_TO_RAD;
    scene->targetX += FUN_0028250c(angle) * LMAP_BEHIND_DISTANCE;
    scene->targetZ += FUN_00282390(angle) * LMAP_BEHIND_DISTANCE;
}

void FUN_002ea140(void)
{
    mapEaseSceneHeading();
    LmapScene *scene = g_lmapScene;
    scene->camX += (scene->targetX - scene->camX) * 0.33333334f;
    scene->camY += (scene->targetY - scene->camY) * 0.16666667f;
    scene->camZ += (scene->targetZ - scene->camZ) * 0.33333334f;

    switch (scene->state) {
    case LMAP_STATE_SETUP:
        scene->easeMode = 0;
        scene->easeValue = 3.0f;
        scene->flag = 0;
        if (mathDistanceBetweenPoints() < LMAP_NEAR_DISTANCE) {
            lmapPlaceBehind(scene, scene->heading);
            scene = g_lmapScene;
            scene->savedHeading = mathPositionHeadingDegrees();
        } else {
            scene->savedHeading = mathPositionHeadingDegrees();
            lmapPlaceBehind(scene, scene->savedHeading);
        }
        FUN_0027fc14(10);
        DAT_004474f4->selection = -1;
        buttonHelpSetPreset(LMAP_BUTTON_HELP_PRESET);
        mapIfActivateRecord(1, g_gameState.f0049f99c);
        scene = g_lmapScene;
        scene->state++;
        scene->frame = 0;
        break;

    case LMAP_STATE_SETTLE:
        scene->frame++;
        mapIfActivateRecord(1, g_gameState.f0049f99c);
        scene = g_lmapScene;
        if (scene->frame >= LMAP_SETTLE_FRAMES) {
            scene->easeMode = 0x1D;
            scene->easeValue = 2.0f;
            scene->state++;
            scene->frame = 0;
        }
        break;

    case LMAP_STATE_WAIT:
        scene->frame++;
        mapIfActivateRecord(1, g_gameState.f0049f99c);
        if (FUN_0027ee9c() != 0) {
            g_lmapScene->state = LMAP_STATE_ENTER;
            g_lmapScene->frame = 0;
        } else if (padIsButtonPressed(LMAP_BUTTON_ACCEPT) != 0 || inputIsQuestMenuPressed() != 0) {
            DAT_004474f4->heading = g_lmapScene->savedHeading;
            DAT_004474f4->selection = 0;
            FUN_0027fc14(0);
            g_lmapScene->easeMode = 0;
            g_lmapScene->easeValue = 5.0f;
            mapIfActivateRecord(0, g_gameState.f0049f99c);
            g_lmapScene->state = LMAP_STATE_EXIT_A;
            g_lmapScene->frame = 0;
        }
        break;

    case LMAP_STATE_ENTER:
        g_gameState.f0049fb46 = 0;
        scene->easeMode = 8;
        scene->easeValue = 5.0f;
        FUN_0027fca0(1);
        scene = g_lmapScene;
        scene->state++;
        scene->frame = 0;
        break;

    case LMAP_STATE_ENTER_WAIT:
        scene->frame++;
        if (scene->frame >= LMAP_ENTER_FRAMES)
            lmapSetSceneId(LMAP_SCENE_ENTER);
        break;

    case LMAP_STATE_EXIT_A:
    case LMAP_STATE_EXIT_B:
        scene->state++;
        scene->frame = 0;
        break;

    case LMAP_STATE_EXIT_WAIT:
        scene->frame++;
        if (scene->frame >= LMAP_EXIT_FRAMES) {
            FUN_0027fca0(0);
            lmapSetSceneId(LMAP_SCENE_MAP);
        }
        break;

    default:
        break;
    }

    FUN_002804ec(&g_lmapScene->targetX);
    mapSelectContainingRegions();
}

} /* extern "C" */
