/* NON_MATCHING: retail uses b.n e where the compiled block uses push {r4, r5, r6}. */
#include "common.h"

extern "C" u32* FUN_00135b02(const u32* first, const u32* last, u32* destinationEnd)
{
    if (first != last) {
        do {
            --last;
            --destinationEnd;
            *destinationEnd = *last;
        } while (first != last);
    }
    return destinationEnd;
}
