/* NON_MATCHING: control flow, the hoisted mask bits and the shared NULL now match; retail allocates two more callee-saved registers (slot r4, key r8, NULL r9) where armcc packs them into r5-r7. */
#include "common.h"
#include "shard/S3AsdProcess.h"

extern "C" {

void jobSetFlagsRecursive(s32 set, u32 id, u32 mask);

extern AsdProcessTable g_asdProcess;

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

/* Sets or clears the flag bits of `node` and, recursively, of its children. */
static __inline void asdProcessChangeTree(AsdProcessNode *node, s32 set, u32 mask)
{
    asdProcessChangeFlags(node, set, mask);
    for (AsdProcessNode *child = node->children; child != NULL; child = child->sibling) {
        jobSetFlagsRecursive(set, child->id, mask);
    }
}

/* Sets or clears the flag bits `mask` of the process nodes selected by `mode`: 0 the node `id`
 * names, 2 that node and its children, 1 every other node, 3 every node. */
void jobSetFlagsByMode(s32 set, u32 id, u32 mask, s32 mode)
{
    AsdProcessSlot *slot = &g_asdProcess.slots[id >> 20];
    u32 key = id & 0xFFFFF;
    u32 bits = mask & ASDPROCESS_MASK_BITS;
    AsdProcessNode *target = NULL;
    AsdProcessNode *node;

    switch (mode) {
    case 0:
        for (node = slot->first; node != NULL; node = node->next) {
            if (node->key == key) {
                target = node;
                break;
            }
        }
        if (set != 0)
            target->flags |= bits;
        else
            target->flags &= ~bits;
        break;
    case 1:
    case 3:
        for (s32 i = 0; i < g_asdProcess.count; i++) {
            for (node = g_asdProcess.slots[i].first; node != NULL; node = node->next) {
                if ((node->id != id && mode == 1) || mode == 3) {
                    if (set != 0)
                        node->flags |= bits;
                    else
                        node->flags &= ~bits;
                }
            }
        }
        break;
    case 2:
        for (node = slot->first; node != NULL; node = node->next) {
            if (node->key == key) {
                target = node;
                break;
            }
        }
        asdProcessChangeTree(target, set, mask);
        break;
    }
}

} /* extern "C" */
