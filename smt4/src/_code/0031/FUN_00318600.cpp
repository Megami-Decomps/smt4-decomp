#include "common.h"
#include "gamedata/Table00Lookup.h"

extern "C" {

s32 scrGetArg(u32 index);
void scrSetResult(s32 result);

/* Script command: returns the halfword at offset 0xA0 of the data table 0 entry with the given id. */
u32 FUN_00318600(void)
{
    scrSetResult(dataTable00FindById((u16)scrGetArg(0))->selectionId);
    return 1;
}

} /* extern "C" */
