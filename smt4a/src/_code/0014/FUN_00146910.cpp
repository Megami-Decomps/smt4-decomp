/* NON_MATCHING: sign tests now match (ands/bmi); retail lays the shrink path (second arm) out after the common return, armcc keeps it inline. */
#include "shard/GlobalBlocks.h"
#include "nn/Result.h"
extern "C" {
u32 FUN_0016236c(u32*, u32, u32, u32, u32, u32);

u32 FUN_00146910(u32 size)
{
    if ((size & 0xFFF) != 0) {
        return 0xE0E01BF2;
    }
    u32 address;
    u32 currentSize = g_nnosHeapState.unk08;
    u32 status;
    if (size > currentSize) {
        status = FUN_0016236c(&address, 0x08000000 + currentSize, 0,
            size - currentSize, 3, 3);
        if ((s32)(status & 0x80000000) < 0) {
            return status;
        }
    } else {
        status = FUN_0016236c(&address, 0x08000000 + size, 0,
            currentSize - size, 1, 0);
        if ((s32)(status & 0x80000000) < 0) {
            return status;
        }
    }
    g_nnosHeapState.unk08 = size;
    return status;
}
}
