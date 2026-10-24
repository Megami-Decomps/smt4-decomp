#include "common.h"

extern "C" {
s32 scrGetArg(s32 index);
void scrSetResult(s32 result);
s32 randNextInRange(u16 range);

// Tests a script-supplied chance against a random value in the supplied range.
u32 scrCommTestChance(void)
{
    s32 chance = scrGetArg(0);
    s32 range = scrGetArg(1);
    if (chance >= range) {
        scrSetResult(1);
        return 1;
    }
    scrSetResult(randNextInRange(static_cast<u16>(range)) < chance);
    return 1;
}
}
