/* Matches with -Ospace (requested): the container code was built for size. */
/* Copies the 8-byte elements in [first, last) one by one through pairCopyIfNotNull into the output run starting at `out`; returns the end of the output. */
#include "common.h"

extern "C" {

extern void pairCopyIfNotNull(u32 allocator, u8 *dest, u8 *src);

u8 *FUN_0030774e(u8 *first, u8 *last, u8 *out, u32 allocator)
{
    while (first != last) {
        pairCopyIfNotNull(allocator, out, first);
        first += 8;
        out += 8;
    }
    return out;
}

}
