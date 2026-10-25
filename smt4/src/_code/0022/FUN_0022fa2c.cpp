#include "common.h"
#include "status/StatusCamera.h"

extern "C" {

int useCounterStart(void);
int FUN_0029e328(int id);
int sortMenuCreate(int a, int b);
int FUN_0029ee6c(int a, int color);
int buttonHelpSetPreset(int arg);

typedef struct Scene {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u32 unk004;
    /* 0x008 */ u32 unk008;
    /* 0x00C */ u8 unk00C[0x854];
    /* 0x860 */ s32 mode;
} Scene;

void FUN_0022fa2c(Scene *scene)
{
    FUN_002a0cc8(1);
    sortMenuCreate(0xc, 0);
    if (scene->mode != 8) {
        FUN_0029e328(0x1c);
        FUN_0029e328(7);
        FUN_0029e328(3);
        FUN_0029e328(0xc);
        FUN_0029e328(0x10);
        if (scene->mode == 0 || scene->mode == 1 || scene->mode == 2) {
            FUN_0029e328(0xf);
        }
    } else {
        FUN_0029e328(0xc);
        FUN_0029e328(7);
        FUN_0029e328(0x10);
        FUN_0029e328(0xf);
    }
    useCounterStart();
    buttonHelpSetPreset(5);
    FUN_0029ee6c(0, 0x323232ff);
    scene->unk004 = 8;
    scene->unk008 = 0;
}

} /* extern "C" */
