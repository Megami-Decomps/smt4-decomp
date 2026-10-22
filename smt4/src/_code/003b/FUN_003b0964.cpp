/* NON_MATCHING: retail looks like an inlined std::map iterator (operand order of the node compares, r2 in the
 * parent walk, and a branch instead of conditional stores around the ready flag); the plain C walk differs there. */
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

s32 FUN_003af8d0(ModelEntry *entry);

/* Checks every model in the loader's map, marking the loaded ones ready; returns whether all have loaded. */
u32 FUN_003b0964(ModelLoader *loader)
{
    ModelMap *models = &loader->models;
    u32 allLoaded = 1;

    for (ModelMapNode *node = models->header->left; models->header != node;) {
        ModelEntry *entry = node->slot->entry;
        if (FUN_003af8d0(entry) == 0) {
            allLoaded = 0;
        } else {
            entry->resource->ready = 1;
        }
        ModelMapNode *next = node->right;
        if (next != NULL) {
            do {
                node = next;
                next = node->left;
            } while (next != NULL);
        } else {
            ModelMapNode *parent = node->parent;
            while (parent->right == node) {
                node = parent;
                parent = parent->parent;
            }
            if (node->right != parent) {
                node = parent;
            }
        }
    }
    return allLoaded;
}

} /* extern "C" */
