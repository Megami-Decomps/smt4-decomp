/* Starts the intro animation: resets the object's state bytes and queues animation 0x13 on its player, playing at normal speed; returns 1. */
#include "common.h"

extern "C" {

typedef struct Scene {
    /* 0x000 */ u8 unk000[400];
    /* 0x190 */ u8 mode;
    /* 0x191 */ u8 step;
    /* 0x192 */ u8 flag;
    /* 0x193 */ u8 unk193;
    /* 0x194 */ u8 animData[0x168C];
    /* 0x1820 */ u8 player[1];
} Scene;

typedef struct SceneHolder {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ Scene *scene;
} SceneHolder;

extern SceneHolder g_messageMain;

extern void FUN_0014e188(void *player, s32 animId, s32 loops, void *data, s32 count, f32 speed);

u32 FUN_003ca8a4(void)
{
    Scene *scene = g_messageMain.scene;

    scene->mode = 2;
    scene->step = 0;
    scene->flag = 0;
    FUN_0014e188(scene->player, 0x13, -1, scene->animData, 11, 1.0f);
    return 1;
}

}
