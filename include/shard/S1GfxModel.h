/* The model slot bookkeeping reached through g_gfxSettings and the asdModel slot arrays. */
#ifndef SHARD_S1GFXMODEL_H
#define SHARD_S1GFXMODEL_H

#include "common.h"
#include <stddef.h>

/* The part of a model slot at +0x40 that holds the scene-node target. */
typedef struct ModelSlotNodes {
    /* 0x00 */ u8 unk00[0x6C];
    /* 0x6C */ u32 *target;       /* receives the attached node */
} ModelSlotNodes;

/* A model slot. */
typedef struct ModelSlot {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ void *sceneObject;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ u32 attached;
    /* 0x10 */ u8 unk10[0x30];
    /* 0x40 */ ModelSlotNodes nodes;
} ModelSlot;

/* Pointer vector embedded in each registered slot-list object. */
struct ModelSlotVector {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ ModelSlot **begin;
    /* 0x0C */ ModelSlot **end;
    /* 0x10 */ ModelSlot **capacity;
};

typedef struct ModelSlotList {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ ModelSlotVector slots;
} ModelSlotList;

typedef char ModelSlotListSizeCheck[sizeof(ModelSlotList) == 0x24 ? 1 : -1];
typedef char ModelSlotVectorOffsetCheck[offsetof(ModelSlotList, slots) == 0x10 ? 1 : -1];

/* Selects a slot by index. */
typedef struct ModelSelector {
    /* 0x000 */ u32 unk000;
    /* 0x004 */ s32 index;
    /* 0x008 */ u8 unk008[0x564];
    /* 0x56C */ ModelSlot *slots[2];
} ModelSelector;

typedef struct ModelOwner {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ ModelSlot *slot;
} ModelOwner;

#ifdef __cplusplus
extern "C" {
#endif
/* Canonical declaration (matches the definition). */
void runtimeDispatchObjectRelease(u32 **ref);
#ifdef __cplusplus
}
#endif

#endif
