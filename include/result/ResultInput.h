#ifndef RESULT_RESULT_INPUT_H
#define RESULT_RESULT_INPUT_H

#include "common.h"
#include <stddef.h>
#include "ui/UiSpriteState.h"

/* Coordinate controls used by the result-screen input callback. */
struct ResultInputPosition {
    s32 x;
    s32 y;
};

struct ResultInputWork {
    union {
        /* 0x0000 */ u8 unk0000[0xAC];
        struct {
            u8 unk0000[0x18];
            void *resultScript; /* 0x18 */
            union {
                u32 unk1c;
                u32 resultHandle;
            };
            void *resultMessages; /* 0x20 */
            void *levelUpScript; /* 0x24 */
            union {
                u32 unk28;
                u32 selectedHandle;
            };
            void *demonMessages; /* 0x2c */
            union {
                u32 unk30;
                u32 messageMode;
            };
            s32 selectedId; /* 0x34 */
        } resources;
        struct {
            u8 unk00[8];
            u32 state; /* 0x08 */
            u32 phase; /* 0x0C */
            u32 nextState; /* 0x10 */
            u8 unk14[0x24];
            u16 skill; /* 0x38 */
            u8 unk3A[2];
            s32 slot; /* 0x3C */
            u8 player; /* 0x40 */
        } preparation;
        struct {
            u8 unk00[0x20];
            ResultInputPosition position; /* 0x20: origin of the upper-screen result sprites */
        } screen;
    };
    /* 0x00AC */ ResultInputPosition menuPosition;
    union {
        /* 0x00B4 */ u8 unk00B4[0x458];
        struct {
            u8 prefixB4[0x340];
            /* 0x03F4 */ UiSpriteState sprite; /* the highlighted stat row; its opacity fades the row's backdrop */
        } statHighlight;
    };
    /* 0x050C */ ResultInputPosition rewardPosition;
    union {
        /* 0x0514 */ u8 unk0514[0x84];
        struct {
            u8 prefix514[0x18];
            /* 0x052C */ f32 effectSpeed;
        } rewardAnimation;
    };
    /* 0x0598 */ ResultInputPosition detailPosition;
    union {
        /* 0x05A0 */ u8 unk05A0[0x2F8C];
        struct {
            u8 prefix5A0[0x18];
            /* 0x05B8 */ f32 effectSpeed;
        } detailAnimation;
        struct {
            u8 prefix5A0[0x19C];
            /* 0x073C */ u8 curtainSprite[0x8C]; /* the closing curtain's UI sprite */
        } curtain;
    };
    /* 0x352C */ s32 state;
};

/* The same first 0x34A0 bytes seen as what resultInitialize builds there: the sprite resource block, then the
 * screen's sprites (the position pairs above are the first words of sprites 1, 9 and 10). */
enum {
    RESULT_SPRITE_BACKGROUND = 0,
    RESULT_SPRITE_ROWS = 1,         /* 6 */
    RESULT_SPRITE_STAT_HIGHLIGHT = 7,
    RESULT_SPRITE_HEADER = 8,
    RESULT_SPRITE_REWARD = 9,
    RESULT_SPRITE_DETAIL = 10,
    RESULT_SPRITE_OVERLAY = 11,     /* 3; the third is the closing curtain */
    RESULT_SPRITE_CURTAIN = 13,
    RESULT_SPRITE_MARKERS = 14,     /* 16 */
    RESULT_SPRITE_ICONS = 30,       /* 4 rows of 7 */
    RESULT_SPRITE_ENTRIES = 58,     /* RESULT_ENTRY_COUNT */
    RESULT_SPRITE_ITEMS = 83,       /* RESULT_ITEM_SLOTS */
    RESULT_SPRITE_ITEM_COUNTS = 90, /* RESULT_ITEM_SLOTS */
    RESULT_SPRITE_COUNT = 96
};

struct ResultScreenSprites {
    /* 0x0000 */ UiResourceParameters parameters;
    /* 0x0020 */ UiSpriteState sprites[RESULT_SPRITE_COUNT];
};
typedef char ResultScreenSpritesCheck[offsetof(ResultScreenSprites, sprites) == 0x20 &&
    sizeof(UiSpriteState) == 0x8C && sizeof(ResultScreenSprites) == 0x34A0 ? 1 : -1];

/* The block as its sprite resource and sprites. A documented view, kept until ResultInputWork's own members (the
 * position pairs and unions above) are folded into this layout: one struct per object is the follow-up. */
static __inline ResultScreenSprites *resultScreenSprites(ResultInputWork *work)
{
    return (ResultScreenSprites *)work;
}

typedef char ResultInputWorkOffsets[
    offsetof(ResultInputWork, menuPosition) == 0xAC &&
    offsetof(ResultInputWork, rewardPosition) == 0x50C &&
    offsetof(ResultInputWork, detailPosition) == 0x598 &&
    offsetof(ResultInputWork, state) == 0x352C &&
    sizeof(ResultInputWork) == 0x3530 ? 1 : -1];
typedef char ResultInputResourceOffsets[
    offsetof(ResultInputWork, resources.resultScript) == 0x18 &&
    offsetof(ResultInputWork, resources.demonMessages) == 0x2c &&
    offsetof(ResultInputWork, resources.selectedId) == 0x34 ? 1 : -1];
typedef char ResultInputAnimationOffsets[
    offsetof(ResultInputWork, statHighlight.sprite) == 0x3F4 &&
    offsetof(ResultInputWork, rewardAnimation.effectSpeed) == 0x52C &&
    offsetof(ResultInputWork, detailAnimation.effectSpeed) == 0x5B8 &&
    offsetof(ResultInputWork, curtain.curtainSprite) == 0x73C &&
    offsetof(ResultInputWork, screen.position) == 0x20 &&
    sizeof(ResultInputWork) == 0x3530 ? 1 : -1];
typedef char ResultInputPreparationOffsets[
    offsetof(ResultInputWork, preparation.state) == 8 &&
    offsetof(ResultInputWork, preparation.phase) == 0xC &&
    offsetof(ResultInputWork, preparation.nextState) == 0x10 &&
    offsetof(ResultInputWork, resources.resultHandle) == 0x1C &&
    offsetof(ResultInputWork, resources.selectedHandle) == 0x28 &&
    offsetof(ResultInputWork, resources.messageMode) == 0x30 &&
    offsetof(ResultInputWork, preparation.skill) == 0x38 &&
    offsetof(ResultInputWork, preparation.slot) == 0x3C &&
    offsetof(ResultInputWork, preparation.player) == 0x40 &&
    sizeof(ResultInputWork) == 0x3530 ? 1 : -1];

#endif
