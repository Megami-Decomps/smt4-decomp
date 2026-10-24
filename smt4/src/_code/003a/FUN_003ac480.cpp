/* NON_MATCHING: retail hoists the constant 0 to the function entry (r7) next to 1/2/3/4; built hoists it only in front of the second switch (one instruction shorter at the first switch) */
#include "common.h"

/* An image key and the handle (low half) of the image loaded for it. */
struct ImageRef {
    /* 0x00 */ s32 key;
    union {
        /* 0x04 */ s32 raw;
        /* 0x04 */ s16 id;
    };
};

/* The countdown's image panel: shows an image, fades it out and swaps in the next one. */
struct ImagePanel {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ ImageRef shown;    /* the image on screen (id negative: none) */
    /* 0x00C */ ImageRef request;   /* the requested image */
    /* 0x014 */ ImageRef loading;   /* the image being loaded */
    /* 0x01C */ u8 stateCopy;
    /* 0x01D */ u8 inAnimation;     /* animation step reported by the in sprite */
    /* 0x01E */ u8 swapState;
    /* 0x01F */ u8 outAnimation;
    /* 0x020 */ u8 unk020[0x20];
    /* 0x040 */ u8 introSprite[0x8C];
    /* 0x0CC */ u8 fadeSprite[0x8C];
    /* 0x158 */ u8 outroSprite[0x8C];
    /* 0x1E4 */ u8 swapSprite[0x8C];
    /* 0x270 */ s16 rampA;
    /* 0x272 */ s16 rampB;
    /* 0x274 */ u8 unk274[0x1FC];
    /* 0x470 */ u8 state;
};

struct CountdownGlobals {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ ImagePanel *panel;
};

extern "C" {
extern CountdownGlobals g_countdown;
s32 FUN_00293f10(s32 image, s32 arg);
s32 FUN_002942c4(s32 image, s32 arg);
s32 FUN_002958f8(s32 image, s32 arg);
s32 asdTMTexTableNodeIsLoaded(u32 type, s32 index);
void uiSpriteSetImageKeyframe(void *sprite, s32 keyframe, ...);
s32 FUN_002bf818(void *sprite);

/* Steps the countdown panel's state machine (intro, idle, outro) and its image swap sub-machine. */
u32 FUN_003ac480(void)
{
    ImagePanel *panel = g_countdown.panel;
    panel->stateCopy = panel->state;
    switch (panel->state) {
    case 0:
        panel->state = 2;
        break;
    case 2: {
        s32 i = 0;
        do {
            if (asdTMTexTableNodeIsLoaded(0x22, i) == 0)
                goto swap;
            i++;
        } while (i < 2);
        s32 image = panel->shown.id;
        if (image >= 0 && FUN_00293f10(image, 1) != 0)
            panel->state = 1;
        break;
    }
    case 1:
        if (panel->inAnimation == 4)
            panel->state = 4;
        break;
    case 4:
        if (panel->rampA < 8)
            panel->rampA++;
        if (panel->rampB < 8)
            panel->rampB++;
        if (FUN_002bf818(panel->introSprite) != 0) {
            panel->state = 3;
            panel->swapState = 3;
            panel->rampA = 8;
            panel->rampB = 8;
        }
        break;
    case 3:
        if (panel->inAnimation == 5)
            panel->state = 5;
        break;
    case 5:
        if (FUN_002bf818(panel->outroSprite) != 0)
            panel->state = 6;
        break;
    }
swap:
    switch (panel->swapState) {
    case 0:
        break;
    case 3:
        if (panel->outAnimation != 4)
            return 0;
        panel->swapState = 4;
        uiSpriteSetImageKeyframe(panel->fadeSprite, 0, 0);
        uiSpriteSetImageKeyframe(panel->swapSprite, 1, 0);
        panel->loading = panel->request;
        if (panel->loading.id >= 0)
            FUN_002942c4(panel->loading.id, 1);
        panel->outAnimation = 0;
        break;
    case 4:
        if (FUN_002bf818(panel->swapSprite) != 0) {
            if (panel->shown.key != panel->loading.key && panel->shown.id >= 0)
                FUN_002958f8(panel->shown.id, 1);
            panel->shown.key = 0;
            panel->swapState = 1;
        }
        break;
    case 1: {
        s32 image = panel->loading.id;
        if (image < 0)
            return 0;
        if (FUN_00293f10(image, 1) == 0)
            return 0;
        if (panel->loading.key == panel->request.key) {
            panel->shown = panel->loading;
            panel->swapState = 2;
            return 0;
        }
        if (panel->loading.id >= 0)
            FUN_002958f8(panel->loading.id, 1);
        panel->loading = panel->request;
        if (panel->loading.id >= 0)
            FUN_002942c4(panel->loading.id, 1);
        panel->outAnimation = 0;
        break;
    }
    case 2:
        if (FUN_002bf818(panel->fadeSprite) != 0)
            panel->swapState = 3;
        break;
    }
    return 0;
}

} /* extern "C" */
