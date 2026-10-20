#include "shard/Shard0037.h"

extern "C" {

extern s32 scrGetArg(s32 index);
extern void FUN_00232388(s32 value);
extern s32 *gameGetSlotTable(void);
extern void scrSetResult(s32 value);

/* Script command: result is true when the party's first word is at most argument 0. */
u32 scrCommPartyWordAtMost(s32 argIndex)
{
    s32 limit = scrGetArg(argIndex);

    FUN_00232388(scrGetArg(1));
    scrSetResult(*gameGetSlotTable() <= limit);
    return 1;
}

} /* extern "C" */
