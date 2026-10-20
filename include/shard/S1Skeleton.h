/* nw::gfx skeleton: the bone transform lookup. */
#ifndef SHARD_S1SKELETON_H
#define SHARD_S1SKELETON_H

#include "common.h"

typedef struct Mtx44Data {
    f32 m[16];
} Mtx44Data;

struct SkeletonObj;

typedef struct SkeletonVtbl {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ s32 (*hasBone)(struct SkeletonObj *skeleton, s32 bone);
} SkeletonVtbl;

/* The scene node a skeleton belongs to; its bone nodes are listed at +0x54. */
typedef struct SkeletonModel {
    /* 0x00 */ u8 unk00[0x54];
    /* 0x54 */ f32 **boneNodes;
} SkeletonModel;

/* A self-relative pointer: 0 is null, else the target is `offset` bytes from the field. */
typedef struct SkeletonRelPtr {
    /* 0x00 */ s32 offset;
} SkeletonRelPtr;

static __inline void *skeletonRelPtrGet(const SkeletonRelPtr *p)
{
    return p->offset != 0 ? (void *)((u8 *)p + p->offset) : NULL;
}

/* A track record: its kind selects how the bone matrix is built. */
typedef struct SkeletonTrack {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 kind;                /* 5, 8 or 9 */
    /* 0x0C */ SkeletonRelPtr data;     /* kind 9: matrix data */
} SkeletonTrack;

typedef struct SkeletonTrackSlot {
    /* 0x00 */ SkeletonRelPtr track;    /* relative pointer to a SkeletonTrack */
    /* 0x04 */ u8 unk04[0xC];
} SkeletonTrackSlot;

/* The track table: a header followed by one 16-byte slot per bone. */
typedef struct SkeletonTrackTable {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ SkeletonTrackSlot slots[1];
} SkeletonTrackTable;

/* An animation block: the track table is reached through a relative pointer at +0x1C. */
typedef struct SkeletonAnim {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ SkeletonRelPtr tracks;
} SkeletonAnim;

typedef struct SkeletonObj {
    /* 0x00 */ SkeletonVtbl *vtbl;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ SkeletonModel *model;
    /* 0x0C */ u8 unk0C[8];
    /* 0x14 */ s32 *boneIndex;          /* per-bone index into the palette or the track table */
    /* 0x18 */ u8 unk18[0x20];
    /* 0x38 */ f32 frame;
    /* 0x3C */ u8 unk3C[0x14];
    /* 0x50 */ u8 unk50[4];
    /* 0x54 */ SkeletonAnim *anim;
    /* 0x58 */ u8 paletteDisabled;
    /* 0x59 */ u8 unk59[3];
    /* 0x5C */ u8 unk5C[8];
    /* 0x64 */ Mtx44Data *palette;
    /* 0x68 */ Mtx44Data *paletteEnd;
} SkeletonObj;

#endif
