#include "common.h"
#include "gamedata/NkmBaseRecord.h"

extern "C" {

s32 scrGetArg(u32 index);
void scrSetResult(s32 result);

/* Script command: returns the race of the devil record with the given id. */
u32 scrComm_Devil_GetRecordByte2(void)
{
    scrSetResult(nkmBaseGetRecord((u16)scrGetArg(0))->race);
    return 1;
}

} /* extern "C" */
