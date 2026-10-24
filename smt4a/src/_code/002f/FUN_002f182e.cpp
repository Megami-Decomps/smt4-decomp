/* NON_MATCHING: taking the storage argument's address makes compiler spill all argument registers. */
#include "common.h"
extern "C" {
void _ZN12AsdAllocatorIPvE8allocateEjPKv(u32 *storage, u32 count, u32 value);
/* Allocates enough words to hold the requested number of bits. */
void FUN_002f182e(const u32 *value, u32 bits, u32 unused, u32 storage) {
    _ZN12AsdAllocatorIPvE8allocateEjPKv(&storage, (bits + 31) >> 5, *value);
}
}
