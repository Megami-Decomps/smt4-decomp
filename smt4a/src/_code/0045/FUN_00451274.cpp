/* NON_MATCHING: tree walk and teardown order match; retail keeps a zero in sl from function entry and uses it for the null results of every offset lookup, where armcc loads immediate #0 there and hoists the zero later. */
#include "gfx/ResourceReleaseTree.h"

extern "C" {
void sysMemClear(void *block, u32 size);
extern void (*g_gfxReleaseCallback)(u32 block, u32 operation, u32 data, u32 size);

/* Releases every group of the owner's resource tree: unregisters each entry, hands its data block
 * to the release callback and clears the group's block table. */
void FUN_00451274(ResourceTreeOwner *owner)
{
    ResourceTreeRoot *root = owner->root;
    SelfOffset *group = offsetTarget<SelfOffset>(&root->groups);
    SelfOffset *end = group + root->groupCount;

    for (; group != end; group++) {
        ResourceGroup *g = offsetTarget<ResourceGroup>(group);
        u32 *blocks = offsetTarget<u32>(&g->blocks);
        u32 count = g->count;
        for (u32 i = 0; i < count; i++) {
            SelfOffset *slot = offsetTarget<SelfOffset>(&g->entries) + i;
            ResourceEntry *entry = offsetTarget<ResourceEntry>(slot);
            if (entry != 0 && entry->registration != 0) {
                g->registry->release();
                entry->registration = 0;
                entry->unk1C = 0;
            }
            if (entry->data != 0) {
                g_gfxReleaseCallback(entry->data, 0x102, blocks[i], entry->dataSize);
                entry->dataSize = 0;
            }
        }
        sysMemClear(blocks, count << 2);
        g->registry = 0;
        g->flags &= ~1u;
    }
}

} /* extern "C" */
