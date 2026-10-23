#ifndef GFX_COMMANDBUFFERHANDLES_H
#define GFX_COMMANDBUFFERHANDLES_H
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

/* The registry link lies beyond the recovered AsdCmdBuffer prefix. */
struct CommandBufferHandleNode {
    AsdCmdBuffer buffer;
    /* 0x40 */ CommandBufferHandleNode *next;
};
struct CommandBufferHandleAllocator {
    void *(*allocate)(u32 heap, u32 type, u32 options, u32 size);
    u32 unk04;
    u32 nextId;
};
typedef char CommandBufferHandleNodeOffsetCheck[
    offsetof(CommandBufferHandleNode, next) == 0x40 && sizeof(CommandBufferHandleNode) == 0x44 ? 1 : -1];
typedef char CommandBufferHandleAllocatorOffsetCheck[
    offsetof(CommandBufferHandleAllocator, nextId) == 8 ? 1 : -1];

/* Keep each collision chain ordered by handle, rejecting an already occupied id. */
static inline bool commandBufferTryAssign(AsdGfxContext *context, CommandBufferHandleNode *node,
                                        u32 id, u32 *handle)
{
    CommandBufferHandleNode *head = (CommandBufferHandleNode *)context->bufferRegistry.buckets[id & 31];
    if (!head) {
        *handle = id;
        node->buffer.unk00 = id;
        node->next = NULL;
        context->bufferRegistry.buckets[id & 31] = &node->buffer;
        return true;
    }
    if (head->buffer.unk00 == id)
        return false;
    if (id < head->buffer.unk00) {
        *handle = id;
        node->buffer.unk00 = id;
        node->next = (CommandBufferHandleNode *)context->bufferRegistry.buckets[id & 31];
        context->bufferRegistry.buckets[id & 31] = &node->buffer;
        return true;
    }
    CommandBufferHandleNode *previous = head;
    CommandBufferHandleNode *current = previous->next;
    while (current) {
        if (current->buffer.unk00 == id)
            return false;
        if (id < current->buffer.unk00) {
            *handle = id;
            node->buffer.unk00 = id;
            previous->next = node;
            node->next = current;
            return true;
        }
        previous = current;
        current = current->next;
    }
    previous->next = node;
    node->buffer.unk00 = id;
    node->next = NULL;
    *handle = id;
    return true;
}
#endif
