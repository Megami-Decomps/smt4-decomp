#include "shard/Shard003B.h"

/* Consume a complete two-byte pair, retaining a partial first byte at EOF. */
extern "C" s32 _ZN9Obj4224f86decodeEPKhj(PoolBytePair *view, const u8 *input, u32 count)
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
