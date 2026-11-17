#include "gamedata/DevilRecordA.h"

extern "C" {
s32 scrGetArg(u32 index);
void scrSetResult(s32 result);

/* Script command: sets the result to the byte at 2 of the record devilGetRecord finds for its first argument. */
s32 FUN_00380368(void)
{
    scrSetResult(devilGetRecord((u16)scrGetArg(0))->race);
    return 1;
}
}
