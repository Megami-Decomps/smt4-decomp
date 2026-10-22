/* NON_MATCHING: copied table load order, loop zero-choice branch, and saved-register selection differ. */
#include "common.h"

struct ScriptFlagChoices { u32 flags[7]; };
extern "C" {
extern const ScriptFlagChoices DAT_00531510;
s32 gameFlagIsSet(u32 flag);
s32 scrGetArg(u32 index);
void scrSetResult(s32 result);

/* Counts available choices other than the one supplied by the script. */
u32 FUN_00330dc4(void)
{
    ScriptFlagChoices choices = DAT_00531510;
    s32 excluded = scrGetArg(0);
    s32 count = 0;
    for (s32 i = 0; i < 7; ++i) {
        if (i != excluded && (i == 0 || gameFlagIsSet(choices.flags[i])))
            ++count;
    }
    scrSetResult(count);
    return 1;
}
}
