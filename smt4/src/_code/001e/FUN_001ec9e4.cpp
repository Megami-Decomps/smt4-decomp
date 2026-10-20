/* NON_MATCHING: register allocation and block order: retail computes mask & 0x0FFFFFF0 once up front and keeps NULL in r9, build recomputes it per path. */
#include "common.h"
#include "shard/S3AsdProcess.h"

extern "C" {

void FUN_002d7894(s32 set, u32 id, u32 mask);

extern AsdProcessTable g_asdProcess;

/* Node of the slot chain `slot` whose key is `key`, or NULL. */
static __inline AsdProcessNode *asdProcessFind(AsdProcessSlot *slot, u32 key)
{
    for (AsdProcessNode *node = slot->first; node != NULL; node = node->next) {
        if (node->key == key) {
            return node;
        }
    }
    return NULL;
}

/* Sets (`set` != 0) or clears the flag bits of `node`. */
static __inline void asdProcessChangeFlags(AsdProcessNode *node, s32 set, u32 mask)
{
    u32 bits = mask & ASDPROCESS_MASK_BITS;

    if (set != 0) {
        node->flags |= bits;
    } else {
        node->flags &= ~bits;
    }
}

/* Sets or clears the flag bits `mask` of the process nodes selected by `mode`: 0 the node `id`
 * names, 2 that node and its children, 1 every other node, 3 every node. */
void FUN_001ec9e4(s32 set, u32 id, u32 mask, s32 mode)
{
    AsdProcessSlot *slot = &g_asdProcess.slots[id >> 20];
    u32 key = id & 0xFFFFF;

    if (mode == 0) {
        asdProcessChangeFlags(asdProcessFind(slot, key), set, mask);
    } else if (mode == 1 || mode == 3) {
        for (s32 i = 0; i < g_asdProcess.count; i++) {
            for (AsdProcessNode *node = g_asdProcess.slots[i].first; node != NULL; node = node->next) {
                if ((node->id != id && mode == 1) || mode == 3) {
                    asdProcessChangeFlags(node, set, mask);
                }
            }
        }
    } else if (mode == 2) {
        AsdProcessNode *node = asdProcessFind(slot, key);

        asdProcessChangeFlags(node, set, mask);
        for (AsdProcessNode *child = node->children; child != NULL; child = child->sibling) {
            FUN_002d7894(set, child->id, mask);
        }
    }
}

} /* extern "C" */
