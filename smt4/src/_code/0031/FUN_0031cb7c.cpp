/* Reports through scrSetResult whether bit 8 of the record's flag halfword is set; always returns 1. */
#include "common.h"
#include "script/ScriptArgs.h"
#include "gamedata/NkmEnemyLookup.h"

extern "C" {


u32 FUN_0031cb7c(void)
{
    scrSetResult((nkmEnemyFindById((u16)scrGetArg(0))->flags >> 8) & 1);
    return 1;
}

}
