#include "gamedata/NkmBaseRecordA.h"

extern "C" {
s32 scrGetArg(u32 index);
void scrSetResult(s32 result);

/* Script command: sets the result to the byte at 2 of the record nkmBaseGetRecord finds for its first argument. */
s32 FUN_00380368(void)
{
    scrSetResult(nkmBaseGetRecord((u16)scrGetArg(0))->race);
    return 1;
}
}
