/* NON_MATCHING: compiler merges repeated event category tests and uses unsigned range branches. */
#include "common.h"

extern "C" {
u32 FUN_00280bc0(void);
void FUN_0037aaec(s32, s32 *);

// Classify the current event, optionally clearing the output for transition events.
s32 FUN_002ef7f0(u32 unused, s32 *output)
{
    s32 result = 2;
    s32 event = FUN_00280bc0();
    if ((s32)(event & 0x80000000) >= 0)
        return 0;
    s32 category = (event & 0x3fc00) >> 10;
    if (category == 17 && (s32)(event & 0x3ff) >= 100 && (s32)(event & 0x3ff) <= 179) {
        result = 3;
    } else if (category == 17 && (s32)(event & 0x3ff) >= 180 && (s32)(event & 0x3ff) <= 199) {
        // These events retain the default classification.
    } else if (category == 17 && (s32)(event & 0x3ff) >= 390 && (s32)(event & 0x3ff) < 400) {
        if (output != NULL)
            FUN_0037aaec(0, output);
        result = 1;
    } else if (category == 17 && (s32)(event & 0x3ff) >= 230 && (s32)(event & 0x3ff) < 340) {
        // These events retain the default classification.
    } else if (category == 17 && (s32)(event & 0x3ff) >= 200 && (s32)(event & 0x3ff) <= 219) {
        if (output != NULL)
            FUN_0037aaec(0, output);
        result = 1;
    }
    return result;
}
}
