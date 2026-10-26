#include "common.h"

extern "C" {
u32 FUN_0011bff4(void *heap, u32 block, u32 size);

/* Forwards to the heap's embedded sub-heap at +0x18 (the tail call to the next function is removed by the linker). */
u32 FUN_0011bfec(u8 *expHeap, u32 block, u32 size)
{
    return FUN_0011bff4(expHeap + 0x18, block, size);
}
}
