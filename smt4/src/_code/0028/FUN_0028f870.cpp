/* NON_MATCHING: armcc builds the "held" sprite ids with ldrne instead of retail orrne x,x,x asr 9, and hoists the render-state constants (3/0) differently; rest identical */
#include "common.h"

extern "C" {

/* The three scroll-arrow touch regions of the camp screen. */
struct CampTouchRegions {
    /* 0x000 */ u8 unk000[0xE02];
    /* 0xE02 */ s16 thumbRegion;
    /* 0xE04 */ s16 previousRegion;
    /* 0xE06 */ s16 nextRegion;
};

/* The title scene's render-state stack: the top entry is set, and the flush callback runs when it changed. */
struct RenderStateStack {
    /* 0x00 */ s32 top;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ s32 states[4];
    /* 0x18 */ u8 dirty;
    /* 0x19 */ u8 unk19[3];
    /* 0x1C */ void (*flush)(void);
};
struct TitleSceneWork {
    /* 0x0000 */ u8 unk0000[0x130C];
    /* 0x130C */ RenderStateStack renderStates;
};

/* A sprite entry of an image bank: where it sits and the pair of values in its cell. */
struct BankSprite {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
    /* 0x0C */ s16 *cell;
};

extern CampTouchRegions *g_camp;      /* 0x43da90 */
extern TitleSceneWork *g_titleScene;  /* 0x44ea00 */

s32 ifTouchGetSelectionModeForRegion(s32 region);
s32 FUN_0029ee54(u32 list);
s32 FUN_0029d644(u32 list);
s32 FUN_0029efc0(u32 list);
void FUN_002bf288(s32 a, s32 bank, s32 sprite, s32 x, s32 y, s32 b);
BankSprite *FUN_002bf4f8(s32 bank, s32 sprite);
void FUN_0029a17c(s32 x, s32 y, s32 width, s32 height, s32 flag);
s32 __aeabi_idivmod(s32 numerator, s32 denominator);

static inline void setRenderState(TitleSceneWork *scene, s32 state)
{
    RenderStateStack *stack = &scene->renderStates;
    s32 previous = stack->states[stack->top];
    stack->states[stack->top] = state;
    if (stack->dirty != 0 || previous != state) {
        stack->flush();
        stack->dirty = 0;
    }
}

/* Draws the scroll bar of a camp list: arrows, track and the thumb scaled to the visible share. */
void FUN_0028f870(u32 list, s32 x, s32 y, s32 wide)
{
    CampTouchRegions *camp = g_camp;
    s32 previousHeld = ifTouchGetSelectionModeForRegion(camp->previousRegion);
    s32 nextHeld = ifTouchGetSelectionModeForRegion(camp->nextRegion);
    s32 thumbHeld = ifTouchGetSelectionModeForRegion(camp->thumbRegion);
    u32 previousSprite;
    u32 nextSprite;
    if (wide != 0) {
        if (FUN_0029ee54(list) <= 11) {
            return;
        }
        FUN_002bf288(2, 0x1d, 0x41c, x, y, 0x6f);
        nextSprite = 0x419;
        previousSprite = 0x418;
        if (previousHeld != 0) {
            previousSprite = 0x41a;
        }
        if (nextHeld != 0) {
            nextSprite = 0x41b;
        }
    } else {
        if (FUN_0029ee54(list) <= 9) {
            return;
        }
        FUN_002bf288(2, 0x1d, 0x423, x, y, 0x6f);
        previousSprite = 0x41f;
        nextSprite = 0x420;
        if (previousHeld != 0) {
            previousSprite = 0x421;
        }
        if (nextHeld != 0) {
            nextSprite = 0x422;
        }
    }
    FUN_002bf288(2, 0x1d, previousSprite, x, y, 0x6f);
    FUN_002bf288(2, 0x1d, nextSprite, x, y, 0x6f);
    BankSprite *track;
    if (wide != 0) {
        track = FUN_002bf4f8(0x1d, 0x41d);
    } else {
        track = FUN_002bf4f8(0x1d, 0x424);
    }
    s32 thumbHeight = __aeabi_idivmod(track->cell[1] << 12, FUN_0029ee54(list)) * FUN_0029d644(list) >> 12;
    if (thumbHeight < 1) {
        thumbHeight = 1;
    }
    s32 thumbOffset = __aeabi_idivmod(track->cell[1] << 12, FUN_0029ee54(list)) * FUN_0029efc0(list) >> 12;
    setRenderState(g_titleScene, 3);
    FUN_0029a17c(x + track->x, track->y + y + thumbOffset, track->cell[0], thumbHeight, 1);
    u32 thumbSprite;
    if (wide != 0) {
        thumbSprite = 0x41d;
        if (thumbHeld != 0) {
            thumbSprite = 0x41e;
        }
    } else {
        thumbSprite = 0x424;
        if (thumbHeld != 0) {
            thumbSprite = 0x425;
        }
    }
    FUN_002bf288(2, 0x1d, thumbSprite, x, y, 0x74);
    setRenderState(g_titleScene, 0);
}

} /* extern "C" */
