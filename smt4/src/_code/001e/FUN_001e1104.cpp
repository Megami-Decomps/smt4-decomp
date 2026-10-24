/* NON_MATCHING: scheduling only: retail stores the style word before the active byte (str [600]; strb [606]); built swaps the two stores */
#include "common.h"

extern "C" {

typedef struct Anim { u8 unk[0x8C]; } Anim;      /* animation objects, known through their setter functions */

typedef struct Panel {
    /* 0x000 */ u8 unk000[0x20];
    /* 0x020 */ Anim animA;
    /* 0x0AC */ Anim animB;
    /* 0x138 */ Anim animC;
    /* 0x1C4 */ Anim timer;
    /* 0x250 */ s32 phase;
    /* 0x254 */ s32 step;
    /* 0x258 */ s32 style;
    /* 0x25C */ u8 flagA;
    /* 0x25D */ u8 flagB;
    /* 0x25E */ u8 active;
} Panel;

extern void pairSetFirstResetSecond(void *anim, s32 value);
extern void pairSetSecondResetFirst(void *anim, s32 value);
extern void spriteStartAnimationByIndex(void *anim, s32 value);
extern void timerStart(void *timer, s32 a, s32 b);

/* Starts the panel's animations for style 0 or 1 and resets its phase. */
void FUN_001e1104(Panel *panel, s32 style, u8 flagB, u8 flagA)
{
    panel->style = style;
    panel->active = 1;
    panel->flagA = flagA;
    panel->flagB = flagB;
    if (style == 0) {
    pairSetFirstResetSecond(&panel->animA, 41);
    spriteStartAnimationByIndex(&panel->animA, 0);
    pairSetSecondResetFirst(&panel->animC, 2);
    spriteStartAnimationByIndex(&panel->animC, 2);
    pairSetSecondResetFirst(&panel->animB, 0);
    spriteStartAnimationByIndex(&panel->animB, 1);
    pairSetFirstResetSecond(&panel->timer, 9);
    timerStart(&panel->timer, 2, 0);
    } else if (style == 1) {
    pairSetFirstResetSecond(&panel->animA, 42);
    spriteStartAnimationByIndex(&panel->animA, 0);
    pairSetSecondResetFirst(&panel->animC, 3);
    spriteStartAnimationByIndex(&panel->animC, 2);
    pairSetSecondResetFirst(&panel->animB, 1);
    spriteStartAnimationByIndex(&panel->animB, 1);
    pairSetFirstResetSecond(&panel->timer, 10);
    timerStart(&panel->timer, 2, 0);
    }
    panel->phase = 0;
    panel->step = 2;
}

} /* extern "C" */
