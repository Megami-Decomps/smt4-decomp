/* NON_MATCHING: retail uses push {r2, r3, r4, r5, r6, lr} where the compiled block uses push {r4, r5, lr}. */
#include "common.h"

struct Range {
    u32 first; // 0x00
    u32 last;  // 0x04
};

extern "C" {
extern u8 LAB_00100d79;

u32 FUN_002e31ba(u32 context, Range* range, u32 options, u8* data);
s32 FUN_002e31e0(u32 mode, Range* range);

u32 FUN_00100348(u32 first, u32 count, u32 context, u32 options)
{
    Range range;
    range.first = first;
    range.last = count != 0 ? first + count - 1 : first;

    u32 result = FUN_002e31ba(context, &range, options, &LAB_00100d79);
    if (count != 0) {
        FUN_002e31e0(0, &range);
    }
    return result;
}
}
