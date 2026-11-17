#include "battle/BtlMainAccess.h"
#include "gamedata/NkmBaseRecord.h"
#include "common.h"
#include "battle/BtlEntry.h"
#include "battle/btlMain.h"
#include "script/ScriptArgs.h"

extern "C" {

/* Script command: sets the result to 1 when some live, non-excluded unit's devil record has category 1. */
u32 FUN_0030b008(void)
{
    s32 i = 0;

    do {
        BtlEntry *unit = &reinterpret_cast<BtlMainState *>(btlGetMainState())->entries[i];

        if ((unit->flags & 0x10) != 0 && (unit->flags & 1) != 0 && (unit->flags & 0x40) == 0) {
            if (nkmBaseGetRecord(unit->data.id)->category == 1) {
                scrSetResult(1);
                return 1;
            }
        }
        i++;
    } while (i < 109);
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
