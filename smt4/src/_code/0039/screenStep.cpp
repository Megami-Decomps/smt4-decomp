/* NON_MATCHING: register scheduling only in the step-0 block: retail reloads the constant 0 into r1 for the first FUN_00233240 call and ors the flags in r0, the build reuses the zero from the preceding strb */
#include "common.h"

extern "C" {

typedef struct Screen0039bc28 {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ u32 step;
    /* 0x00c */ u8 unk00c[4];
    /* 0x010 */ u32 flags;
    /* 0x014 */ u8 unk014[0x47];
    /* 0x05b */ u8 unk05b;
    /* 0x05c */ u8 unk05c[0x11c];
    /* 0x178 */ u8 panel[0x75c];
    /* 0x8d4 */ u8 sprite[0x8c];
    /* 0x960 */ u8 timer[1];
} Screen0039bc28;

void FUN_00233240(u8 *panel, s32 value);
void uiSpriteSetImageKeyframe(u8 *sprite, s32 keyframe, s32 flag);
void timerStart(u8 *timer, s32 a, s32 b);
void FUN_0039c3fc(Screen0039bc28 *screen);

/* Screen step: step 0 sets up its panel, sprite and timer and moves to step 1; step 1 updates until flag 8 is set, then moves to step 2. */
void screenStep(Screen0039bc28 *screen)
{
    u32 next;

    if (screen->step == 0) {
        screen->unk05b = 0;
        screen->flags |= 0x1008;
        FUN_00233240(screen->panel, 0);
        FUN_00233240(screen->panel, 1);
        uiSpriteSetImageKeyframe(screen->sprite, 1, 0);
        timerStart(screen->timer, 1, 0);
        next = 1;
    } else {
        if (screen->step != 1) {
            return;
        }
        FUN_0039c3fc(screen);
        if ((screen->flags & 8) != 0) {
            return;
        }
        next = 2;
    }
    screen->step = next;
}

} /* extern "C" */
