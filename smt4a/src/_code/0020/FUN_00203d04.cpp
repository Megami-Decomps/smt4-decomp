#include "common.h"

extern "C" {

void FUN_00184758(u8 *member, s32 a, s32 b);
void FUN_00184c00(u8 *member, s32 a, s32 b);

typedef struct Scene {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 state;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ s32 timer;
    /* 0x14 */ u8 unk14[0x0C];
    /* 0x20 */ s32 mode;
    /* 0x24 */ u8 unk24[0x30];
    /* 0x54 */ u8 member54[0x8C];
    /* 0xE0 */ u8 memberE0[1];
} Scene;
extern Scene *DAT_0057f574;

/* If the scene is running, moves it to state 5 with a 30-frame timer and restarts its members (the second one too in mode 2). */
void FUN_00203d04(void)
{
    Scene *scene = DAT_0057f574;

    if (scene->state != 0) {
        scene->state = 5;
        scene->timer = 0x1E;
        FUN_00184758(scene->member54, 1, 0);
        FUN_00184c00(scene->member54, 1, 0);
        if (scene->mode == 2) {
            FUN_00184758(scene->memberE0, 4, 0);
            return;
        }
    }
}

} /* extern "C" */
