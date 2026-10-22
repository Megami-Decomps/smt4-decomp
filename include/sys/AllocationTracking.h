#ifndef SYS_ALLOCATIONTRACKING_H
#define SYS_ALLOCATIONTRACKING_H
#include "common.h"
#include <stddef.h>

struct AllocationLink {
    AllocationLink *previous; // 0x00
    AllocationLink *next; // 0x04
};
struct AllocationHeader {
    u32 size; // 0x00: full backing allocation size
    u16 alignment; // 0x04
    u16 flags; // 0x06
    u16 tag; // 0x08
    u8 unk0a[2];
    AllocationLink link; // 0x0c
    u8 unk14[0x24];
    AllocationHeader *owner; // 0x38: back-pointer immediately before aligned payload
};
struct AllocationUsage {
    AllocationLink *head;
    AllocationLink *tail;
    union {
        u8 unk08[0x10];
        AllocationLink *cursor;
    };
    u32 count; // 0x18
    u32 bytes; // 0x1c
    u8 unk20[0x18];
    u16 tag; // 0x38
    u8 unk3a[2];
    u32 categoryBytes[8]; // 0x3c
    u32 categoryPayloadBytes[8]; // 0x5c
};
struct AllocationTracking {
    u32 unk00;
    void *lock; // 0x04
    AllocationUsage *usage; // 0x08
};
typedef char AllocationHeaderLayoutCheck[sizeof(AllocationHeader) == 0x3c && offsetof(AllocationHeader, link) == 0xc && offsetof(AllocationHeader, owner) == 0x38 ? 1 : -1];
typedef char AllocationUsageLayoutCheck[sizeof(AllocationUsage) == 0x7c && offsetof(AllocationUsage, count) == 0x18 && offsetof(AllocationUsage, categoryBytes) == 0x3c && offsetof(AllocationUsage, categoryPayloadBytes) == 0x5c ? 1 : -1];
typedef char AllocationTrackingLayoutCheck[sizeof(AllocationTracking) == 0xc && offsetof(AllocationTracking, lock) == 4 && offsetof(AllocationTracking, usage) == 8 ? 1 : -1];
typedef char AllocationUsageCursorOffsetCheck[offsetof(AllocationUsage, cursor) == 8 ? 1 : -1];
#endif
