#include "common.h"

extern "C" {

s32 eventIsSkipping(void);
s32 scrGetCommandFrame(void);
s32 scrGetArg(...);

/* Script check: returns 0 when the script has arguments, scrGetCommandFrame is below argument 0 and either eventIsSkipping reports 0 or scrGetCommandFrame is below 1; otherwise 1. */
u32 FUN_00275abc(void)
{
    s32 value;
    s32 limit;

    value = scrGetArg(0);
    if (0 < value) {
        value = scrGetCommandFrame();
        limit = scrGetArg(0);
        if ((value < limit) &&
            ((value = eventIsSkipping(), value == 0 || (value = scrGetCommandFrame(), value < 1)))) {
            return 0;
        }
    }
    return 1;
}

} /* extern "C" */
