#include "common.h"
#include "gamedata/DevilRecord.h"

extern "C" {

s32 scrGetArg(u32 index);
s32 scrSetResult(s32 value);

/* Script command: returns the alternate talk tone of the devil record in argument zero. */
s32 FUN_00318878(void)
{
    scrSetResult(devilGetRecord((u16)scrGetArg(0))->talkAlternate);
    return 1;
}

} /* extern "C" */
