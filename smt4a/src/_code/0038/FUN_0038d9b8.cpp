#include "common.h"
#include "gamedata/NkmEnemyLookup.h"

extern "C" {

s32 scrGetArg(s32 index);
void scrSetResult(s32 result);

/* Script command: reports the word at 0x7c of the data table entry with the given id. */
u32 FUN_0038d9b8(void)
{
    scrSetResult(nkmEnemyFindById(static_cast<u16>(scrGetArg(0)))->money);
    return 1;
}

} /* extern "C" */
