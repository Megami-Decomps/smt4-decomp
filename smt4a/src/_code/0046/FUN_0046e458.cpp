/* NON_MATCHING: the last loop now returns from inside without unrolling (while form); remaining: retail enters each table loop with a predicated `movne r2, #0` and compares the item count with `subs`/`movhi`, plus register numbering. */
#include "common.h"
#include <stddef.h>

/* An entry of one of the resource tables: tagged with a 16-bit id at +0x20. */
template <u32 SIZE>
struct IdEntry {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 id;
    /* 0x22 */ u8 unk22[SIZE - 0x22];
};

/* A table of entries plus the index array that maps each entry to its model; -1 = no model. */
template <u32 SIZE>
struct IdTable {
    /* 0x00 */ s32 count;
    /* 0x04 */ IdEntry<SIZE> *entries;
    /* 0x08 */ u16 *models;

    u32 find(u16 wanted) const
    {
        u32 model = (u32)-1;
        s32 i;

        for (i = 0; i < count; i++) {
            if (entries[i].id == wanted) {
                model = models[i];
                break;
            }
        }
        return model;
    }
};

struct ModelLink {
    /* 0x00 */ u32 value;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ u8 active;
    /* 0x0D */ u8 unk0D[3];
};

struct ModelObject {
    /* 0x00 */ u8 unk00[0x4C];
    /* 0x4C */ ModelLink *links;
};
typedef char ModelObjectSize[sizeof(ModelObject) == 0x50 ? 1 : -1];

struct ResourceSet {
    /* 0x000 */ u8 unk000[0x318];
    /* 0x318 */ ModelObject *models;
    /* 0x31C */ u8 unk31C[0x80];
    /* 0x39C */ IdTable<0x28> tableA;
    /* 0x3A8 */ IdTable<0x6C> tableB;
    /* 0x3B4 */ IdTable<0x80> tableC;
    /* 0x3C0 */ IdTable<0x3C> tableD;
    /* 0x3CC */ IdTable<0x30> tableE;
    /* 0x3D8 */ IdTable<0x2C> tableF;
};
typedef char ResourceSetLayout[offsetof(ResourceSet, tableF) == 0x3D8 ? 1 : -1];

extern "C" {

s32 FUN_001b315c(ModelObject *model);
u8 *FUN_001b31ac(ModelObject *model);
u32 FUN_001b31e0(ModelObject *model);

/* Finds the model of the resource with the given id (searching each table in turn) and returns the value of its
 * first active link whose item is of kind 5, or 0. */
u32 FUN_0046e458(ResourceSet *set, u16 id)
{
    u32 index = set->tableA.find(id);
    ModelObject *model;
    u8 *items;
    u32 count;
    u32 result = 0;
    u32 i;

    if (index == (u32)-1) {
        index = set->tableB.find(id);
        if (index == (u32)-1) {
            index = set->tableC.find(id);
            if (index == (u32)-1) {
                index = set->tableD.find(id);
                if (index == (u32)-1) {
                    index = set->tableE.find(id);
                    if (index == (u32)-1) {
                        index = set->tableF.find(id);
                        if (index == (u32)-1) {
                            return 0;
                        }
                    }
                }
            }
        }
    }
    model = &set->models[index];
    if (FUN_001b315c(model) == 0) {
        return 0;
    }
    items = FUN_001b31ac(model);
    count = FUN_001b31e0(model);
    i = 0;
    while (i < count) {
        if (items[i * 0x40] == 5 && model->links[i].active != 0) {
            return model->links[i].value;
        }
        i++;
    }
    return 0;
}

} /* extern "C" */
