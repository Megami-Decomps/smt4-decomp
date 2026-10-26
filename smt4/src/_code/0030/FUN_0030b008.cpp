#include "battle/BtlMainAccess.h"
#include "common.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "script/ScriptArgs.h"

extern "C" {



typedef struct DevilRecord {
    /* 0x0 */ u8 unk0[5];
    /* 0x5 */ s8 kind;
} DevilRecord;

DevilRecord *devilGetRecord(u32 id);

/* Script command: sets the result to 1 when some live, non-excluded unit's devil record has kind 1. */
u32 FUN_0030b008(void)
{
    s32 i = 0;

    do {
        BtlEntry *unit = &reinterpret_cast<BtlMainState *>(btlGetMainState())->entries[i];

        if ((unit->flags & 0x10) != 0 && (unit->flags & 1) != 0 && (unit->flags & 0x40) == 0) {
            if (devilGetRecord(unit->id)->kind == 1) {
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
