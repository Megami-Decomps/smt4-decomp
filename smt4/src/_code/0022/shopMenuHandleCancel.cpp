#include "common.h"
#include "status/StatusCamera.h"
#include "code/Code0022_Smt4.h"

extern "C" {

int useCounterStart(void);
int useCounterAppendValue(int id);
int sortMenuCreate(int a, int b);
int buttonHelpSetText(int a, int color);
int buttonHelpSetPreset(int arg);

typedef struct Scene {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u32 unk004;
    /* 0x008 */ u32 unk008;
    /* 0x00C */ u8 unk00C[0x854];
    /* 0x860 */ s32 mode;
} Scene;

void shopMenuHandleCancel(Scene *scene)
{
    gameGlobalsSetSubScreenActive(1);
    sortMenuCreate(0xc, 0);
    if (scene->mode != 8) {
        useCounterAppendValue(0x1c);
        useCounterAppendValue(7);
        useCounterAppendValue(3);
        useCounterAppendValue(0xc);
        useCounterAppendValue(0x10);
        if (scene->mode == 0 || scene->mode == 1 || scene->mode == 2) {
            useCounterAppendValue(0xf);
        }
    } else {
        useCounterAppendValue(0xc);
        useCounterAppendValue(7);
        useCounterAppendValue(0x10);
        useCounterAppendValue(0xf);
    }
    useCounterStart();
    buttonHelpSetPreset(5);
    buttonHelpSetText(0, 0x323232ff);
    scene->unk004 = 8;
    scene->unk008 = 0;
}

} /* extern "C" */
