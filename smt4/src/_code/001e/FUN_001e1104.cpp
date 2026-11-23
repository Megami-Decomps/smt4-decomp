#include "ui/UiSpriteApi.h"
#include "common.h"
#include "sys/RuntimeObjects.h"

extern "C" {

/* The battle opening panel (Apocalypse's BtlUiObjBA): its animation objects, known through their setter functions. */
typedef struct Panel {
    /* 0x000 */ u8 unk000[0x20];
    /* 0x020 */ UiSpriteState animA;
    /* 0x0AC */ UiSpriteState animB;
    /* 0x138 */ UiSpriteState animC;
    /* 0x1C4 */ UiSpriteState timer;
    /* 0x250 */ s32 phase;
    /* 0x254 */ s32 step;
    /* 0x258 */ s32 style;
    /* 0x25C */ u8 flagA;
    /* 0x25D */ u8 flagB;
    /* 0x25E */ u8 active;
} Panel;

/* Starts the panel's animations for style 0 or 1 and resets its phase. */
void FUN_001e1104(Panel *panel, s32 style, u8 flagB, u8 flagA)
{
    panel->style = style;
    panel->active = 1;
    panel->flagA = flagA;
    panel->flagB = flagB;
    if (panel->style == 0) {
        pairSetFirstResetSecond(&panel->animA, 41);
        spriteStartAnimationByIndex(&panel->animA, 0);
        pairSetSecondResetFirst(&panel->animC, 2);
        spriteStartAnimationByIndex(&panel->animC, 2);
        pairSetSecondResetFirst(&panel->animB, 0);
        spriteStartAnimationByIndex(&panel->animB, 1);
        pairSetFirstResetSecond(&panel->timer, 9);
        uiSpriteSetKeyframe(&panel->timer, 2, 0);
    } else if (panel->style == 1) {
        pairSetFirstResetSecond(&panel->animA, 42);
        spriteStartAnimationByIndex(&panel->animA, 0);
        pairSetSecondResetFirst(&panel->animC, 3);
        spriteStartAnimationByIndex(&panel->animC, 2);
        pairSetSecondResetFirst(&panel->animB, 1);
        spriteStartAnimationByIndex(&panel->animB, 1);
        pairSetFirstResetSecond(&panel->timer, 10);
        uiSpriteSetKeyframe(&panel->timer, 2, 0);
    }
    panel->phase = 0;
    panel->step = 2;
}

} /* extern "C" */
