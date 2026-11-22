/* NON_MATCHING: 22 lines; all five category loops match byte-for-byte, remaining: retail hoists zero into r0 before push and puts the case-0/default pop before the jump table. */
#include "common.h"

extern "C" {
extern u32 DAT_0057f6f8[11];
extern u32 DAT_0057f724[11];
extern u32 DAT_0057f750[11];
extern u32 DAT_0057f77c[11];
extern u32 DAT_0057f7a8[11];
s32 flagValueRead(u32 id);
}

/* Sum the eleven member values in the requested roster category. */
extern "C" s32 FUN_00480738(s32 category)
{
    s32 total = 0;
    switch (category) {
    case 0:
        return 0;
    case 1:
        for (s32 i = 0; i < 11; ++i)
            total += flagValueRead(DAT_0057f6f8[i]);
        break;
    case 2:
        for (s32 i = 0; i < 11; ++i)
            total += flagValueRead(DAT_0057f724[i]);
        break;
    case 3:
        for (s32 i = 0; i < 11; ++i)
            total += flagValueRead(DAT_0057f750[i]);
        break;
    case 4:
        for (s32 i = 0; i < 11; ++i)
            total += flagValueRead(DAT_0057f77c[i]);
        break;
    case 5:
        for (s32 i = 0; i < 11; ++i)
            total += flagValueRead(DAT_0057f7a8[i]);
        break;
    }
    return total;
}
