/* NON_MATCHING: all 152 instructions match retail (tableB id offset fixed to 0x30, if (count != 0) loop guards, nested tail loop); only scratch/saved register numbering in the six table loops differs (84 diff lines). */
#include "common.h"
#include <stddef.h>

/* An entry of one of the resource tables: tagged with a 16-bit id at ID_OFF (0x30 in tableB, 0x20 elsewhere). */
template <u32 SIZE, u32 ID_OFF = 0x20>
struct IdEntry {
    /* 0x00 */ u8 unk00[ID_OFF];
    /* ID_OFF */ u16 id;
    /* ID_OFF+2 */ u8 unkTail[SIZE - ID_OFF - 2];
};

/* A table of entries plus the index array that maps each entry to its model; -1 = no model. */
template <u32 SIZE, u32 ID_OFF = 0x20>
struct IdTable {
    /* 0x00 */ s32 count;
    /* 0x04 */ IdEntry<SIZE, ID_OFF> *entries;
    /* 0x08 */ u16 *models;

    u32 find(u16 wanted) const
    {
        u32 model = (u32)-1;
        if (count != 0) {
            for (s32 i = 0; i < count; i++) {
                if (entries[i].id == wanted) {
                    model = models[i];
                    break;
                }
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
    /* 0x3A8 */ IdTable<0x6C, 0x30> tableB;
    /* 0x3B4 */ IdTable<0x80> tableC;
    /* 0x3C0 */ IdTable<0x3C> tableD;
    /* 0x3CC */ IdTable<0x30> tableE;
    /* 0x3D8 */ IdTable<0x2C> tableF;
};
typedef char ResourceSetLayout[offsetof(ResourceSet, tableF) == 0x3D8 ? 1 : -1];

extern "C" {

s32 packageEntryIsLoaded(ModelObject *model);
u8 *packageEntryGetDirectory(ModelObject *model);
u32 packageEntryGetFileCount(ModelObject *model);

/* Finds the model of the resource with the given id (searching each table in turn) and returns the value of its
 * first active link whose item is of kind 5, or 0. */
u32 resourceSetFindActiveModelLinkValue(ResourceSet *set, u16 id)
{
    u32 index = set->tableA.find(id);
    ModelObject *model;
    u8 *items;
    u32 count;
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
    if (packageEntryIsLoaded(model) == 0) {
        return 0;
    }
    items = packageEntryGetDirectory(model);
    count = packageEntryGetFileCount(model);
    for (i = 0; i < count; i++) {
        if (items[i * 0x40] == 5) {
            if (model->links[i].active != 0) {
                return model->links[i].value;
            }
        }
    }
    return 0;
}

} /* extern "C" */
