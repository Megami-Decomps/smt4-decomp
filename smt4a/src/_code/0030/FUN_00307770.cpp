#include "common.h"

struct Elem8 {
    u32 words[2];
};

extern "C" {

void FUN_0030d010(void *allocator, Elem8 *dest, const Elem8 *source);

/* Copy-constructs [first, last) into dest through the allocator and returns the end of the copy. */
Elem8 *FUN_00307770(const Elem8 *first, const Elem8 *last, Elem8 *dest, void *allocator)
{
    for (; first != last; ++first, ++dest) {
        FUN_0030d010(allocator, dest, first);
    }
    return dest;
}

} /* extern "C" */
