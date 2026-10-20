/* NON_MATCHING: loop shape only: retail enters the loop with `b.n` to the bottom test, built tests first (`cmp; beq`) */
/* Copies the 12-byte elements in [first, last) one by one through vectorCopyHeader into the output run starting at `out`; returns the end of the output. */
#include "common.h"

extern "C" {

extern void vectorCopyHeader(u32 allocator, u8 *dest, u8 *src);

u8 *FUN_00307900(u8 *first, u8 *last, u8 *out, u32 allocator)
{
    while (first != last) {
        vectorCopyHeader(allocator, out, first);
        first += 12;
        out += 12;
    }
    return out;
}

}
