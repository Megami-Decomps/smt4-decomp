#include "common.h"
#include "gamedata/Table00Lookup.h"

extern "C" {

s32 scrGetArg(u32 index);
s32 scrSetResult(s32 value);

/* Script command: returns the halfword at 0x8a of the data table entry for the id in argument zero. */
s32 FUN_003a9398(void)
{
    scrSetResult(dataTable00FindById(scrGetArg(0))->unk8A);
    return 1;
}

} /* extern "C" */
