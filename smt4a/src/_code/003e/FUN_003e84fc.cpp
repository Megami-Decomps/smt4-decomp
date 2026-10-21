/* NON_MATCHING: equality normalization branches around a zero move instead of emitting retail's conditional movne. */
#include "shard/W6_W6Match5_UnitCategory.h"

// Test whether the script-selected unit's record belongs to category four.
extern "C" s32 FUN_003e84fc(void)
{
    ScriptCategoryUnit *unit = btlUnitGet(g_btlScriptUnit);
    if (unit == NULL || unit->state == NULL)
        return 0;
    UnitCategoryRecord *record = unit->state->record;
    if (record == NULL)
        return 0;
    return FUN_0019acdc(record->id, 0) == 4;
}
