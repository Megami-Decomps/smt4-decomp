/* NON_MATCHING: transfer-queue pop with the inlined ring iterators (position/wrap computations, begin==end tests) and list unlink written as plain helpers; instruction scheduling and the iterator temporaries are not reproduced */
#include "common.h"

/* A queued transfer: its payload size is at +0xC of the payload. */
struct TransferPayloadView {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u32 size;
};

struct TransferDescriptorView {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ TransferPayloadView *payload;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0C;
};

/* A ring of descriptors (16 bytes each): begin, capacity, head index, used count, in-use flag. */
struct DescriptorRing {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ TransferDescriptorView *items;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 capacity;
    /* 0x10 */ u32 head;
    /* 0x14 */ u32 count;
    /* 0x18 */ u8 inUse;
    /* 0x19 */ u8 unk19[3];
};

/* The byte ring the payloads live in. */
struct ByteRing {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u8 *base;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 capacity;
    /* 0x10 */ u32 start;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u8 inUse;
    /* 0x19 */ u8 unk19[3];
};

struct TransferListNodeOwner {
    /* 0x00 */ void **vtable;
};

/* The intrusive node the active transfer hangs on (self-linked when empty). */
struct TransferNode {
    /* 0x00 */ TransferListNodeOwner *owner;
    /* 0x04 */ TransferNode *queued;
    /* 0x08 */ TransferNode *next;
    /* 0x0C */ TransferNode *previous;
};

struct TransferQueueView {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ ByteRing bytes;
    /* 0x20 */ u8 output[0x10];
    /* 0x30 */ DescriptorRing descriptors;
    /* 0x4C */ TransferNode node;
    /* 0x5C */ u8 unk5C[4];
};

struct ActiveTransfer {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ TransferPayloadView *current;
};

extern "C" {
s32 FUN_003fbc38(void *output, TransferNode *node);
void FUN_003fb848(void *out, ByteRing *ring, ByteRing *ring2, u8 *p0, u32 i0, ByteRing *ring3, u8 *p1, u32 i1);

/* Releases the transfer at the head of the queue: sums the payload bytes ahead of it in the ring,
 * drops its byte range and resets the node. Returns 1. */
u32 FUN_003afac0(TransferQueueView *queue)
{
    TransferPayloadView *current = *(TransferPayloadView **)((u8 *)queue + 0x50);
    if (current == NULL)
        return 1;

    DescriptorRing *ring = &queue->descriptors;
    u32 total = 0;
    u32 count = ring->inUse ? ring->count : 0;
    for (u32 k = 0; k < count; k++) {
        u32 index = ring->head + k;
        if (index >= ring->capacity)
            index -= ring->capacity;
        total += ring->items[index].payload->size;
    }

    if (FUN_003fbc38(queue->output, &queue->node) != 0) {
        ByteRing *bytes = &queue->bytes;
        u32 start = bytes->inUse ? bytes->start : 0;
        u32 first = start + total;
        if (first >= bytes->capacity)
            first -= bytes->capacity;
        u32 last = first + current->size;
        if (last >= bytes->capacity)
            last -= bytes->capacity;
        u8 *base = bytes->base;
        u8 range[16];
        FUN_003fb848(range, bytes, bytes, base + (bytes->inUse ? bytes->start : 0) + total,
                     bytes->start + total, bytes, base + last, bytes->start + total + current->size);

        TransferNode *node = &queue->node;
        if (node->next == NULL || node->next == node) {
            if (node->queued != NULL)
                ((void (*)(TransferListNodeOwner *))node->owner->vtable[1])(node->owner);
        } else {
            node->previous->next = node->next;
            node->next->previous = node->previous;
            node->next = NULL;
            node->previous = NULL;
        }
        node->queued = NULL;
        node->previous = node;
        node->next = node;
    }
    return 1;
}

} /* extern "C" */
