#include "battle/BtlMainAccess.h"
#include "common.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"

extern "C" {


s32 scrSetResult(s32 value);
u32 scrGetArg(u32 index);

/* Script command: sets the result to 1 when some live, non-excluded unit has not got bit `arg0` set in its mask. */
u32 scrCommHasUnitWithoutMaskBit(void)
{
    u32 bit = scrGetArg(0);
    s32 i;

    for (i = 0; i < 109; i++) {
        BtlEntry *unit = &btlGetMainState()->entries[i];

        if ((unit->flags & 0x10) != 0 && (unit->flags & 1) != 0 && (unit->flags & 0x40) == 0 &&
            (unit->groupMask & (1 << (bit & 0xFF))) == 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
