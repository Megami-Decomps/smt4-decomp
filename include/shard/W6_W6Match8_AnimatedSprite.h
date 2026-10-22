#ifndef SHARD_W6_W6MATCH8_ANIMATED_SPRITE_H
#define SHARD_W6_W6MATCH8_ANIMATED_SPRITE_H

#include "common.h"

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

static __inline bool uiAnimatedSpriteIsFinished(const UiAnimatedSprite *sprite)
{
    return sprite->finished != 0;
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
    /* 0x08 */ u8 unk08[0x10];
    /* 0x18 */ SpriteSequenceEntry *sequence;
};
struct SpritePlaybackView {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ s32 sequenceValue;
    /* 0x08 */ u32 sequenceSentinel;
    /* 0x0C */ u8 unk0c[0x14];
    /* 0x20 */ u32 frameValue;
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
    /* 0x85 */ u8 unk85;
    /* 0x86 */ u8 completed[4];
    /* 0x8A */ u8 finished;
    /* 0x8B */ u8 unk8b;
};
typedef char SpriteAnimationCommandSizeCheck[sizeof(SpriteAnimationCommand) == 0x1C ? 1 : -1];
typedef char SpritePlaybackViewSizeCheck[sizeof(SpritePlaybackView) == 0x8C ? 1 : -1];

/* Its integer view makes this value use the core-register/stack aggregate ABI. */
union SpriteDrawVector2 {
    struct { f32 x, y; } values;
    u32 bits[2];
};
struct SpriteDrawVector3 { f32 x, y, z; };
struct SpriteDrawDimensions { f32 width; s32 mode; f32 height; };
struct SpriteDrawOrigin {
    /* 0x00 */ u8 unk00[0x12];
    /* 0x12 */ s16 x;
    /* 0x14 */ s16 top;
    /* 0x16 */ s16 bottom;
};
struct SpriteDrawOwner {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ SpriteDrawOrigin *origin;
};

#endif
