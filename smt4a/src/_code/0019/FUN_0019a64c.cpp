/* NON_MATCHING: allocation-category array indexing and saved registers differ. */
#include "common.h"
#include <stddef.h>

struct TrackedAllocationLink {
    TrackedAllocationLink *previous;
    TrackedAllocationLink *next;
};
struct TrackedAllocationHeader {
    u32 bytes;
    u16 padding;
    u16 flags;
    u16 group;
    u8 unk0a[0xa];
    TrackedAllocationLink link;
    u8 unk1c[0x24];
};
struct AllocationTrackingState {
    TrackedAllocationLink *head;
    TrackedAllocationLink *tail;
    u8 unk08[0x10];
    u32 count;
    u32 bytes;
    u8 unk20[0x18];
    u16 group;
    u16 unk3a;
    u32 categoryBytes[8];
    u32 categoryPayloadBytes[8];
};
typedef char TrackedAllocationLayoutCheck[sizeof(TrackedAllocationHeader) == 0x40 &&
    offsetof(TrackedAllocationHeader, padding) == 4 && offsetof(TrackedAllocationHeader, group) == 8 &&
    offsetof(TrackedAllocationHeader, link) == 0x14 &&
    offsetof(AllocationTrackingState, count) == 0x18 && offsetof(AllocationTrackingState, bytes) == 0x1c &&
    offsetof(AllocationTrackingState, group) == 0x38 && offsetof(AllocationTrackingState, categoryBytes) == 0x3c &&
    offsetof(AllocationTrackingState, categoryPayloadBytes) == 0x5c ? 1 : -1];
struct AllocationTrackingGlobals {
    u8 unk00[8];
    AllocationTrackingState *state;
};
typedef char AllocationTrackingGlobalsOffsetCheck[offsetof(AllocationTrackingGlobals, state) == 8 ? 1 : -1];

extern "C" {
extern AllocationTrackingGlobals g_allocationAddressRanges;
u32 FUN_0019c40c(TrackedAllocationHeader *allocation);

void FUN_0019a64c(TrackedAllocationHeader *allocation)
{
    AllocationTrackingState *state = g_allocationAddressRanges.state;
    ++state->count;
    state->bytes += allocation->bytes;
    if ((state->group & 0xff) < 8) {
        u32 category = FUN_0019c40c(allocation);
        g_allocationAddressRanges.state->categoryBytes[category] += allocation->bytes;
        category = FUN_0019c40c(allocation);
        g_allocationAddressRanges.state->categoryPayloadBytes[category] += allocation->bytes - allocation->padding - sizeof(TrackedAllocationHeader);
    }
    state = g_allocationAddressRanges.state;
    TrackedAllocationLink *link = &allocation->link;
    if (state->head == NULL) {
        state->tail = link;
        state->head = link;
        link->next = NULL;
        link->previous = NULL;
    } else {
        link->previous = state->tail;
        g_allocationAddressRanges.state->tail = link;
        link->previous->next = link;
        link->next = NULL;
    }
    allocation->group = g_allocationAddressRanges.state->group;
}
}
