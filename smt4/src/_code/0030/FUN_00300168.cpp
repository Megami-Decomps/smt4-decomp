#include "common.h"
#include "gamedata/Table00Lookup.h"

extern "C" {

s32 scrGetArg(u32 index);
void scrSetResult(s32 result);

/* Script command: returns the word at offset 0x78 of the data table 0 entry with the given id. */
u32 FUN_00300168(void)
{
    scrSetResult(dataTable00FindById(scrGetArg(0))->money);
    return 1;
}

} /* extern "C" */
