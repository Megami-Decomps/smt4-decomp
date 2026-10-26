#include "common.h"

extern "C" {

typedef struct MenuState {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ s32 step;
    /* 0x008 */ s32 timer;
    /* 0x00C */ u8 unk00c[4];
    /* 0x010 */ s32 returnStep;
    /* 0x014 */ u8 unk014[0xb40 - 0x14];
    /* 0xB40 */ u32 mode;
} MenuState;

void FUN_003343f0(s32 a);
void sortMenuAcquire(s32 menu, s32 a);
void FUN_0031f208(s32 item);
void useCounterStart(void);
void sysPlaySe(s32 se);
void buttonHelpSetText(s32 a, u32 color);

/* Opens the menu's command list (a shorter one in mode 8), plays the open sound and moves to step 10. */
void menuOpenCommandList(MenuState *state)
{
    FUN_003343f0(1);
    sortMenuAcquire(12, 0);
    if (state->mode != 8) {
        FUN_0031f208(28);
        FUN_0031f208(7);
        FUN_0031f208(3);
        FUN_0031f208(12);
        FUN_0031f208(16);
        if (state->mode == 0 || state->mode == 1 || state->mode == 2) {
            FUN_0031f208(15);
        }
    } else {
        FUN_0031f208(12);
        FUN_0031f208(7);
        FUN_0031f208(16);
        FUN_0031f208(15);
    }
    useCounterStart();
    sysPlaySe(5);
    buttonHelpSetText(0, 0xf4f4f4ff);
    state->returnStep = state->step;
    state->timer = 0;
    state->step = 10;
}

} /* extern "C" */
