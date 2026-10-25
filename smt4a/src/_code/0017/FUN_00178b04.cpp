/* NON_MATCHING: retail uses push {r3, r4, r5, lr} where the compiled block uses push {r3, lr}. */
#include "common.h"
#include "shard/FUN_00178b04.h"

extern "C" void* asdMemoryAlloc(u32 size, u32 alignment, u32 flags,
                                u32 memoryType, u32 allocationMode);

extern "C" void* FUN_00178b04(u32 memoryType, u32 unusedFirst, u32 unusedSecond)
{
    return asdMemoryAlloc(0x100, 0x100, 0, memoryType, 1);
}
