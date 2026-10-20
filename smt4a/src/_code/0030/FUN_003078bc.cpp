/* NON_MATCHING: retail enters the loop with a branch to the bottom test; the built loop pre-tests the range with cmp/beq. */
#include "common.h"

extern "C" {

/* Opaque 12-byte element. */
typedef struct {
    u8 data[12];
} Element;

int FUN_0030d02e(u32 allocator, Element *dest, Element *source);

/* Constructs a copy of each element of [first, last) at `dest`; returns the end of the copied range. */
Element *FUN_003078bc(Element *first, Element *last, Element *dest, u32 allocator)
{
    while (first != last) {
        FUN_0030d02e(allocator, dest, first);
        ++first;
        ++dest;
    }
    return dest;
}

} /* extern "C" */
