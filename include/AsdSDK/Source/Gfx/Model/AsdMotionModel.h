/* AsdSDK/Source/Gfx/Model/AsdMdlManager.c: the motion instances and animation tracks a model plays
 * (the model itself is AsdMdlNode in AsdMdlManager.h). */
#ifndef ASDSDK_SOURCE_GFX_MODEL_ASDMOTIONMODEL_H
#define ASDSDK_SOURCE_GFX_MODEL_ASDMOTIONMODEL_H

#include "common.h"
#include <stddef.h>
#include "shard/S3AsdModelAttr.h"
#include "gfx/SkeletonInstanceBuffers.h"
#include "nw/ut/RuntimeTypeInfo.h"

struct AsdMotionInstance;
struct AsdMotionPool;
struct AsdTrackNode;
struct ModelBoneResource;
struct ModelBoneMatrixProvider;
struct ModelBoneAnimationTarget;

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
    /* 0x40 */ f32 playbackSpeed;
    /* 0x44 */ f32 blendFrom;
    /* 0x48 */ f32 blendLimit;
    /* 0x4C */ f32 (*interpolate)(void *context, f32 from, f32 limit, f32 target);
    /* 0x50 */ void *interpolateContext;
    /* 0x54 */ u8 unk54[4];
    /* 0x58 */ u8 blendChanged;
} AsdMotionInstance;

typedef struct AsdTrackNodeVtbl {
    /* 0x00 */ void *unk00[2];
    /* 0x08 */ const nw::ut::RuntimeTypeInfo *(*getType)(struct AsdTrackNode *node);
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

    /* The node's runtime type tag (vtable slot 2), for nw::ut::DynamicCast. */
    const nw::ut::RuntimeTypeInfo *getRuntimeTypeInfo() { return vtbl->getType(this); }
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

typedef char AsdMotionInstanceLayoutCheck[
    offsetof(AsdMotionInstance, blend) == 0x38 && offsetof(AsdMotionInstance, interpolate) == 0x4C &&
    offsetof(AsdMotionInstance, blendChanged) == 0x58 ? 1 : -1];
typedef char AsdTrackNodeLayoutCheck[
    offsetof(AsdTrackNode, slot) == 0x14 && offsetof(AsdTrackNode, channelB) == 0x34 &&
    offsetof(AsdTrackNode, handedOver) == 0x41 ? 1 : -1];
typedef char AsdTrackNodeSizeCheck[
    sizeof(AsdTrackNode) == 0x44 && offsetof(AsdTrackBlendNode, blendLimit) == 0x48 ? 1 : -1];
#endif
