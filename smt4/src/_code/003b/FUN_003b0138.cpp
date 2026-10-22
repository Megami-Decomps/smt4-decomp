#include "shard/Shard003B.h"

/* Consume a complete two-byte pair, retaining a partial first byte at EOF. */
extern "C" s32 FUN_003b0138(PoolBytePair *view, const u8 *input, u32 count)
{
    if (count != 0) {
        view->first = *input++;
        if (--count != 0) {
            view->second = *input;
            return 2;
        }
    }
    return -1;
}
