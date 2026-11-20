#ifndef SHARD_W6_W6MATCH8_ANIMATED_SPRITE_H
#define SHARD_W6_W6MATCH8_ANIMATED_SPRITE_H

#include "common.h"
#include <stddef.h>
#include "ui/UiSpriteApi.h"

/* Whether the sprite's tracks are all done. */
static __inline bool uiAnimatedSpriteIsFinished(const UiSpriteState *sprite)
{
    return uiSpriteGetCompletionState(sprite) != 0;
}

struct SpriteDrawVector2 { f32 x, y; };
struct SpriteDrawVector3 { f32 x, y, z; };
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

typedef char SpriteDrawOriginLayoutCheck[
    sizeof(SpriteDrawOrigin) == 0x18 &&
    offsetof(SpriteDrawOrigin, animationCount) == 0xE &&
    offsetof(SpriteDrawOrigin, x) == 0x12 ? 1 : -1];

extern "C" {
void spriteDrawAnimationUnplaced(SpriteDrawOwner *owner, s32 index, const SpriteDrawVector3 *position,
                  u32 flags, s32 filter, f32 time, f32 scale);
void spriteAnimationPlayAtTime(SpriteDrawOwner *owner, s32 index, const SpriteDrawVector3 *position,
                  u32 flags, s32 filter, s32 positioned, s32 flipY, f32 time, f32 scale);
void FUN_004ff058(SpriteDrawOwner *owner, s32 key, const SpriteDrawVector3 *position,
                  u32 flags, s32 filter, f32 scale);
void FUN_003fad14(SpriteDrawOwner *owner, s32 key, const SpriteDrawVector3 *position,
                  u32 flags, s32 filter, const SpriteDrawVector2 *offset,
                  const SpriteDrawVector2 *scale, s32 flipY, f32 globalScale);
}

extern "C" void spriteDrawWithOrigin(SpriteDrawOwner *owner, s32 index,
                                      const SpriteDrawVector3 *position, u32 flags,
                                      s32 filter, s32 flipY, f32 time, f32 scale);

#endif
