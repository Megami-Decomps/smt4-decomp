/* nw::gfx::TransformAnimEvaluator (the part this code uses): resolves one member's transform
 * for the current frame, either from a baked table or from its animation data. */
#ifndef SHARD_S3GFXANIM_H
#define SHARD_S3GFXANIM_H

#include "common.h"

/* 4x4 matrix, 16 words. */
typedef struct GfxTransform {
    f32 m[16];
} GfxTransform;

/* A member's static pose: translation, then the two vectors FUN_00236350 builds the matrix from. */
typedef struct GfxAnimMember {
    /* 0x00 */ f32 translation[3];
    /* 0x0C */ f32 rotation[3];
    /* 0x18 */ f32 scale[3];
} GfxAnimMember;

/* An animation record; `type` selects how it is evaluated. */
typedef struct GfxAnimEntry {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 type;
    /* 0x0C */ s32 dataOffset;   /* self-relative offset of the keyframe data, 0 for none */
} GfxAnimEntry;

#define GFX_ANIM_MEMBER_ANIM 5
#define GFX_ANIM_BAKED_ANIM 8
#define GFX_ANIM_FRAME_DATA 9

typedef struct GfxAnimModel {
    /* 0x00 */ u8 unk00[0x54];
    /* 0x54 */ GfxAnimMember **members;
} GfxAnimModel;

/* A record table: self-relative pointers to 16-byte record slots, the first one at +0x28. */
typedef struct GfxAnimData {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ s32 tableOffset;  /* self-relative offset of the record table, 0 for none */
} GfxAnimData;

/* Address a self-relative offset field points to; NULL when the offset is 0. */
static __inline void *gfxRelativePointer(s32 *field)
{
    return *field != 0 ? (u8 *)field + *field : NULL;
}

struct GfxAnimEvaluator;

typedef struct GfxAnimEvaluatorVtbl {
    /* 0x00 */ void *unk00[7];
    /* 0x1C */ s32 (*hasMember)(struct GfxAnimEvaluator *self, s32 index);
} GfxAnimEvaluatorVtbl;

typedef struct GfxAnimEvaluator {
    /* 0x00 */ const GfxAnimEvaluatorVtbl *vtbl;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ GfxAnimModel *model;
    /* 0x0C */ u8 unk0C[8];
    /* 0x14 */ s32 *recordIndex;           /* per member: its record / baked transform */
    /* 0x18 */ u8 unk18[0x20];
    /* 0x38 */ f32 frame;
    /* 0x3C */ u8 unk3C[0x18];
    /* 0x54 */ GfxAnimData *animData;
    /* 0x58 */ u8 baked;                   /* nonzero: bakedTransforms are not used */
    /* 0x59 */ u8 unk59[0x0B];
    /* 0x64 */ GfxTransform *bakedTransforms;
    /* 0x68 */ GfxTransform *bakedTransformsEnd;
} GfxAnimEvaluator;

#endif
