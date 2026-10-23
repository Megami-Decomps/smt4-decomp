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

/* The model-related part of g_gfxSettings (0x464AF0): per-scene-slot (0/1) node state. */
typedef struct GfxModelState {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ u8 unk01;
    /* 0x02 */ u8 unk02;
    /* 0x03 */ u8 unk03[0x1D];
    /* 0x20 */ u32 node0;          /* node attached for slot 0 */
    /* 0x24 */ u8 unk24[8];
    /* 0x2C */ u32 node1;          /* node attached for slot 1 */
    /* 0x30 */ u32 pendingNode[2]; /* node waiting to be attached */
    union {
        /* 0x38 */ u8 unk38[8];
        struct {
            /* 0x38 */ u32 count;
            /* 0x3C */ u8 unk3C[4];
        } loadedModels;
    };
    /* 0x40 */ s32 unk40;
    /* 0x44 */ u8 unk44[0x3C];
    /* 0x80 */ void *modelData;
    /* 0x84 */ u8 unk84[8];
    /* 0x8C */ u32 attachInfo[2];
    /* 0x94 */ u32 transformBuilder[2];
    /* 0x9C */ u8 unk9C[0x10];
    /* 0xAC */ u32 sceneNode[2];   /* g_asdModelSlotArray0 */
    /* 0xB4 */ u8 unkB4[0x10];
    /* 0xC4 */ struct ModelOwner *owner[2];
    /* 0xCC */ u32 unkCC[2];       /* cleared when a slot is attached */
} GfxModelState;

typedef char GfxModelStateSizeCheck[sizeof(GfxModelState) == 0xD4 ? 1 : -1];
typedef char GfxModelStateLoadedCountOffsetCheck[
    offsetof(GfxModelState, loadedModels.count) == 0x38 ? 1 : -1];

typedef struct ModelOwner {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ ModelSlot *slot;
} ModelOwner;

#endif
