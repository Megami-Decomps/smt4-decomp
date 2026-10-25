/* AsdSDK/Source/Gfx/Model/AsdMdlManager.c: the part of a model object the motion selection touches. */
#ifndef ASDSDK_SOURCE_GFX_MODEL_ASDMOTIONMODEL_H
#define ASDSDK_SOURCE_GFX_MODEL_ASDMOTIONMODEL_H

#include "common.h"
#include <stddef.h>
#include "shard/S3AsdModelAttr.h"
#include "gfx/SkeletonInstanceBuffers.h"

struct AsdMotionInstance;
struct AsdMotionPool;
struct AsdTrackNode;
struct ModelBoneResource;
struct ModelBoneMatrixProvider;
struct ModelBoneAnimationTarget;

/* Runtime type record: the chain of base types ends in NULL. */
typedef struct AsdTypeInfo {
    /* 0x00 */ const struct AsdTypeInfo *base;
} AsdTypeInfo;

typedef struct AsdMotionPoolVtbl {
    /* 0x00 */ void *unk00[3];
    /* 0x0C */ void (*release)(struct AsdMotionPool *pool, struct AsdMotionInstance *instance);
} AsdMotionPoolVtbl;

typedef struct AsdMotionPool {
    /* 0x00 */ const AsdMotionPoolVtbl *vtbl;
} AsdMotionPool;

typedef struct AsdMotionInstanceVtbl {
    /* 0x00 */ void (*destroy)(struct AsdMotionInstance *instance);
    union {
        void *unk04[8];
        struct {
            void *unk04[2];
            void (*bind)(AsdMotionInstance *, ModelBoneAnimationTarget *); // 0x0C
            void *unk10[5];
        } target;
    };
    /* 0x24 */ void (*setMotion)(struct AsdMotionInstance *instance, void *motion);
} AsdMotionInstanceVtbl;

/* A playing motion (observed fields). */
typedef struct AsdMotionInstance {
    /* 0x00 */ const AsdMotionInstanceVtbl *vtbl;
    /* 0x04 */ AsdMotionPool *pool;
    /* 0x08 */ u8 unk08[0x30];
    /* 0x38 */ f32 blend;
    /* 0x3C */ f32 previousBlend;
    /* 0x40 */ u8 unk40[4];
    /* 0x44 */ f32 blendFrom;
    /* 0x48 */ f32 blendLimit;
    /* 0x4C */ f32 (*interpolate)(void *context, f32 from, f32 limit, f32 target);
    /* 0x50 */ void *interpolateContext;
    /* 0x54 */ u8 unk54[4];
    /* 0x58 */ u8 blendChanged;
} AsdMotionInstance;

typedef struct AsdTrackNodeVtbl {
    /* 0x00 */ void *unk00[2];
    /* 0x08 */ const AsdTypeInfo *(*getType)(struct AsdTrackNode *node);
} AsdTrackNodeVtbl;

/* The target of a motion hand-over: it holds the pointer to the instance it plays. */
typedef struct AsdTrackSlot {
    /* 0x00 */ AsdMotionInstance *instance;
    /* 0x04 */ u32 unk04;
} AsdTrackSlot;

typedef struct AsdTrackChannel {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ f32 value;
} AsdTrackChannel;

typedef struct AsdTrackNode {
    /* 0x00 */ const AsdTrackNodeVtbl *vtbl;
    /* 0x04 */ u8 unk04[0x10];
    /* 0x14 */ AsdTrackSlot *slot;
    /* 0x18 */ u8 unk18[0xC];
    /* 0x24 */ AsdTrackChannel *channelA;
    /* 0x28 */ u8 unk28[0xC];
    /* 0x34 */ AsdTrackChannel *channelB;
    /* 0x38 */ u8 unk38[9];
    /* 0x41 */ u8 handedOver;
} AsdTrackNode;
struct AsdTrackBlendNode : AsdTrackNode {
    /* 0x44 */ u8 unk44[4];
    /* 0x48 */ f32 blendLimit;
};

typedef struct AsdTrackList {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ AsdTrackNode **items;
    /* 0x20 */ u8 unk20[8];
    /* 0x28 */ s32 stride;

    AsdTrackNode *getItem(s32 index, s32 slot) const
    {
        return items[index * stride + slot];
    }
} AsdTrackList;

typedef struct AsdTrackOwner {
    union {
        u8 unk000[0x28];
        struct {
            u8 unk00[8];
            ModelBoneResource *resource; // 0x008
            u8 unk0c[0x1c];
        } model;
    };
    /* 0x028 */ AsdTrackList *list;
    union {
        /* 0x02C */ u8 unk02C[0x1FC];
        struct {
            /* 0x02C */ u8 unk02C[0x60];
            /* 0x08C */ SkeletonMatrix34 defaultMatrix;
        } transform;
        struct {
            /* 0x02C */ u8 unk02C[0x11C];
            /* 0x148 */ s32 active;
            /* 0x14C */ s32 index;
            union {
                u8 unk150[0xD8];
                struct {
                    u8 unk150[0xd0];
                    ModelBoneMatrixProvider *provider; // 0x220
                    u32 unk224;
                } skeleton;
            };
        } secondary;
    };
    /* 0x228 */ ModelBoneAnimationTarget *activeTarget;
    /* 0x22C */ s32 index;
} AsdTrackOwner;

/* A model object: the motion table, the playing motion, a pending replacement and the attribute records. */
typedef struct AsdMotionModel {
    /* 0x00 */ u32 flags;                /* bit 0: a pending motion should replace the playing one */
    /* 0x04 */ AsdModelFile *file;
    /* 0x08 */ u8 unk08[0x24];
    /* 0x2C */ AsdTrackOwner *owner;
    /* 0x30 */ void **motionTable;
    /* 0x34 */ s32 motionCount;
    /* 0x38 */ s32 currentMotion;
    /* 0x3C */ u8 unk3C[0x10];
    /* 0x4C */ AsdMotionInstance *active;
    /* 0x50 */ AsdMotionInstance *pending;
    union {
        /* 0x54 */ u8 unk54[0x24];
        struct {
            /* 0x54 */ void **motionTable;
            /* 0x58 */ s32 motionCount;
            /* 0x5C */ s32 currentMotion;
            /* 0x60 */ AsdMotionInstance *instance;
            /* 0x64 */ u8 unk64[0x14];
        } secondary;
    };
    /* 0x78 */ f32 speed;
    union {
        /* 0x7C */ u8 unk7C[0x18];
        struct {
            /* 0x7C */ f32 speed;
            /* 0x80 */ u8 unk80[0x14];
        } secondaryRate;
    };
    /* 0x94 */ AsdModelAttrContainers containers;
    /* 0x98 */ u8 unk98[8];
    /* 0xA0 */ AsdModelAttrRecords records;
} AsdMotionModel;

typedef char AsdMotionModelLayoutCheck[
    offsetof(AsdMotionModel, owner) == 0x2C && offsetof(AsdMotionModel, motionCount) == 0x34 &&
    offsetof(AsdMotionModel, active) == 0x4C && offsetof(AsdMotionModel, speed) == 0x78 &&
    offsetof(AsdMotionModel, containers) == 0x94 && offsetof(AsdMotionModel, records) == 0xA0 ? 1 : -1];
typedef char AsdMotionInstanceLayoutCheck[
    offsetof(AsdMotionInstance, blend) == 0x38 && offsetof(AsdMotionInstance, interpolate) == 0x4C &&
    offsetof(AsdMotionInstance, blendChanged) == 0x58 ? 1 : -1];
typedef char AsdTrackNodeLayoutCheck[
    offsetof(AsdTrackNode, slot) == 0x14 && offsetof(AsdTrackNode, channelB) == 0x34 &&
    offsetof(AsdTrackNode, handedOver) == 0x41 ? 1 : -1];
typedef char AsdSecondaryMotionLayoutCheck[
    offsetof(AsdTrackOwner, secondary.active) == 0x148 &&
    offsetof(AsdTrackOwner, secondary.index) == 0x14c && sizeof(AsdTrackOwner) == 0x230 &&
    offsetof(AsdMotionModel, secondary.motionTable) == 0x54 &&
    offsetof(AsdMotionModel, secondary.motionCount) == 0x58 &&
    offsetof(AsdMotionModel, secondary.currentMotion) == 0x5c &&
    offsetof(AsdMotionModel, secondary.instance) == 0x60 &&
    offsetof(AsdMotionModel, secondaryRate.speed) == 0x7c &&
    sizeof(AsdTrackNode) == 0x44 && offsetof(AsdTrackBlendNode, blendLimit) == 0x48 ? 1 : -1];
typedef char AsdTrackOwnerBoneLayoutCheck[
    offsetof(AsdTrackOwner, model.resource) == 8 &&
    offsetof(AsdTrackOwner, secondary.skeleton.provider) == 0x220 &&
    sizeof(AsdTrackOwner) == 0x230 ? 1 : -1];
typedef char AsdTrackOwnerDefaultMatrixLayoutCheck[
    offsetof(AsdTrackOwner, transform.defaultMatrix) == 0x8c &&
    sizeof(AsdTrackOwner) == 0x230 ? 1 : -1];

/* The longest blend the playing motion allows; 0 when nothing is playing. */
static __inline f32 asdMotionModelBlendLimit(const AsdMotionModel *model)
{
    if (model->motionCount > 0 && model->active != NULL) {
        return model->active->blendLimit;
    }
    return 0.0f;
}

#endif
