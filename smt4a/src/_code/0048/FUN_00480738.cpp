/* NON_MATCHING: switch default-result initialization and inlined roster-sum loop registers differ. */
#include "common.h"

extern "C" {
extern u32 DAT_0057f6f8[11];
extern u32 DAT_0057f724[11];
extern u32 DAT_0057f750[11];
extern u32 DAT_0057f77c[11];
extern u32 DAT_0057f7a8[11];
s32 FUN_001ba3d4(u32 id);
}

static __inline s32 sumMemberValues(const u32 *members)
{
    s32 total = 0;
    for (s32 i = 0; i < 11; ++i)
        total += FUN_001ba3d4(members[i]);
    return total;
}

// Sum the eleven member values in the requested roster category.
extern "C" s32 FUN_00480738(s32 category)
{
    switch (category) {
    case 1: return sumMemberValues(DAT_0057f6f8);
    case 2: return sumMemberValues(DAT_0057f724);
    case 3: return sumMemberValues(DAT_0057f750);
    case 4: return sumMemberValues(DAT_0057f77c);
    case 5: return sumMemberValues(DAT_0057f7a8);
    default: return 0;
    }
}
