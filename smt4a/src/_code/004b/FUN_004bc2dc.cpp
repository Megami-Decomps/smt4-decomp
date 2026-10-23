/* NON_MATCHING: table base/candidate registers and result return storage differ. */
#include "battle/WeightedEncounter.h"
#include "gamedata/DataTable.h"
#include "gamedata/Table00.h"
extern "C" {
extern void *g_aocSystem;
s32 randRange(u16 maximum);
WeightedEncounterTable *resourceFindType27Record(void *system, u32 index);
WeightedEncounterGroup *FUN_004bb80c(u32 id);
Table00Record *dataTable00FindById(u32 id);

// Select an encounter by weight, excluding special portrait groups from the total when requested.
u32 FUN_004bc2dc(s32 tableIndex, s32 excludeSpecial)
{
    u32 selected = 0;
    void *section = dataTableGet(2, 1);
    WeightedEncounterTable *table = (WeightedEncounterTable *)dataTableGetEntries(section);
    if (tableIndex >= 0 && (u32)tableIndex < dataTableGetCount(section)) {
        WeightedEncounterTable *overrideTable = resourceFindType27Record(g_aocSystem, tableIndex);
        table = overrideTable ? overrideTable : &table[tableIndex];
    }
    s32 total = 0;
    for (s32 index = 0; index < 30; ++index) {
        WeightedEncounterEntry *entry = &table->entries[index];
        if (entry->id != 0) {
            bool excluded = false;
            if (excludeSpecial) {
                WeightedEncounterGroup *group = FUN_004bb80c(entry->id);
                for (s32 member = 0; member < 6; ++member) {
                    if (group->members[member] != 0) {
                        Table00Record *record = dataTable00FindById(group->members[member]);
                        if (record != NULL && (record->bustUp.value || record->unk86[0x1D])) {
                            excluded = true;
                            break;
                        }
                    }
                }
            }
            if (!excluded)
                total += entry->weight;
        }
    }
    s32 choice = randRange((u16)(total - 1));
    for (s32 index = 0; index < 30; ++index) {
        if (table->entries[index].id != 0) {
            choice -= table->entries[index].weight;
            if (choice < 0) {
                selected = table->entries[index].id;
                break;
            }
        }
    }
    return selected;
}
}
