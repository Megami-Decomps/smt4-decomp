#include "common.h"
#include <new>

extern "C" {

/* Copies [first, last) to the raw storage at dest and returns the end of the copy. */
u32 *FUN_003077ce(const u32 *first, const u32 *last, u32 *dest)
{
    while (first != last) {
        new (dest) u32(*first);
        ++first;
        ++dest;
    }
    return dest;
}

} /* extern "C" */
