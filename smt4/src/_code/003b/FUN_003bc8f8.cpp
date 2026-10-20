/* NON_MATCHING: register allocation of the five edge updates (retail loads them into ip, r2, lr, r3, r4; here r2, r3, lr, ip, r4). */
#include "common.h"

extern "C" {

typedef struct Window {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u16 edge[5];
    /* 0x00E */ u8 unk00e[0x5F3];
    /* 0x601 */ u8 mode;
} Window;

extern int FUN_0029c6b0(Window *window);

/* Sets the window's mode and widens its five edge values by the mode's step (mode 1-3 steps 1-3). */
void FUN_003bc8f8(Window *window, u32 modeArg)
{
    u8 mode = modeArg;
    u16 step = 0;
    s32 i;

    window->mode = mode;
    if (mode == 1) {
        step = 1;
    } else if (mode == 2) {
        step = 2;
    } else if (mode == 3) {
        step = 3;
    }
    for (i = 0; i < 5; i++) {
        window->edge[i] += step;
    }
    FUN_0029c6b0(window);
}

}
