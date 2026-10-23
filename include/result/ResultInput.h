#ifndef RESULT_RESULT_INPUT_H
#define RESULT_RESULT_INPUT_H

#include "common.h"
#include <stddef.h>

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
    };
    /* 0x00AC */ ResultInputPosition menuPosition;
    /* 0x00B4 */ u8 unk00B4[0x458];
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
    };
    /* 0x352C */ s32 state;
};

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
    offsetof(ResultInputWork, rewardAnimation.effectSpeed) == 0x52C &&
    offsetof(ResultInputWork, detailAnimation.effectSpeed) == 0x5B8 &&
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
