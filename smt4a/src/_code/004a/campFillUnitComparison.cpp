#include "camp/UnitComparison.h"
#include "shard/campFillUnitComparison.h"
#include "shard/Shard0031.h"
#include "shard/Shard0032.h"
#include "gamedata/DevilRecordA.h"
#include "gamedata/SaveSlotTable.h"

struct PartyComparisonTable : PartyStatusSlots {
    s8 count;
};
typedef char PartyComparisonCountOffset[offsetof(PartyComparisonTable, count) == 0x1CA3 ? 1 : -1];


static inline UnitRecord *findComparisonPartyUnit(u32 id)
{
    PartyComparisonTable *party = (PartyComparisonTable *)gameGetSlotTable();
    for (u16 i = 0; i < static_cast<u8>(party->count); ++i) {
        s32 slot = party->active.slots[i];
        if (slot >= 0) {
            UnitRecord *unit = (UnitRecord *)&party->active.entries[slot];
            if (unit->id == id) {
                return unit;
            }
        }
    }
    return NULL;
}

extern "C" {
Table01Record *FUN_00180118(u16);
void FUN_0035ad50(u32, UnitRecord *);
s32 recordGetScaledMaximum(const UnitRecord *);

void campFillUnitComparison(CampUnitComparison *row, u32 id, s32 compareParty)
{
    DevilRecordA *metadata = FUN_00184310(id);
    row->id = metadata->id;
    row->race = metadata->race;
    row->category = metadata->unk08[0];
    row->kind = metadata->categoryView.category;
    row->description = FUN_00180118(metadata->id);
    row->flags = 0;
    UnitRecord saved;
    if (compareParty) {
        FUN_0035ad50(id, &saved);
        row->level = saved.unk64;
        row->maximum = recordGetScaledMaximum(&saved);
        row->secondaryMaximum = saved.unk10;

        UnitRecord *current = findComparisonPartyUnit(id);
        row->otherLevel = current->unk64;
        row->otherMaximum = recordGetScaledMaximum(current);
        row->otherSecondaryMaximum = current->unk10;
    } else {
        FUN_0035ad50(id, &saved);
        row->level = saved.unk64;
        row->maximum = recordGetScaledMaximum(&saved);
        row->secondaryMaximum = saved.unk10;
        FUN_0035ad50(id, &saved);
        row->otherLevel = saved.unk64;
        row->otherMaximum = recordGetScaledMaximum(&saved);
        row->otherSecondaryMaximum = saved.unk10;
    }
}
}
