/* NON_MATCHING: per-frame step of the lmap intro/exit scene (eases the camera, then a state machine: set up the camera behind the player, wait, hand to the map, and the exit steps that switch back to scene 1 / 0x10); written from the decompilation, the arguments of distSpatial / mathPositionHeadingDegrees / the trig helpers are not recovered (called with the angle where one is visible) and the u32 copies of the float targets are kept */
#include "common.h"

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
#define LMAP_SOUND_ENTER 0xDD

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
    /* 0x1C */ u8 unk1C[0x94];
    /* 0xB0 */ s32 selection;
};

extern "C" {
extern LmapView *g_lmapView;
extern LmapScene *g_lmapScene;
extern u32 DAT_005f16ac;      /* interface record activated while the scene runs */
extern u32 DAT_005f16b0;      /* spawn position x */
extern u32 DAT_005f16b4;      /* spawn position y */
extern u32 DAT_005f16b8;      /* spawn position z */
extern u8 DAT_005f185a;

void FUN_00233e10(s32 active, u32 record);
void mapSetSceneState(u32 scene);
void FUN_00303460(s32 mode);
void FUN_00324e38(s32 mode);
void FUN_00327ee8(void);
void FUN_002e364c(f32 *position);
void mapEaseSceneHeading(void);
f32 FUN_001bbf0c(f32 angle);
f32 FUN_001bc124(f32 angle);
f32 distSpatial(void);
f32 mathPositionHeadingDegrees(void);
void sysPlaySe(u32 sound);
s32 inputIsQuestMenuPressed(void);
s32 FUN_004d0584(void);
s32 padButtonIsPressed(u32 button);

/* Moves the target to the spawn position, pushed out behind `heading`. */
static __inline void lmapPlaceBehind(LmapScene *scene, f32 heading)
{
    scene->targetX = *reinterpret_cast<f32 *>(&DAT_005f16b0);
    scene->targetY = *reinterpret_cast<f32 *>(&DAT_005f16b4);
    scene->targetZ = *reinterpret_cast<f32 *>(&DAT_005f16b8);
    f32 angle = (heading + LMAP_HALF_TURN) * LMAP_DEG_TO_RAD;
    scene->targetX += FUN_001bc124(angle) * LMAP_BEHIND_DISTANCE;
    scene->targetZ += FUN_001bbf0c(angle) * LMAP_BEHIND_DISTANCE;
}

void FUN_0036749c(void)
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
        if (distSpatial() < LMAP_NEAR_DISTANCE) {
            lmapPlaceBehind(scene, scene->heading);
            scene = g_lmapScene;
            scene->savedHeading = mathPositionHeadingDegrees();
        } else {
            scene->savedHeading = mathPositionHeadingDegrees();
            lmapPlaceBehind(scene, scene->savedHeading);
        }
        FUN_00303460(10);
        g_lmapView->selection = -1;
        sysPlaySe(LMAP_SOUND_ENTER);
        FUN_00233e10(1, DAT_005f16ac);
        scene = g_lmapScene;
        scene->state++;
        scene->frame = 0;
        break;

    case LMAP_STATE_SETTLE:
        scene->frame++;
        FUN_00233e10(1, DAT_005f16ac);
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
        FUN_00233e10(1, DAT_005f16ac);
        if (FUN_004d0584() != 0) {
            g_lmapScene->state = LMAP_STATE_ENTER;
            g_lmapScene->frame = 0;
        } else if (padButtonIsPressed(LMAP_BUTTON_ACCEPT) != 0 || inputIsQuestMenuPressed() != 0) {
            g_lmapView->heading = g_lmapScene->savedHeading;
            g_lmapView->selection = 0;
            FUN_00303460(0);
            g_lmapScene->easeMode = 0;
            g_lmapScene->easeValue = 5.0f;
            FUN_00233e10(0, DAT_005f16ac);
            g_lmapScene->state = LMAP_STATE_EXIT_A;
            g_lmapScene->frame = 0;
        }
        break;

    case LMAP_STATE_ENTER:
        DAT_005f185a = 0;
        scene->easeMode = 8;
        scene->easeValue = 5.0f;
        FUN_00324e38(1);
        scene = g_lmapScene;
        scene->state++;
        scene->frame = 0;
        break;

    case LMAP_STATE_ENTER_WAIT:
        scene->frame++;
        if (scene->frame >= LMAP_ENTER_FRAMES)
            mapSetSceneState(LMAP_SCENE_ENTER);
        break;

    case LMAP_STATE_EXIT_A:
    case LMAP_STATE_EXIT_B:
        scene->state++;
        scene->frame = 0;
        break;

    case LMAP_STATE_EXIT_WAIT:
        scene->frame++;
        if (scene->frame >= LMAP_EXIT_FRAMES) {
            FUN_00324e38(0);
            mapSetSceneState(LMAP_SCENE_MAP);
        }
        break;

    default:
        break;
    }

    FUN_002e364c(&g_lmapScene->targetX);
    FUN_00327ee8();
}

} /* extern "C" */
