/* NON_MATCHING: population counting uses an ascending bound instead of a countdown; signed-mask registers and result allocation differ. */
#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {
s32 FUN_00184964(s32 minimum, s32 maximum);

// Pick an ordinal among the set bits in two script masks, then return its bit index.
u32 FUN_0038dc84(void)
{
    s64 first = scrGetArg(0);
    s64 second = scrGetArg(1);
    s32 count = 0;
    if (first == 0 && second == 0) {
        scrSetResult(0);
        return 1;
    }
    for (u32 bit = 0; bit < 32; ++bit) {
        s32 mask = 1 << bit;
        if (mask & (first) != 0) {
            ++count;
        }
        if (mask & (second) != 0) {
            ++count;
        }
    }
    s32 ordinal = FUN_00184964(0, count - 1);
    s32 seen = 0;
    s32 result = 0;
    for (s32 bit = 0; bit < 32; ++bit) {
        if ((first & (1 << bit)) != 0) {
            if (ordinal == seen) {
                result = bit;
                break;
            }
            ++seen;
        }
    }
    // Zero also acts as the not-found sentinel, including when the first mask selected bit zero.
    if (result == 0) {
        for (s32 bit = 0; bit < 32; ++bit) {
            if ((second & (1 << bit)) != 0) {
                if (ordinal == seen) {
                    result = bit + 32;
                    break;
                }
                ++seen;
            }
        }
    }
    scrSetResult(result);
    return 1;
}
}
