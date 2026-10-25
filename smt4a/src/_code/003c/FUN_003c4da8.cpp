/* NON_MATCHING: branch layout: retail shares the `return 1` tail and the record->id load across
 * paths (branching back to them); the build duplicates them. Logic and registers match. */
#include "shard/X14_EngineUnits.h"
#include "script/ScriptArgs.h"

extern "C" {

EngineUnitRecord *gameGetSlotRecord(void);
EngineUnitRecord *FUN_003e503c(u16 index);
u8 flagAt4IsClearOrMissing(void);
u32 uiSelectedRecordGetFirst(void);

extern EngineUnitsRef g_engineCleanupOwner;

/* Script command: returns the active unit's id (argument set) or its record's id; without a unit
 * table, the selected record's id, or 0 when the flag is clear. */
u32 FUN_003c4da8(void)
{
    s32 arg = scrGetArg(0);
    EngineUnits *table = g_engineCleanupOwner.instance;
    u32 result;

    if (table != NULL) {
        EngineUnit *unit = &table->units[table->current];

        if (arg != 0) {
            result = unit->id;
        } else {
            EngineUnitRecord *record;
            if (unit->rank >= 25) {
                s32 index = unit->rank - 25;
                if (index < 0) {
                    index = 0;
                }
                record = FUN_003e503c(index);
            } else {
                record = gameGetSlotRecord();
            }
            result = record->id;
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
