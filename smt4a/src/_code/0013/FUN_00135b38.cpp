/* NON_MATCHING: retail uses b.n a where the compiled block uses push {r4, r5}. */
#include "common.h"

extern "C" u8* FUN_00135b38(const u8* first, const u8* last, u8* destination)
{
    while (first != last) {
        *destination++ = *first++;
    }
    return destination;
}
