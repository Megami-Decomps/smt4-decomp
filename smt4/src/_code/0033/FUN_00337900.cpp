/* NON_MATCHING: free-record signed load, null-check placement and cold initialization layout differ. */
#include "shard/W4_Match6_BtlScript.h"
#include "battle/btlMain.h"
#include "shard/W4_Match6_BtlEntry.h"

/* Find or allocate a unit's script-status record and latch the requested status. */
extern "C" void FUN_00337900(BtlMainState *script, const BtlEntry *unit, s32 status)
{
    BtlScriptStatusRecord *record = NULL;
    u32 flags = unit->flags;
    for (s32 i = 0; i < 128; ++i) {
        BtlScriptStatusRecord *candidate = &script->unitStatus.records[i];
        if (flags & 2) {
            if (candidate->unitId == -1) {
                record = candidate;
                break;
            }
        } else if ((flags & 0x38) && candidate->unitId == unit->id) {
            record = candidate;
            break;
        }
    }
    if (record == NULL) {
        for (s32 i = 0; i < 128; ++i) {
            BtlScriptStatusRecord *candidate = &script->unitStatus.records[i];
            if (candidate->unitId == 0 && candidate->flags == 0) {
                record = candidate;
                break;
            }
        }
        if (record == NULL)
            return;
        if (flags & 2) {
            record->unitId = -1;
            record->flags = 2;
        } else {
            record->unitId = unit->id;
            flags = unit->flags;
            if (flags & 8)
                record->flags = 8;
            else if (flags & 0x10)
                record->flags = 0x10;
            else if (flags & 0x20)
                record->flags = 0x20;
        }
    }
    if (status == 1)
        record->statusA = 1;
    else if (status == 2)
        record->statusB = 1;
}
