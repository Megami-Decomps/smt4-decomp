/* NON_MATCHING: register allocation only: retail keeps the release callback in r7 and does not hoist the second bucket table's +8 offset into a register; the build hoists it into fp */
#include "common.h"
#include <stddef.h>

#define RESOURCE_BUCKETS 0x200

/* One 0xE8-byte entry of a resource group (observed fields). */
struct ResourceEntry {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ void *block30;
    /* 0x34 */ u8 unk34[0x24];
    /* 0x58 */ void *block58;
    /* 0x5C */ u8 unk5C[0x84];
    /* 0xE0 */ void *blockE0;
    /* 0xE4 */ u8 unkE4[4];
};

/* A resource group on the registry's list. */
struct ResourceGroup {
    /* 0x00 */ void *block00;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ void *block08;
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ ResourceEntry *entries;
    /* 0x14 */ u32 entryCount;
    /* 0x18 */ u8 unk18[8];
    /* 0x20 */ ResourceGroup *next;
};

/* A node of the second bucket table. */
struct ResourceBucketNode {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ ResourceBucketNode *next;
};

/* A child block of a first-table node. */
struct ResourceChild {
    /* 0x00 */ void *block;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ ResourceChild *next;
};

/* A node of the first bucket table. */
struct ResourceNode {
    /* 0x00 */ ResourceNode *next;
    /* 0x04 */ u8 unk04[0x14];
    /* 0x18 */ ResourceChild *children;
    /* 0x1C */ void *block1C;
    /* 0x20 */ u8 unk20[0xC];
    /* 0x2C */ void *block2C;
    /* 0x30 */ u8 unk30[0x190];
    /* 0x1C0 */ void *block1C0;
    /* 0x1C4 */ u8 unk1C4[0x44];
};

struct ResourceRegistry {
    /* 0x0000 */ u8 unk0000[8];
    /* 0x0008 */ ResourceNode *nodes[RESOURCE_BUCKETS];
    /* 0x0808 */ ResourceBucketNode *bucketNodes[RESOURCE_BUCKETS];
    /* 0x1008 */ ResourceGroup *groups;
};

struct ResourceManager {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ ResourceRegistry *registry;
};

typedef char ResourceRegistryLayoutCheck[
    sizeof(ResourceEntry) == 0xE8 && offsetof(ResourceGroup, next) == 0x20 &&
    offsetof(ResourceNode, block1C0) == 0x1C0 && offsetof(ResourceRegistry, groups) == 0x1008 ? 1 : -1];

extern "C" {

extern void (*g_gfxReleaseCallback)(u32 heap, u32 alignment, u32 flags, void *block);
extern ResourceManager DAT_004652ac;

/* Hands one block back through the graphics release callback, if one is installed. */
#define GFX_RELEASE(block) \
    do { \
        if (g_gfxReleaseCallback != NULL) { \
            g_gfxReleaseCallback(0x10000, 0x100, 0, (block)); \
        } \
    } while (0)

/* Releases every block of the resource registry through the graphics release callback and drops the registry. */
void FUN_00111cfc(void)
{
    ResourceGroup *group;
    u32 bucket;

    if (DAT_004652ac.registry == NULL) {
        return;
    }
    for (group = DAT_004652ac.registry->groups; group != NULL;) {
        ResourceGroup *next = group->next;

        if (group->block00 != NULL) {
            GFX_RELEASE(group->block00);
        }
        if (group->block08 != NULL) {
            GFX_RELEASE(group->block08);
        }
        for (u32 i = 0; i < group->entryCount; i++) {
            if (group->entries[i].block30 != NULL) {
                GFX_RELEASE(group->entries[i].block30);
            }
            if (group->entries[i].blockE0 != NULL) {
                GFX_RELEASE(group->entries[i].blockE0);
            }
            if (group->entries[i].block58 != NULL) {
                GFX_RELEASE(group->entries[i].block58);
            }
        }
        if (group->entries != NULL) {
            GFX_RELEASE(group->entries);
        }
        GFX_RELEASE(group);
        group = next;
    }
    for (bucket = 0; bucket < RESOURCE_BUCKETS; bucket++) {
        ResourceBucketNode *node = DAT_004652ac.registry->bucketNodes[bucket];

        while (node != NULL) {
            ResourceBucketNode *following = node->next;

            GFX_RELEASE(node);
            node = following;
        }
    }
    for (s32 j = 0; (u32)j < RESOURCE_BUCKETS; j++) {
        ResourceNode *node = DAT_004652ac.registry->nodes[j];

        while (node != NULL) {
            ResourceNode *following = node->next;
            ResourceChild *child;

            if (node->block2C != NULL) {
                GFX_RELEASE(node->block2C);
            }
            if (node->block1C0 != NULL) {
                GFX_RELEASE(node->block1C0);
            }
            if (node->block1C != NULL) {
                GFX_RELEASE(node->block1C);
            }
            child = node->children;
            while (child != NULL) {
                ResourceChild *nextChild = child->next;

                if (child->block != NULL) {
                    GFX_RELEASE(child->block);
                }
                GFX_RELEASE(child);
                child = nextChild;
            }
            GFX_RELEASE(node);
            node = following;
        }
    }
    DAT_004652ac.registry = NULL;
}

} /* extern "C" */
