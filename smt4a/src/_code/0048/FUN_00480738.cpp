/* NON_MATCHING: roster-sum loop saved registers (total/index) are swapped and the zero result is not hoisted above the prologue. */
#include "common.h"

extern "C" {
extern u32 DAT_0057f6f8[11];
extern u32 DAT_0057f724[11];
extern u32 DAT_0057f750[11];
extern u32 DAT_0057f77c[11];
extern u32 DAT_0057f7a8[11];
s32 FUN_001ba3d4(u32 id);
}

static s32 addMemberValues(s32 total, const u32 *members)
{
    for (s32 i = 0; i < 11; ++i)
        total += FUN_001ba3d4(members[i]);
    return total;
}

// Sum the eleven member values in the requested roster category.
extern "C" s32 FUN_00480738(s32 category)
{
    s32 total = 0;
    switch (category) {
    case 1: total = addMemberValues(total, DAT_0057f6f8); break;
    case 2: total = addMemberValues(total, DAT_0057f724); break;
    case 3: total = addMemberValues(total, DAT_0057f750); break;
    case 4: total = addMemberValues(total, DAT_0057f77c); break;
    case 5: total = addMemberValues(total, DAT_0057f7a8); break;
    default: return 0;
    }
    return total;
}
