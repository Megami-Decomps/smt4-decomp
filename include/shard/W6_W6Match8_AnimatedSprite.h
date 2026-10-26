#ifndef SHARD_W6_W6MATCH8_ANIMATED_SPRITE_H
#define SHARD_W6_W6MATCH8_ANIMATED_SPRITE_H

#include "common.h"
#include <stddef.h>

struct UiAnimatedSprite {
    u8 unk00[0x5e];
    s16 frame;
    union {
        u8 unk60[0x2a];
        struct {
            u8 unk60[0x26];
            u8 channels[4]; // 0x86..0x89: the four completion channels
        } completion;
    };
    s8 finished; // 0x8a
    u8 unk8b;
};

/* The sprite's completion byte (+0x8A): a real one-instruction function that armlink inlines. */
extern "C" s8 uiSpriteGetCompletionState(const UiAnimatedSprite *sprite);

static __inline bool uiAnimatedSpriteIsFinished(const UiAnimatedSprite *sprite)
{
    return uiSpriteGetCompletionState(sprite) != 0;
}

struct SpriteAnimationCommand {
    /* 0x00 */ s32 positionKey;
    /* 0x04 */ s8 positionMode;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ s32 sequence;
    /* 0x0C */ s32 frameKey;
    /* 0x10 */ s8 frameMode;
    /* 0x11 */ u8 unk11[3];
    /* 0x14 */ s32 colorKey;
    /* 0x18 */ s8 colorMode;
    /* 0x19 */ u8 unk19[3];
};
struct SpriteValueKey {
    /* 0x00 */ u32 first;
    /* 0x04 */ u32 second;
    /* 0x08 */ u32 unk08;
};
struct SpriteSequenceEntry {
    /* 0x00 */ s16 value;
    /* 0x02 */ u16 duration;
};
struct SpriteAnimationResource {
    /* 0x00 */ u8 unk00[6];
    /* 0x06 */ u16 sequenceBytes;
    /* 0x08 */ u16 commandBytes;
    /* 0x0A */ u8 unk0a[0xE];
    /* 0x18 */ SpriteSequenceEntry *sequence;
    /* 0x1C */ SpriteAnimationCommand *commands;
};
struct SpritePlaybackView {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ s32 sequenceValue;
    /* 0x08 */ u32 sequenceSentinel;
    union {
        /* 0x0C */ u8 unk0c[0x14];
        struct {
            /* 0x0C */ s32 displacement;
            /* 0x10 */ u8 unk10[0x10];
        } transition;
        struct {
            /* 0x0C */ u8 unk0C[4];
            /* 0x10 */ s32 displacement;
        } verticalTransition;
    };
    union {
        /* 0x20 */ u32 frameValue;
        /* 0x20 */ f32 alpha;
    };
    /* 0x24 */ u32 colors[3];
    /* 0x30 */ u8 unk30[0x18];
    /* 0x48 */ SpriteAnimationResource *resource;
    /* 0x4C */ void *positionKeys;
    /* 0x50 */ s16 positionKey;
    /* 0x52 */ u16 positionFrame;
    /* 0x54 */ s8 positionMode;
    /* 0x55 */ u8 unk55[3];
    /* 0x58 */ SpriteValueKey *frameKeys;
    /* 0x5C */ s16 frameKey;
    /* 0x5E */ u16 frameFrame;
    /* 0x60 */ s8 frameMode;
    /* 0x61 */ u8 unk61[3];
    /* 0x64 */ SpriteValueKey *colorKeys;
    /* 0x68 */ s16 colorKey;
    /* 0x6A */ u16 colorFrame;
    /* 0x6C */ s8 colorMode;
    /* 0x6D */ u8 unk6d[3];
    /* 0x70 */ SpriteSequenceEntry *sequence;
    /* 0x74 */ u16 sequenceFrame;
    /* 0x76 */ u16 sequenceCount;
    /* 0x78 */ const SpriteAnimationCommand *animation;
    /* 0x7C */ u16 animationFrame;
    /* 0x7E */ u16 animationLoop;
    /* 0x80 */ u16 animationTime;
    /* 0x82 */ u16 animationStep;
    /* 0x84 */ u8 running;
    union {
        /* 0x85 */ u8 unk85;
        /* 0x85 */ u8 active;
    };
    /* 0x86 */ u8 completed[4];
    /* 0x8A */ u8 finished;
    /* 0x8B */ u8 unk8b;
};
typedef char SpriteAnimationCommandSizeCheck[sizeof(SpriteAnimationCommand) == 0x1C ? 1 : -1];
typedef char SpritePlaybackViewSizeCheck[sizeof(SpritePlaybackView) == 0x8C ? 1 : -1];
typedef char SpritePlaybackTransitionOffsetsCheck[
    offsetof(SpritePlaybackView, transition.displacement) == 0xC &&
    offsetof(SpritePlaybackView, positionFrame) == 0x52 &&
    offsetof(SpritePlaybackView, active) == 0x85 &&
    offsetof(SpritePlaybackView, completed) == 0x86 &&
    offsetof(SpritePlaybackView, finished) == 0x8A ? 1 : -1];
typedef char SpritePlaybackVerticalTransitionOffsetCheck[
    offsetof(SpritePlaybackView, verticalTransition.displacement) == 0x10 ? 1 : -1];
typedef char SpritePlaybackAlphaOffsetCheck[
    offsetof(SpritePlaybackView, alpha) == 0x20 ? 1 : -1];

struct SpriteDrawVector2 { f32 x, y; };
struct SpriteDrawVector3 { f32 x, y, z; };
struct SpriteDrawPlacementOptions { s32 filter; s32 flipY; };
struct SpriteDrawOptions { s32 filter; s32 positioned; s32 flipY; };
struct SpriteDrawOrigin {
    /* 0x00 */ u8 unk00[0xE];
    /* 0x0E */ u16 animationCount;
    /* 0x10 */ u8 unk10[2];
    /* 0x12 */ s16 x;
    /* 0x14 */ s16 top;
    /* 0x16 */ s16 bottom;
};
struct SpriteDrawOwner {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ SpriteDrawOrigin *origin;
};

typedef char SpriteDrawOptionsLayoutCheck[
    sizeof(SpriteDrawPlacementOptions) == 8 && sizeof(SpriteDrawOptions) == 12 &&
    offsetof(SpriteDrawOptions, positioned) == 4 &&
    offsetof(SpriteDrawOptions, flipY) == 8 ? 1 : -1];
typedef char SpriteDrawOriginLayoutCheck[
    sizeof(SpriteDrawOrigin) == 0x18 &&
    offsetof(SpriteDrawOrigin, animationCount) == 0xE &&
    offsetof(SpriteDrawOrigin, x) == 0x12 ? 1 : -1];

extern "C" {
void FUN_003fabfc(SpriteDrawOwner *owner, s32 index, const SpriteDrawVector3 *position,
                  u32 flags, s32 filter, f32 time, f32 scale);
void FUN_003fd140(SpriteDrawOwner *owner, s32 index, const SpriteDrawVector3 *position,
                  u32 flags, SpriteDrawOptions options, f32 time, f32 scale);
void FUN_004ff058(SpriteDrawOwner *owner, s32 key, const SpriteDrawVector3 *position,
                  u32 flags, s32 filter, f32 scale);
void FUN_003fad14(SpriteDrawOwner *owner, s32 key, const SpriteDrawVector3 *position,
                  u32 flags, s32 filter, const SpriteDrawVector2 *offset,
                  const SpriteDrawVector2 *scale, s32 flipY, f32 globalScale);
}

extern "C" void spriteDrawWithOrigin(SpriteDrawOwner *owner, s32 index,
                                      const SpriteDrawVector3 *position, u32 flags,
                                      SpriteDrawPlacementOptions options, f32 time, f32 scale);

#endif
