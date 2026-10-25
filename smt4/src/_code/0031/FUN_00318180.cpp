#include "battle/BtlMainAccess.h"
#include "common.h"
#include "script/ScriptArgs.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"

extern "C" {



s32 scrGetArg(s32 index);

/* Script command: sets the result to 0 when the live, non-excluded unit with id `arg0` has bit `arg1` clear in its mask; 1 otherwise. */
u32 FUN_00318180(void)
{
    u32 id = scrGetArg(0);
    u32 bit = scrGetArg(1);
    s32 i;

    for (i = 0; i < 109; i++) {
        BtlEntry *unit = &reinterpret_cast<BtlMainState *>(btlGetMainState())->entries[i];

        if ((unit->flags & 0x10) != 0 && (unit->flags & 1) != 0 && (unit->flags & 0x40) == 0 && unit->id == id &&
            (unit->groupMask & (1 << (bit & 0xFF))) == 0) {
            scrSetResult(0);
            return 1;
        }
    }
    scrSetResult(1);
    return 1;
}

} /* extern "C" */
