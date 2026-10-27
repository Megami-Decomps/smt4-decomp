/* NON_MATCHING: only register allocation differs (retail keeps the resolved offset in r3 and the null result in r1 across the type switch; the build uses r1 for the type and the offset). */
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

/* Points a self-relative offset field at `target` (nothing happens for NULL). */
static __inline void linkSet(s32 *field, const void *target)
{
    if (target != NULL) {
        *field = (u8 *)target - (u8 *)field;
    }
}

/* The node a self-relative offset field points at, or NULL for a zero offset. */
static __inline LinkNode *linkResolve(s32 *field)
{
    s32 relative = *field;
    if (relative == 0) {
        return NULL;
    }
    return (LinkNode *)(relative + (s32)field);
}

/* Points `field` at the node the self-relative offset `from` points at. */
static __inline void linkCopy(s32 *field, s32 *from)
{
    linkSet(field, linkResolve(from));
}

/* Builds a link node that refers to the target of `source`: sources of the plain kinds are the target themselves, a link node
 * contributes the node its own offset points at. */
LinkNode *FUN_0036ebc0(BlockAllocator *allocator, LinkNode *source)
{
    LinkNode *node = (LinkNode *)allocator->vtbl->allocate(allocator, sizeof(LinkNode), 4);
    if (node == NULL) {
        return NULL;
    }
    node->unk04[0] = 0;
    node->unk04[1] = 0;
    node->unk04[2] = 0;
    node->unk04[3] = 0;
    node->unk04[4] = 0;
    node->unk04[5] = 0;
    node->offset = 0;
    node->type = 0x20000004;
    switch (source->type) {
    case 0x20000009:
        linkSet(&node->offset, source);
        return node;
    case 0x20000004:
        linkCopy(&node->offset, &source->offset);
        return node;
    case 0x20000002:
        linkSet(&node->offset, source);
        return node;
    case 0x20000011:
        linkSet(&node->offset, source);
        return node;
    default:
        return node;
    }
}

} /* extern "C" */
