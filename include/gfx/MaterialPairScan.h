/* Collects the (shape, material) pairs of a model whose material slot names contain a pattern. */
#ifndef GFX_MATERIALPAIRSCAN_H
#define GFX_MATERIALPAIRSCAN_H

#include "common.h"
#include "shard/S1NwGfx.h"

/* A set of (kind, index) pairs, appended once each. */
struct PairSet {
    struct Pair { s16 kind, index; } pairs[64];
    s32 count;

    void add(s32 kind, s32 index)
    {
        for (s32 i = 0; i < count; i++) {
            if (pairs[i].kind == kind && pairs[i].index == index)
                return;
        }
        pairs[count].kind = kind;
        pairs[count].index = index;
        count++;
    }
};

/* The two sets a model's damage materials are collected into. */
struct DamageMaterialSets {
    /* 0x000 */ PairSet shapes;
    /* 0x104 */ PairSet materials;
};

/* A material's shape slot: a self-relative entry, optionally wrapped in a typed node. */
struct MaterialSlot {
    /* 0x00 */ u32 type;
    /* 0x04 */ u8 unk04[0xC];
    /* 0x0C */ RelativePointer name;
    /* 0x10 */ u8 unk10[0xC];
    /* 0x1C */ RelativePointer inner;
};
struct MaterialEntry {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ RelativePointer slot;
};

struct MaterialData {
    /* 0x000 */ u8 unk000[0x16C];
    /* 0x16C */ struct { s32 shape; u8 unk04[0x54]; } shapes[3];
    /* 0x274 */ RelativePointer entries[3];
};
struct MaterialHolder {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ MaterialData *data;
};
struct MaterialRef {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s32 shape;
    /* 0x1C */ s32 material;
};
struct DamageResource {
    /* 0x000 */ u8 unk000[0xB4];
    /* 0x0B4 */ s32 refCount;
    /* 0x0B8 */ RelativePointer refs;
};
struct DamageModelData {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ DamageResource *resource;
    /* 0x00C */ u8 unk00C[0x158];
    /* 0x164 */ MaterialHolder **materials;
};
struct DamageModel {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ DamageModelData *data;
};
struct DamageOwner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ DamageModel *model;
};

extern "C" char *FUN_00100c4c(const char *text, const char *pattern);

/* Fills `sets` with the shapes and materials of every material slot of the owner's model whose
 * name contains `pattern`. */
static __inline void collectMaterialPairs(DamageMaterialSets *sets, DamageOwner *owner, const char *pattern)
{
    sets->shapes.count = 0;
    sets->materials.count = 0;
    s32 refCount = owner->model->data->resource->refCount;
    for (s32 ref = 0; ref < refCount; ref++) {
        DamageModelData *model = owner->model->data;
        RelativePointer *refs = (RelativePointer *)model->resource->refs.get();
        MaterialRef *info = (MaterialRef *)refs[ref].get();
        MaterialData *material = model->materials[info->material]->data;
        for (s32 slotIndex = 0; slotIndex < 3; slotIndex++) {
            MaterialEntry *entry = (MaterialEntry *)material->entries[slotIndex].get();
            if (entry == NULL)
                continue;
            MaterialSlot *slot = (MaterialSlot *)entry->slot.get();
            if (slot->type == 0x20000004)
                slot = (MaterialSlot *)slot->inner.get();
            if (slot == NULL)
                continue;
            const char *name = (const char *)slot->name.get();
            if (!FUN_00100c4c(name, pattern))
                continue;
            sets->materials.add(info->material, slotIndex);
            if (&material->shapes[slotIndex] != NULL)
                sets->shapes.add(info->shape, material->shapes[slotIndex].shape);
        }
    }
}

#endif
