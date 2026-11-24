#include "code/Code003a.h"
#include "gamedata/SaveSlotRecord.h"
#include "script/ScriptArgs.h"
#include "shard/S1ArousalSkill.h"
#include "shard/X14_EngineUnits.h"

/* Publishes the selected unit's skill, or the overlay's skill when no result panel is active. */
extern "C" u32 FUN_003cda78(void)
{
    const EngineCleanupOwner *owner = &g_engineCleanupOwner;
    if (owner->instance != NULL) {
        ResultWorkA *result = owner->instance;
        const EngineUnit *unit = result->selectedUnit();
        SlotRecordA *record = gameGetSlotRecord(unit->rank);
        u32 index = FUN_003a7b74();
        scrSetResult(record->skills[index]);
    } else if (owner->scene != NULL) {
        scrSetResult(((const ArousalSkillScene *)owner->scene)->unk3A);
    }
    return 1;
}
