#ifndef UI_UISPRITESTATE_H
#define UI_UISPRITESTATE_H

#include "common.h"
#include <stddef.h>
#include "ui/UiSpriteKeyframes.h"

struct UiSpriteFrameKey {
    s16 image;
    u16 duration;
};
struct UiSpriteFrameSequenceStep {
    u8 unk00[8];
    s32 key;
    u8 unk0C[0x10];
};

struct UiSpriteSource {
    union {
        /* 0x00 */ u8 unk00[0xC];
        struct {
            u8 unk00BeforeFrameSize[6];
            /* 0x06 */ u16 frameTableBytes;
        } frameAnimation;
    };
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    union {
        /* 0x18 */ u32 unk18;
        /* 0x18 */ UiSpriteFrameKey *frameKeys;
    };
    /* 0x1C */ u32 unk1C;
};

struct UiSpriteScalarKey {
    f32 first;
    f32 last;
    u16 duration;
    u8 loop;
    u8 unk0B;
};

struct UiSpriteSequenceStep {
    u8 unk00[0xC];
    s32 key;
    s8 reverse;
    u8 unk11[0xB];
};

struct UiSpriteState {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    union {
        /* 0x0C */ u8 unk0C[0x14];
        struct {
            /* 0x0C */ u8 unk0C[4];
            /* 0x10 */ s32 horizontalOffset;
        } motion;
        struct {
            /* 0x0C */ s32 x;
            /* 0x10 */ s32 y;
        } slide;
    };
    /* 0x20 */ f32 unk20;
    /* 0x24 */ f32 unk24;
    /* 0x28 */ f32 unk28;
    /* 0x2C */ f32 unk2C;
    /* 0x30 */ u8 unk30[8];
    /* 0x38 */ u16 unk38;
    /* 0x3A */ u8 unk3A[0xE];
    /* 0x48 */ UiSpriteSource *source;
    union {
        /* 0x4C */ u32 unk4C;
        /* 0x4C */ UiSpriteKeyframe *keyframes;
    };
    /* 0x50 */ s16 animation;
    union {
        /* 0x52 */ u8 unk52[6];
        /* 0x52 */ s16 motionFrame;
        struct {
            /* 0x52 */ u16 elapsed;
            /* 0x54 */ u8 alternate;
        } keyframeTrack;
    };
    union {
        /* 0x58 */ u32 unk58;
        /* 0x58 */ UiSpriteScalarKey *verticalKeys;
    };
    /* 0x5C */ s16 mode;
    union {
        /* 0x5E */ u8 unk5E[6];
        struct {
            /* 0x5E */ s16 frame;
            /* 0x60 */ s8 reverse;
        } verticalTrack;
    };
    /* 0x64 */ u32 unk64;
    /* 0x68 */ u8 unk68[8];
    union {
        /* 0x70 */ u32 unk70;
        /* 0x70 */ UiSpriteFrameKey *frameKeys;
    };
    union {
        /* 0x74 */ u8 unk74[4];
        struct {
            /* 0x74 */ s16 key;
            /* 0x76 */ s16 elapsed;
        } frameTrack;
    };
    union {
        /* 0x78 */ u32 unk78;
        /* 0x78 */ UiSpriteSequenceStep *sequenceSteps;
        /* 0x78 */ UiSpriteFrameSequenceStep *frameSequence;
        /* 0x78 */ UiSpriteKeyframeStep *keyframeSteps;
    };
    /* 0x7C */ union {
        u8 unk7C[0xA];
        struct {
            u8 unk7C[9];
            /* 0x85 */ s8 active;
        } visibility;
        struct {
            u8 unk7C[2];
            /* 0x7E */ s16 step;
            u8 unk80[4];
            /* 0x84 */ u8 enabled;
        } sequence;
        struct {
            u8 unk7CBeforeFrameStep[6];
            /* 0x82 */ s16 step;
            /* 0x84 */ u8 enabled;
        } frameSequenceState;
        struct {
            /* 0x7C */ s16 step;
            u8 unk7E[6];
            /* 0x84 */ u8 enabled;
        } keyframeSequence;
    };
    /* 0x86 */ union {
        u8 unk86[5];
        struct {
            u8 unk86[4];
            /* 0x8A */ s8 completed;
        } animationFlags;
        struct {
            /* 0x86 */ u8 horizontal;
            /* 0x87 */ u8 vertical;
            /* 0x88 */ u8 scale;
            /* 0x89 */ u8 opacity;
            /* 0x8A */ u8 complete;
        } completion;
        struct {
            u8 unk86BeforeFrameCompleted[3];
            /* 0x89 */ u8 completed;
        } frameFlags;
    };
    /* 0x8B */ u8 unk8B;
};

typedef char UiSpriteStateSizeCheck[sizeof(UiSpriteState) == 0x8C ? 1 : -1];
typedef char UiSpriteStateOffsetsCheck[offsetof(UiSpriteState, source) == 0x48 && offsetof(UiSpriteState, animation) == 0x50 && offsetof(UiSpriteState, mode) == 0x5C && offsetof(UiSpriteState, unk86) == 0x86 ? 1 : -1];
typedef char UiSpriteStateActiveOffsetCheck[offsetof(UiSpriteState, visibility.active) == 0x85 ? 1 : -1];
typedef char UiSpriteStateCompletionOffsetCheck[offsetof(UiSpriteState, animationFlags.completed) == 0x8A ? 1 : -1];
typedef char UiSpriteMotionOffsetsCheck[
    offsetof(UiSpriteState, motion.horizontalOffset) == 0x10 &&
    offsetof(UiSpriteState, motionFrame) == 0x52 &&
    offsetof(UiSpriteState, completion.horizontal) == 0x86 &&
    offsetof(UiSpriteState, completion.opacity) == 0x89 &&
    sizeof(UiSpriteState) == 0x8C ? 1 : -1];
typedef char UiSpriteSlideOffsetsCheck[
    offsetof(UiSpriteState, slide.x) == 0xC &&
    offsetof(UiSpriteState, slide.y) == 0x10 &&
    sizeof(UiSpriteState) == 0x8C ? 1 : -1];
typedef char UiSpriteVerticalTrackOffsetsCheck[
    offsetof(UiSpriteState, verticalKeys) == 0x58 &&
    offsetof(UiSpriteState, verticalTrack.frame) == 0x5E &&
    offsetof(UiSpriteState, verticalTrack.reverse) == 0x60 &&
    offsetof(UiSpriteState, sequenceSteps) == 0x78 &&
    offsetof(UiSpriteState, sequence.step) == 0x7E &&
    offsetof(UiSpriteState, sequence.enabled) == 0x84 &&
    sizeof(UiSpriteScalarKey) == 0xC && sizeof(UiSpriteSequenceStep) == 0x1C &&
    sizeof(UiSpriteState) == 0x8C ? 1 : -1];
typedef char UiSpriteFrameTrackOffsetsCheck[
    offsetof(UiSpriteSource, frameAnimation.frameTableBytes) == 6 &&
    offsetof(UiSpriteSource, frameKeys) == 0x18 &&
    offsetof(UiSpriteState, frameKeys) == 0x70 &&
    offsetof(UiSpriteState, frameTrack.key) == 0x74 &&
    offsetof(UiSpriteState, frameTrack.elapsed) == 0x76 &&
    offsetof(UiSpriteState, frameSequence) == 0x78 &&
    offsetof(UiSpriteState, frameSequenceState.step) == 0x82 &&
    offsetof(UiSpriteState, frameSequenceState.enabled) == 0x84 &&
    offsetof(UiSpriteState, frameFlags.completed) == 0x89 &&
    sizeof(UiSpriteFrameKey) == 4 && sizeof(UiSpriteFrameSequenceStep) == 0x1C &&
    offsetof(UiSpriteFrameSequenceStep, key) == 8 &&
    sizeof(UiSpriteSource) == 0x20 && sizeof(UiSpriteState) == 0x8C ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif
/* Canonical declaration (matches the definition). */
void uiSpriteSelectAnim(void *sprite, s32 group);
#ifdef __cplusplus
}
#endif

#endif
