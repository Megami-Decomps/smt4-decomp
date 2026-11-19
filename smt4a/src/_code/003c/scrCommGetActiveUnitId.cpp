/* NON_MATCHING: the selected-record fallback duplicates the return and adds a compiler NOP before reporting its ID. */
#include "shard/X14_EngineUnits.h"
#include "script/ScriptArgs.h"
#include "gamedata/SaveSlotRecord.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {
u8 flagAt4IsClearOrMissing(void);
u32 uiSelectedRecordGetFirst(void);

/* Report the active unit's ID or its save record's ID. With no active unit table,
 * report the selected record's ID, or zero when selection is inactive. */
u32 scrCommGetActiveUnitId(void)
{
    s32 arg = scrGetArg(0);
    ResultWorkA *table = g_engineCleanupOwner.instance;
    u32 result;

    if (table != NULL) {
        EngineUnit *unit = table->selectedUnit();
        if (arg != 0) {
            result = unit->id;
        } else {
            s32 rank = unit->rank;
            if (rank >= 25) {
                s32 index = rank - 25;
                if (index < 0) {
                    index = 0;
                }
                result = partyGetSlotPreferredFirst(static_cast<u16>(index))->record.id;
            } else {
                result = gameGetSlotRecord(rank)->id;
            }
        }
    } else {
        if (flagAt4IsClearOrMissing() != 0) {
            scrSetResult(0);
            return 1;
        }
        result = uiSelectedRecordGetFirst();
    }
    scrSetResult(result);
    return 1;
}

} /* extern "C" */
