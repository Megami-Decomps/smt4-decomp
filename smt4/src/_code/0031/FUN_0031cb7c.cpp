/* Reports through scrSetResult whether bit 8 of the record's flag halfword is set; always returns 1. */
#include "common.h"
#include "script/ScriptArgs.h"
#include "gamedata/Table00Lookup.h"

extern "C" {

extern s32 scrGetArg(s32 index);

u32 FUN_0031cb7c(void)
{
    scrSetResult((dataTable00FindById(scrGetArg(0))->flags >> 8) & 1);
    return 1;
}

}
