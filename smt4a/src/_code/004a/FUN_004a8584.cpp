/* NON_MATCHING: party lookup retains a separate null result and hoists the count address, changing registers and stack alignment. */
#include "camp/UnitComparison.h"
#include "shard/Shard0031.h"
#include "shard/Shard0032.h"
#include "gamedata/DevilRecordA.h"

extern "C" {
Table01Record *FUN_00180118(u16);
void FUN_0035ad50(u32, UnitRecord *);
s32 recordGetScaledMaximum(const UnitRecord *);
SlotTable *gameGetSlotTable();

void FUN_004a8584(CampUnitComparison *row, u32 id, s32 compareParty)
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

        /* Party count is past the shared SlotTable prefix. */
        struct PartyCountView {
            SlotTable table;
            s8 reserve[3];
            u8 count;
        };
        typedef char PartyCountOffset[offsetof(PartyCountView, count) == 0x1CA3 ? 1 : -1];
        PartyCountView *party = (PartyCountView *)gameGetSlotTable();
        UnitRecord *current = NULL;
        for (u16 i = 0; i < party->count; ++i) {
            s32 slot = party->table.slots[i];
            if (slot >= 0) {
                UnitRecord *unit = (UnitRecord *)&party->table.entries[slot];
                if (unit->id == id) {
                    current = unit;
                    break;
                }
            }
        }
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
