/* NON_MATCHING: loop shape only: retail enters the loop with `b.n` to the bottom test, built tests first (`cmp; beq`) */
/* Copies the 8-byte elements in [first, last) one by one through FUN_002efb90 into the output run starting at `out`; returns the end of the output. */
#include "common.h"

extern "C" {

extern void FUN_002efb90(u32 allocator, u8 *dest, u8 *src);

u8 *FUN_0030774e(u8 *first, u8 *last, u8 *out, u32 allocator)
{
    while (first != last) {
        FUN_002efb90(allocator, out, first);
        first += 8;
        out += 8;
    }
    return out;
}

}
