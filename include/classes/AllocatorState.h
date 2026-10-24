#ifndef CLASSES_ALLOCATORSTATE_H
#define CLASSES_ALLOCATORSTATE_H

#include "common.h"

/* The engine allocator's global state at 0x5b4028 (named g_allocationAddressRanges): the mutex
 * that guards the heaps and the address ranges of its two large regions. */
struct AllocatorState {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 *mutex; /* handle of the mutex guarding the heaps */
    /* 0x08 */ u8 unk08[0x20];
    /* 0x28 */ u32 firstRangeStart;
    /* 0x2C */ u32 secondRangeStart;
    /* 0x30 */ u8 unk30[8];
    /* 0x38 */ u32 firstRangeSize;
    /* 0x3C */ u32 secondRangeSize;
};

typedef char AllocatorStateLayoutCheck[sizeof(AllocatorState) == 0x40 ? 1 : -1];

#endif
