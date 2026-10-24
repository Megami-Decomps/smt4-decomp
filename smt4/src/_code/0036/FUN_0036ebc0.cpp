/* NON_MATCHING: retail keeps the destination offset field and the source field as pointers (add r1, r0, #28; ldr r3, [r4, #28]!) while this build folds the self-relative arithmetic into offsets and uses different registers. */
#include "common.h"

extern "C" {

struct BlockAllocator;
struct BlockAllocatorVtbl {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ void *(*allocate)(BlockAllocator *allocator, u32 size, u32 alignment);
};
struct BlockAllocator {
    /* 0x00 */ BlockAllocatorVtbl *vtbl;
};

/* A serialized node: a type tag and a self-relative offset to the node it refers to. */
struct LinkNode {
    /* 0x00 */ u32 type;
    /* 0x04 */ u32 unk04[6];
    /* 0x1C */ s32 offset;
};

/* Points a self-relative offset field at `target`. */
static __inline void linkSet(s32 *field, const void *target)
{
    *field = (u8 *)target - (u8 *)field;
}

/* Builds a link node that refers to the target of `source`: sources of the plain kinds are the target themselves, a link node
 * contributes the node its own offset points at. */
void FUN_0036ebc0(BlockAllocator *allocator, LinkNode *source)
{
    LinkNode *node = (LinkNode *)allocator->vtbl->allocate(allocator, sizeof(LinkNode), 4);
    if (node == NULL) {
        return;
    }
    LinkNode *target = NULL;
    node->unk04[0] = 0;
    node->unk04[1] = 0;
    node->unk04[2] = 0;
    node->unk04[3] = 0;
    node->unk04[4] = 0;
    node->unk04[5] = 0;
    node->offset = 0;
    node->type = 0x20000004;
    if (source->type == 0x20000002) {
        if (source == NULL) {
            return;
        }
    } else if (source->type == 0x20000004) {
        if (source->offset != 0) {
            target = (LinkNode *)((u8 *)&source->offset + source->offset);
        }
        if (target != NULL) {
            linkSet(&node->offset, target);
        }
        return;
    } else {
        if (source->type != 0x20000009 && source->type != 0x20000011) {
            return;
        }
        if (source == NULL) {
            return;
        }
    }
    linkSet(&node->offset, source);
}

} /* extern "C" */
