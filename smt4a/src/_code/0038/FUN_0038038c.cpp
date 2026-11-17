#include "gamedata/DevilRecordA.h"

extern "C" {

s32 scrGetArg(u32 index);
s32 scrSetResult(s32 value);

/* Script command: returns the voice category of the demon whose id is argument zero. */
s32 FUN_0038038c(void)
{
    scrSetResult(devilGetRecord((u16)scrGetArg(0))->voiceCategory);
    return 1;
}

} /* extern "C" */
