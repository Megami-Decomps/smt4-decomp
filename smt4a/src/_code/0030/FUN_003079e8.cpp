/* NON_MATCHING: retail enters the loop with a branch to the bottom test; the built loop pre-tests the range with cmp/beq. */
#include "common.h"

extern "C" {

/* Opaque 28-byte element. */
typedef struct {
    u8 data[28];
} Element;

int FUN_00301e56(u32 allocator, Element *dest, Element *source);

/* Constructs a copy of each element of [first, last) at `dest`; returns the end of the copied range. */
Element *FUN_003079e8(Element *first, Element *last, Element *dest, u32 allocator)
{
    while (first != last) {
        FUN_00301e56(allocator, dest, first);
        ++first;
        ++dest;
    }
    return dest;
}

} /* extern "C" */
