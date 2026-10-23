#include "gamedata/SavedUnitInitialization.h"
#include "gamedata/UnitStats.h"
#include "gamedata/DevilRecord.h"

extern "C" {
bool gameRecordCopy(u32 id, RecordValue *record);
void memClear(void *destination, u32 size);
void bitsetSetBit(StatBlock *unit, u32 flag);
void unitRecalculateEffectiveStats(StatBlock *unit);

// Rebuild a runtime unit from its saved level, base stats, skills and experience.
void unitInitializeFromSavedRecord(u16 id, StatBlock *unit)
{
    const DevilRecord *devil = (const DevilRecord *)devilGetRecord(id);
    SavedUnitInitialization saved;
    gameRecordCopy(id, &saved.record);
    memClear(unit, sizeof(*unit));
    unit->id = id;
    unit->level = saved.values.level;
    unit->summary.id = saved.values.id;
    unit->summary.kind = saved.values.kind;
    unit->summary.stats[0] = saved.values.stats[0];
    unit->summary.stats[2] = saved.values.stats[2];
    unit->summary.stats[3] = saved.values.stats[3];
    unit->summary.stats[4] = saved.values.stats[4];
    unit->summary.stats[1] = saved.values.stats[1];
    unit->cur[0] = 0;
    unit->cur[1] = 0;
    unit->cur2 = saved.values.current[0];
    unit->cur3 = saved.values.current[2];
    unit->cur4 = saved.values.current[3];
    unit->cur5 = saved.values.current[4];
    unit->cur6 = saved.values.current[1];
    for (u32 index = 0; index < 8; ++index) {
        unit->skills.ids[index] = saved.values.skills[index];
    }
    unit->experience = saved.values.experience;
    unit->encounter.initialization.initializationKind = (saved.values.flags >> 2) & 0xF;
    bitsetSetBit(unit, devil->initialization.innateFlag);
    unitRecalculateEffectiveStats(unit);
    unit->copy0 = unit->unk0E;
    unit->copy1 = unit->unk10;
}
}
