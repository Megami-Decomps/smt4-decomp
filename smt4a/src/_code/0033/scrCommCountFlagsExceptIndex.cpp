#include "common.h"
#include "script/ScriptArgs.h"

/* The five saved flags checked by this script command. */
struct ChoiceFlagTable {
    u32 ids[5];
};

extern "C" {
extern const ChoiceFlagTable g_countedChoiceFlags;
s32 gameFlagIsSet(u32 flag);

/* Counts the set choice flags other than the one the script excludes. */
u32 scrCommCountFlagsExceptIndex(void)
{
    s32 count = 0;
    const ChoiceFlagTable choices = g_countedChoiceFlags;
    s32 excluded = scrGetArg(0);
    s32 i = 0;
    while (i < 5) {
        if (excluded != i && gameFlagIsSet(choices.ids[i])) {
            ++count;
        }
        ++i;
    }
    scrSetResult(count);
    return 1;
}
} /* extern "C" */
