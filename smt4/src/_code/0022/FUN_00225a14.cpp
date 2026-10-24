/* NON_MATCHING: retail zero-fills the diagonal scale matrix with integer stores (no vpush of a float zero), tests bone flag 0x200 with and+lsrs and keeps a smaller frame; this source gets vpush {d8}, tst and a larger frame. */
#include "common.h"
#include "shard/S1NwGfx.h"
#include "shard/W5_W5Match2_MatrixScale.h"
#include "nw/math/MTX34.h"
#include <math.h>

using nw::math::MTX34;

/* A skeleton's bone tables; the virtual slots hand out the tables the loop walks. */
struct BoneEntry {
    u8 unk00[0x3C];
    u32 flags; /* 0x3C */
};
struct BoneTable { u32 unk00; BoneEntry *entries; }; /* entries 0x40 bytes each */
struct MatrixTable { u32 unk00; MTX34 *matrices; };
struct MatrixRange { u32 unk00; MTX34 *begin; MTX34 *end; };

/* Per-bone data reached through the skeleton resource's relative tables. */
struct BoneInfo {
    u8 unk00[4];
    u32 flags;       /* 0x04 */
    u8 unk08[0x9C];
    MTX34 inverse;   /* 0xA4 */
    u8 kind;         /* 0xD4 */
};
struct BoneInfoList { u8 unk00[0x28]; RelativePointer infos[1]; }; /* stride 0x10 */
struct SkeletonRes {
    u8 unk00[0x1C];
    RelativePointer list; /* 0x1C */
};

struct SkeletonView {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual BoneTable *localBones();
    virtual void slot4();
    virtual BoneTable *worldBones();
    virtual void slot6();
    virtual MatrixRange *matrixRange();
    virtual void slot8();
    virtual MatrixTable *skinMatrices();
    u32 unk04;
    SkeletonRes *resource; /* 0x08 */
};

/* The skeleton-update context: three vector components come from its scale rows. */
struct SkeletonContext {
    u8 unk00[0x98];
    f32 scaleX;
    u8 unk9C[0xC];
    f32 scaleY;
    u8 unkAC[0xC];
    f32 scaleZ;
    u8 unkBC[0x8C];
    u8 unk148[0x30];
    u8 unk178[0x30];
};

extern "C" {
int nn_math_ARMv6_MTX33MultAsm_nn_math_MTX34(MTX34 *, MTX34 *, MTX34 *);
int nn_math_ARMv6_MTX34MultAsm(MTX34 *, MTX34 *, MTX34 *);
void matrixScaleColumns(ScaleMatrix *result, const ScaleMatrix *matrix, const ScaleVector *scale);
void FUN_003e2044(u32 arg, MTX34 *matrix, void *a, void *b, f32 *scale, BoneEntry *out, BoneEntry *bone, u32 kind);

/* Rebuild the world matrices of every bone: pose it, then remove the pose's scale and
 * apply the inverse bind pose when the bone has one. */
void FUN_00225a14(u32 arg, SkeletonView *skeleton, u32 arg2, SkeletonContext *ctx)
{
    SkeletonRes *resource = skeleton->resource;
    BoneTable *local = skeleton->localBones();
    BoneTable *world = skeleton->worldBones();
    f32 scale[3] = { ctx->scaleX, ctx->scaleY, ctx->scaleZ };
    MatrixRange *range = skeleton->matrixRange();
    u32 index = 0;
    for (MTX34 *matrix = range->begin; matrix != (MTX34 *)range->end; ++matrix, ++index) {
        BoneEntry *bone = (BoneEntry *)((u8 *)local->entries + index * 0x40);
        if ((bone->flags & 0x1001) == 0)
            continue;
        BoneInfoList *list = (BoneInfoList *)resource->list.get();
        BoneInfo *info = list ? (BoneInfo *)list->infos[index * 4].get() : NULL;
        if (info->kind != 0) {
            BoneEntry *out = (BoneEntry *)((u8 *)world->entries + index * 0x40);
            FUN_003e2044(arg2, matrix, (u8 *)ctx + 0x148, (u8 *)ctx + 0x178, scale, out, bone, info->kind);
            if ((out->flags & 0x200) == 0) {
                ScaleMatrix scaled;
                matrixScaleColumns(&scaled, (ScaleMatrix *)out, (ScaleVector *)((u8 *)bone + 0x30));
                const f32 (*m)[4] = scaled.values;
                f32 lengthX = sqrtf(m[0][0] * m[0][0] + m[1][0] * m[1][0] + m[2][0] * m[2][0]);
                f32 lengthY = sqrtf(m[0][1] * m[0][1] + m[1][1] * m[1][1] + m[2][1] * m[2][1]);
                f32 lengthZ = sqrtf(m[0][2] * m[0][2] + m[1][2] * m[1][2] + m[2][2] * m[2][2]);
                MTX34 diag(lengthX, 0, 0, 0, 0, lengthY, 0, 0, 0, 0, lengthZ, 0);
                nn_math_ARMv6_MTX33MultAsm_nn_math_MTX34(matrix, matrix, &diag);
            }
        }
        if ((~info->flags & 0x240) == 0)
            nn_math_ARMv6_MTX34MultAsm(&skeleton->skinMatrices()->matrices[index], matrix, &info->inverse);
    }
}
}
