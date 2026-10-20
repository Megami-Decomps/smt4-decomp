/* NON_MATCHING: retail enters the loop with a branch to the bottom test; the built loop pre-tests the range with cmp/beq. */
#include "common.h"

extern "C" {

/* Opaque 184-byte element. */
typedef struct {
    u8 data[184];
} Element;

int FUN_00311458(u32 allocator, Element *dest, Element *source);

/* Constructs a copy of each element of [first, last) at `dest`; returns the end of the copied range. */
Element *FUN_00307c28(Element *first, Element *last, Element *dest, u32 allocator)
{
    while (first != last) {
        FUN_00311458(allocator, dest, first);
        ++first;
        ++dest;
    }
    return dest;
}

} /* extern "C" */
