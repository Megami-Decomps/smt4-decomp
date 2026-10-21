/* NON_MATCHING: retail uses push {r4, r5, r6, lr} where the compiled block uses push {r4, r5, r6}. */
#include "common.h"

struct WordRange {
    u32* begin; // 0x00
    u32* end;   // 0x04
};

extern "C" u32* FUN_00134dcc(WordRange* range, u32* first, u32* last)
{
    u32* oldEnd = range->end;
    if (range->begin != oldEnd) {
        u32* source = last;
        u32* destination = first;
        if (source != oldEnd) {
            do {
                *destination++ = *source++;
            } while (source != oldEnd);
        }

        oldEnd = range->end;

        range->end = oldEnd - (last - first);
    }
    return first;
}
