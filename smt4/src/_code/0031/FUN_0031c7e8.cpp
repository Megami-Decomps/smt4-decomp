#include "battle/BtlMainAccess.h"
#include "common.h"
#include "script/ScriptArgs.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"

extern "C" {


s32 scrGetArg(s32 index);

/* Script command: sets the result to 1 when the live, non-excluded unit with id `arg0` has a positive stat (arg 1: 0 -> 7, 1 -> 10, 2 -> 11). */
u32 FUN_0031c7e8(void)
{
    u32 id = scrGetArg(0);
    s32 arg = scrGetArg(1);
    s32 stat = 0;
    s32 i;

    if (arg == 0) {
        stat = 7;
    } else if (arg == 1) {
        stat = 10;
    } else if (arg == 2) {
        stat = 11;
    }
    for (i = 0; i < 109; i++) {
        BtlEntry *unit = &btlGetMainState()->entries[i];

        if ((unit->flags & 0x10) != 0 && (unit->flags & 1) != 0 && (unit->flags & 0x40) == 0 && unit->id == id && unit->stat[stat] >= 1) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
