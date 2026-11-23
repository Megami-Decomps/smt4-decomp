#include "camp/UnitComparison.h"
#include "camp/CampStateQueries_UnitComparison.h"
#include "shard/Shard0032.h"
#include "gamedata/NkmBaseRecordA.h"
#include "gamedata/SaveSlotTable.h"
#include "addon/LookupRecord.h"

extern "C" {
void unitRecordBuildFromSave(u32, UnitRecord *);
s32 recordGetScaledMaximum(const UnitRecord *);

void campFillUnitComparison(CampUnitComparison *row, u32 id, s32 compareParty)
{
    NkmBaseRecordA *metadata = nkmBaseGetRecord(id);
    row->id = metadata->id;
    row->race = metadata->race;
    row->category = metadata->unk08;
    row->kind = metadata->category;
    row->description = dataTable01GetRecordWithAocOverride(metadata->id);
    row->flags = 0;
    UnitRecord saved;
    if (compareParty) {
        unitRecordBuildFromSave(id, &saved);
        row->level = saved.level;
        row->maximum = recordGetScaledMaximum(&saved);
        row->secondaryMaximum = saved.maxMp;

        UnitRecord *current = saveSlotTableFindPartyUnit(id);
        row->otherLevel = current->level;
        row->otherMaximum = recordGetScaledMaximum(current);
        row->otherSecondaryMaximum = current->maxMp;
    } else {
        unitRecordBuildFromSave(id, &saved);
        row->level = saved.level;
        row->maximum = recordGetScaledMaximum(&saved);
        row->secondaryMaximum = saved.maxMp;
        unitRecordBuildFromSave(id, &saved);
        row->otherLevel = saved.level;
        row->otherMaximum = recordGetScaledMaximum(&saved);
        row->otherSecondaryMaximum = saved.maxMp;
    }
}
}
