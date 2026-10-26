/* NON_MATCHING: retail copies the five-word table with one ldm/stm through ip; armcc here loads the table address into r0 and splits the copy into a 4-word ldm plus a separate word. */
#include "common.h"
#include "script/ScriptArgs.h"

struct ScriptFlagChoices { u32 flags[5]; };

extern "C" {
extern const ScriptFlagChoices DAT_0053152c;
s32 gameFlagIsSet(u32 flag);

/* Counts the set choice flags other than the one the script excludes. */
u32 scrCommCountFlagsExceptIndex(void)
{
    s32 count = 0;
    ScriptFlagChoices choices = DAT_0053152c;
    s32 excluded = scrGetArg(0);
    for (s32 i = 0; i < 5; ++i) {
        if (excluded != i && gameFlagIsSet(choices.flags[i]))
            ++count;
    }
    scrSetResult(count);
    return 1;
}
}
