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

void gameGlobalsSetMenuOpenFlag(s32 a);
void sortMenuAcquire(s32 menu, s32 a);
void useCounterAppendValue(s32 item);
void useCounterStart(void);
void sysPlaySe(s32 se);
void buttonHelpSetText(s32 a, u32 color);

/* Opens the menu's command list (a shorter one in mode 8), plays the open sound and moves to step 10. */
void menuOpenCommandList(MenuState *state)
{
    gameGlobalsSetMenuOpenFlag(1);
    sortMenuAcquire(12, 0);
    if (state->mode != 8) {
        useCounterAppendValue(28);
        useCounterAppendValue(7);
        useCounterAppendValue(3);
        useCounterAppendValue(12);
        useCounterAppendValue(16);
        if (state->mode == 0 || state->mode == 1 || state->mode == 2) {
            useCounterAppendValue(15);
        }
    } else {
        useCounterAppendValue(12);
        useCounterAppendValue(7);
        useCounterAppendValue(16);
        useCounterAppendValue(15);
    }
    useCounterStart();
    sysPlaySe(5);
    buttonHelpSetText(0, 0xf4f4f4ff);
    state->returnStep = state->step;
    state->timer = 0;
    state->step = 10;
}

} /* extern "C" */
