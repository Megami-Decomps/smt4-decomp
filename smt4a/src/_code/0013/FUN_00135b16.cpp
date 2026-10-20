/* Built with -Ospace (see flags_W4Match4b.txt). */
/* Copies the 8-byte elements in [first, last) one by one through FUN_0030d3ba into the output run starting at `out`; returns the end of the output. */
#include "common.h"

extern "C" {

extern void FUN_0030d3ba(u32 allocator, u8 *dest, u8 *src);

u8 *FUN_00135b16(u8 *first, u8 *last, u8 *out, u32 allocator)
{
    while (first != last) {
        FUN_0030d3ba(allocator, out, first);
        first += 8;
        out += 8;
    }
    return out;
}

}
