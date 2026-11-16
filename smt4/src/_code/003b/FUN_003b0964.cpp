/* NON_MATCHING: the map walk is now an inlined iterator (node compares and parent walk match); retail
 * still branches around the ready-flag store where the build predicates it (ldrne/strbne). */
#include "common.h"

extern "C" {

typedef struct ModelResource {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u8 ready;
} ModelResource;

typedef struct ModelEntry {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ ModelResource *resource;
} ModelEntry;

typedef struct ModelSlot {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ ModelEntry *entry;
} ModelSlot;

/* Red-black tree node of the model map. */
typedef struct ModelMapNode ModelMapNode;
struct ModelMapNode {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ ModelMapNode *parent;
    /* 0x08 */ ModelMapNode *left;
    /* 0x0C */ ModelMapNode *right;
    /* 0x10 */ u8 unk10[8];
    /* 0x18 */ ModelSlot *slot;
};

typedef struct ModelMap {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ ModelMapNode *header;
} ModelMap;

typedef struct ModelLoader {
    /* 0x0000 */ u8 unk0000[0x1414];
    /* 0x1414 */ ModelMap models;
} ModelLoader;

s32 moLiveNodeSourceAcquireHeader(ModelEntry *entry);

/* The map's iterator: an in-order walk of the red-black tree. */
struct ModelMapIterator {
    ModelMapNode *node;

    void increment()
    {
        ModelMapNode *next = node->right;
        if (next != NULL) {
            do {
                node = next;
                next = node->left;
            } while (next != NULL);
        } else {
            ModelMapNode *parent = node->parent;
            while (node == parent->right) {
                node = parent;
                parent = parent->parent;
            }
            if (node->right != parent) {
                node = parent;
            }
        }
    }
    bool operator!=(const ModelMapIterator &other) const { return node != other.node; }
};

static __inline ModelMapIterator modelMapBegin(ModelMap *map)
{
    ModelMapIterator it = {map->header->left};
    return it;
}

static __inline ModelMapIterator modelMapEnd(ModelMap *map)
{
    ModelMapIterator it = {map->header};
    return it;
}

/* Checks every model in the loader's map, marking the loaded ones ready; returns whether all have loaded. */
u32 FUN_003b0964(ModelLoader *loader)
{
    ModelMap *models = &loader->models;
    u32 allLoaded = 1;

    ModelMapIterator it = modelMapBegin(models);
    if (it != modelMapEnd(models)) {
        do {
            ModelEntry *entry = it.node->slot->entry;
            if (moLiveNodeSourceAcquireHeader(entry) == 0) {
                allLoaded = 0;
            } else {
                entry->resource->ready = 1;
            }
            it.increment();
        } while (it != modelMapEnd(models));
    }
    return allLoaded;
}

} /* extern "C" */
