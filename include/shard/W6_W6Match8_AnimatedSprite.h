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

/* A 2D vector with nw::math::VEC2's constructors (an empty default one and one taking both components). */
struct SpriteDrawVector2 {
    f32 x, y;
    SpriteDrawVector2() {}
    SpriteDrawVector2(f32 fx, f32 fy) : x(fx), y(fy) {}
};
struct SpriteDrawVector3 { f32 x, y, z; };
struct SpriteDrawOrigin {
    /* 0x00 */ u8 unk00[6];
    /* 0x06 */ u16 partGroupCount;
    /* 0x08 */ u8 unk08[6];
    /* 0x0E */ u16 animationCount;
    /* 0x10 */ u8 unk10[2];
    /* 0x12 */ s16 x;
    /* 0x14 */ s16 top;
    /* 0x16 */ s16 bottom;
};
/* A texture cell the parts draw from (0x20 bytes). */
struct SpriteDrawCell {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ struct AsdTexture *texture;
    /* 0x1C */ u8 unk1C[4];
};
/* One part of a part group (0x28 bytes). */
struct SpriteDrawPart {
    /* 0x00 */ f32 rect[4];
    /* 0x10 */ f32 texCoords[4];
    /* 0x20 */ u16 rotation;
    /* 0x22 */ u8 opacity;   /* percent of the colour's alpha */
    /* 0x23 */ u8 depth;     /* halved and taken from 100 percent */
    /* 0x24 */ u8 cell;
    /* 0x25 */ u8 layer;     /* 0 or 1: the parts the draw filters 1 and 2 keep */
    /* 0x26 */ u8 blend;     /* 0-3: the blend preset */
    /* 0x27 */ u8 flip;      /* bit 0 horizontal, bit 1 vertical */
};
/* The first part and the part count of one part group. */
struct SpriteDrawRange {
    /* 0x00 */ u16 first;
    /* 0x02 */ u16 count;
};
struct SpriteDrawOwner {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ SpriteDrawOrigin *origin;
    /* 0x14 */ SpriteDrawCell *cells;
    /* 0x18 */ SpriteDrawPart *parts;
    /* 0x1C */ SpriteDrawRange *partGroups;
};

typedef char SpriteDrawPartLayoutCheck[
    sizeof(SpriteDrawPart) == 0x28 && sizeof(SpriteDrawCell) == 0x20 &&
    offsetof(SpriteDrawOwner, partGroups) == 0x1C ? 1 : -1];
typedef char SpriteDrawOriginLayoutCheck[
    offsetof(SpriteDrawOrigin, partGroupCount) == 0x6 &&
    sizeof(SpriteDrawOrigin) == 0x18 &&
    offsetof(SpriteDrawOrigin, animationCount) == 0xE &&
    offsetof(SpriteDrawOrigin, x) == 0x12 ? 1 : -1];

extern "C" {
void spriteDrawAnimationUnplaced(SpriteDrawOwner *owner, s32 index, const SpriteDrawVector3 *position,
                  u32 flags, s32 filter, f32 time, f32 scale);
void spriteAnimationPlayAtTime(SpriteDrawOwner *owner, s32 index, const SpriteDrawVector3 *position,
                  u32 flags, s32 filter, s32 positioned, s32 flipY, f32 time, f32 scale);
void spriteDrawPartGroup(SpriteDrawOwner *owner, s32 key, const SpriteDrawVector3 *position,
                  u32 flags, s32 filter, f32 scale);
void spriteDrawPartGroup(SpriteDrawOwner *owner, s32 key, const SpriteDrawVector3 *position,
                  u32 flags, s32 filter, f32 scale);
void FUN_003fad14(SpriteDrawOwner *owner, s32 key, const SpriteDrawVector3 *position,
                  u32 flags, s32 filter, const SpriteDrawVector2 *offset,
                  const SpriteDrawVector2 *scale, s32 flipY, f32 globalScale);
}

extern "C" void spriteDrawWithOrigin(SpriteDrawOwner *owner, s32 index,
                                      const SpriteDrawVector3 *position, u32 flags,
                                      s32 filter, s32 flipY, f32 time, f32 scale);

#endif
