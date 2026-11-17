#include "common.h"
#include "gamedata/Table00Lookup.h"

extern "C" {

s32 scrGetArg(s32 index);
void scrSetResult(s32 result);

/* Script command: reports the halfword at 0x88 of the data table entry with the given id. */
u32 FUN_003b1a00(void)
{
    scrSetResult(static_cast<u16>(dataTable00FindById(static_cast<u16>(scrGetArg(0)))->portraitId)); // read unsigned here
    return 1;
}

} /* extern "C" */
