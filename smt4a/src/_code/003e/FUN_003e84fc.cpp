#include "shard/W6_W6Match5_UnitCategory.h"

// Test whether the script-selected unit's record belongs to category four.
extern "C" s32 FUN_003e84fc(void)
{
    ScriptCategoryUnit *unit = reinterpret_cast<ScriptCategoryUnit *>(btlUnitGet(reinterpret_cast<BtlMainStateA *const *>(g_btlScriptUnit)));
    if (unit == NULL)
        return 0;
    if (unit->state == NULL)
        return 0;
    UnitCategoryRecord *record = unit->state->record;
    if (record == NULL)
        return 0;
    return unitMapIdToCategory(record->id, 0) == 4;
}
