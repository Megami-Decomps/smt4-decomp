#include "common.h"
#include "script/ScriptArgs.h"
#include "gamedata/NkmEnemyLookup.h"

extern "C" {

s32 scrGetArg(s32 index);

/* Script command: reports the halfword at 0x86 of the data table entry with the given id. */
u32 FUN_0031270c(void)
{
    scrSetResult(nkmEnemyFindById(static_cast<u16>(scrGetArg(0)))->successorId);
    return 1;
}

} /* extern "C" */
