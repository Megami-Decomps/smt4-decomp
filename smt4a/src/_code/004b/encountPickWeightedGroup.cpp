/* NON_MATCHING: retail stores `selected`'s zero after copying excludeSpecial (ours before) and swaps the registers of the choice count and the entry pointer (r8/r9). */
#include "gamedata/EncountData.h"
#include "gamedata/DataTable.h"
#include "gamedata/NkmEnemyRecord.h"
#include "gamedata/NkmEnemyLookup.h"
extern "C" {
extern void *g_aocSystem;
s32 randRange(u16 maximum);
EncountTableRecordA *resourceFindType27Record(void *system, u32 index);

// Select an encounter by weight, excluding special portrait groups from the total when requested.
u32 encountPickWeightedGroup(s32 tableIndex, s32 excludeSpecial)
{
    u32 selected = 0;
    void *section = dataTableGet(2, 1);
    EncountTableRecordA *table = encountTableRecordsA(section);
    if (tableIndex >= 0 && (u32)tableIndex < dataTableGetCount(section)) {
        EncountTableRecordA *overrideTable = resourceFindType27Record(g_aocSystem, tableIndex);
        if (overrideTable != NULL)
            table = overrideTable;
        else
            table = &table[tableIndex];
    }
    s32 total = 0;
    s32 choiceCount = 30; /* the table's encounter choices */
    for (s32 index = 0; index < choiceCount; ++index) {
        EncountChoice *entry = &table->choices[index];
        if (entry->groupId != 0) {
            bool excluded = false;
            if (excludeSpecial) {
                EncountGroupRecordA *group = dataTable02GetRecordWithAocPackage(entry->groupId);
                for (s32 member = 0; member < 6; ++member) {
                    if (group->enemyIds[member] != 0) {
                        NkmEnemyRecordA *record = nkmEnemyFindById(group->enemyIds[member]);
                        if (record != NULL && (record->bustUp || record->bustUpVariation)) {
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
    for (s32 index = 0; index < choiceCount; ++index) {
        if (table->choices[index].groupId != 0) {
            choice -= table->choices[index].weight;
            if (choice < 0) {
                selected = table->choices[index].groupId;
                break;
            }
        }
    }
    return selected;
}
}
