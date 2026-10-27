/* NON_MATCHING: retail copies the five-word choice table with one ldm/stm through ip (base register in the data list); armcc here loads the table address into r0 and splits the copy into a 4-word ldm plus a separate word. */
#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {
s32 gameFlagIsSet(u32 flag);

/* Counts the set choice flags other than the one the script excludes. */
u32 scrCommCountFlagsExceptIndex(void)
{
    s32 count = 0;
    u32 choices[5] = { 0x37C, 0x37D, 0x37E, 0x37F, 0x308 };
    s32 excluded = scrGetArg(0);
    for (s32 i = 0; i < 5; ++i) {
        if (excluded != i && gameFlagIsSet(choices[i]))
            ++count;
    }
    scrSetResult(count);
    return 1;
}
}
