#include "common.h"
#include "script/ScriptArgs.h"

struct ScriptFlagChoices { u32 flags[7]; };
extern "C" {
extern const ScriptFlagChoices DAT_00531510;
s32 gameFlagIsSet(u32 flag);
void scrSetResult(s32 result);

/* Counts available choices other than the one supplied by the script. */
u32 scrCommCountChoiceFlagsExceptIndex(void)
{
    s32 count = 0;
    ScriptFlagChoices choices = DAT_00531510;
    s32 excluded = scrGetArg(0);
    for (s32 i = 0; i < 7; ++i) {
        if (excluded != i) {
            if (i == 0)
                ++count;
            else if (gameFlagIsSet(choices.flags[i]))
                ++count;
        }
    }
    scrSetResult(count);
    return 1;
}
}
