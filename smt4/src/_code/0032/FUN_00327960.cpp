#include "battle/BtlMainAccess.h"
#include "common.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "script/ScriptArgs.h"

extern "C" {


/* Script command: sets the result to 1 when some live, non-excluded unit has a positive primary or secondary value. */
u32 FUN_00327960(void)
{
    for (s32 i = 0; i < 109; i++) {
        BtlEntry *unit = &btlGetMainState()->entries[i];

        if ((unit->flags & 0x10) != 0 && (unit->flags & 1) != 0 && (unit->flags & 0x40) == 0 &&
            (unit->effects.primaryAlternate > 0 || unit->effects.secondaryAlternate > 0)) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
