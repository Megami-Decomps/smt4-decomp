#include "common.h"
#include "gamedata/DevilRecord.h"
#include "battle/btlMain.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "script/ScriptArgs.h"

extern "C" {

/* A battle unit slot (0x288 bytes): state flags at 0 and the devil id at 0xCE. */

BtlMainState *btlGetMainState(void);

/* Script command: result 1 if any live, active, non-excluded battle slot holds a devil of category 5. */
u32 FUN_002f6dc0(void)
{
    for (s32 i = 0; i < 109; i++) {
        BtlEntry *slot = &btlGetMainState()->entries[i];
        if ((slot->flags & 0x10) != 0 && (slot->flags & 1) != 0 && (slot->flags & 0x40) == 0) {
            if (devilGetRecord(slot->id)->category == 5) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
