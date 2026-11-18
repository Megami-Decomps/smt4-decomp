#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {
s32 randBetween(s32 minimum, s32 maximum);

// Pick an ordinal among the set bits in two script masks, then return its bit index.
u32 FUN_0038dc84(void)
{
    s64 first = scrGetArg(0);
    s64 second = scrGetArg(1);
    s32 result = 0;
    s32 count = 0;
    if (first == 0 && second == 0) {
        scrSetResult(0);
        return 1;
    }
    for (s32 bit = 0; bit < 32; ++bit) {
        if ((first & (1 << bit)) != 0) {
            ++count;
        }
        if ((second & (1 << bit)) != 0) {
            ++count;
        }
    }
    s32 ordinal = randBetween(0, count - 1);
    // The counter is reused to number the set bits while scanning for the chosen one.
    count = 0;
    for (s32 bit = 0; bit < 32; ++bit) {
        if ((first & (1 << bit)) != 0) {
            if (ordinal == count) {
                result = bit;
                break;
            }
            ++count;
        }
    }
    // Zero also acts as the not-found sentinel, including when the first mask selected bit zero.
    if (result == 0) {
        for (s32 bit = 0; bit < 32; ++bit) {
            if ((second & (1 << bit)) != 0) {
                if (ordinal == count) {
                    result = bit + 32;
                    break;
                }
                ++count;
            }
        }
    }
    scrSetResult(result);
    return 1;
}
}
