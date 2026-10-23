/* NON_MATCHING: range-loop branch layout, saved registers and successful-return epilogues differ. */
#include "sys/FlagBlockPool.h"

static inline FlagPoolBlock *allocateRange(FlagBlockPool *pool, u32 begin, u32 end, s32 count)
{
    u8 *occupied = pool->occupied;
    while (begin < end) {
        s32 length = 0;
        while (begin + length < end && occupied[begin + length] == 0) {
            ++length;
            if (length == count) {
                for (u32 index = begin; index < begin + count; ++index)
                    occupied[index] = 1;
                pool->cursor = begin + count;
                return &pool->blocks[begin];
            }
        }
        begin += length + 1;
    }
    return NULL;
}

extern "C" {
// Find a contiguous free run after the cursor, then wrap and search the earlier region.
FlagPoolBlock *FUN_004387f0(FlagBlockPool *pool, s32 count)
{
    FlagPoolBlock *blocks = allocateRange(pool, pool->cursor, 0xA40, count);
    if (blocks != NULL)
        return blocks;
    return allocateRange(pool, 0, pool->cursor, count);
}
}
