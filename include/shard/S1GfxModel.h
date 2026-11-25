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

/* The range embedded in each registered slot-list object. */
template <class Slot>
struct ModelSlotVectorOf {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ Slot *begin;
    /* 0x0C */ Slot *end;
    /* 0x10 */ Slot *capacity;
};

template <class Slot>
struct ModelSlotListOf {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ ModelSlotVectorOf<Slot> slots;
};

typedef ModelSlotVectorOf<ModelSlot *> ModelSlotVector;
typedef ModelSlotListOf<ModelSlot *> ModelSlotList;

/* Apocalypse's out-of-line remove_copy uses signed word handles for the same slots. */
typedef ModelSlotVectorOf<s32> ModelSlotVectorA;
typedef ModelSlotListOf<s32> ModelSlotListA;

typedef char ModelSlotListSizeCheck[sizeof(ModelSlotList) == 0x24 && sizeof(ModelSlotListA) == 0x24 ? 1 : -1];
typedef char ModelSlotVectorOffsetCheck[offsetof(ModelSlotList, slots) == 0x10 &&
    offsetof(ModelSlotListA, slots) == 0x10 ? 1 : -1];

/* Detaches the models registered with an environment slot list, retaining its capacity. */
static __inline void asdModelDetachSlotList(ModelSlotList *list)
{
    ModelSlot **end = list->slots.end;
    for (ModelSlot **slot = list->slots.begin; slot != end; ++slot) {
        if (*slot != NULL) {
            (*slot)->attached = 0;
        }
    }
    list->slots.end = list->slots.begin;
}

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
bool FUN_00197eb0(ModelSlotVectorA *slots, s32 handle);
#ifdef __cplusplus
}
#endif

#endif
