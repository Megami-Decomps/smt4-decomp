/* NON_MATCHING: default-result stack slot, table selection and weighted-loop saved registers differ. */
#include "gamedata/EncountData.h"
#include "gamedata/DataTable.h"
#include "gamedata/NkmEnemyRecord.h"
#include "gamedata/GameDataEntries.h"
#include "addon/AocSystemA.h"
#include "gamedata/NkmEnemyLookup.h"


extern "C" {
void weightedTableRollNextValue(u32, u32, s32);

EncountTableRecordA *resourceFindType27Record(AocSystemA *, u32);
s32 randRange(u16);
}

static bool groupHasPortrait(u16 id)
{
    const EncountGroupRecordA *group = dataTable02GetRecordWithAocPackage(id);
    for (s32 i = 0; i < 6; ++i) {
        if (group->enemyIds[i]) {
            const NkmEnemyRecordA *member = nkmEnemyFindById(group->enemyIds[i]);
            if (member && (member->bustUp || member->bustUpVariation))
                return true;
        }
    }
    return false;
}

extern "C" u16 FUN_004bc420(u32 first, u32 second, s32 excludePortraitGroups)
{
    s32 index = gameDataGetTableEntry(first, second)->value;
    if (!index) {
        weightedTableRollNextValue(first, second, 1);
        index = gameDataGetTableEntry(first, second)->value;
    }
    void *section = dataTableGet(2, 1);
    EncountTableRecordA *table = encountTableRecordsA(section);
    if (index >= 0 && static_cast<u32>(index) < dataTableGetCount(section)) {
        EncountTableRecordA *overrideTable = resourceFindType27Record(g_aocSystem, index);
        table = overrideTable ? overrideTable : &table[index];
    }
    u32 totalWeight = 0;
    for (s32 i = 0; i < 30; ++i) {
        const EncountChoice *entry = &table->choices[i];
        if (entry->groupId && (!excludePortraitGroups || !groupHasPortrait(entry->groupId)))
            totalWeight += entry->weight;
    }
    s32 random = randRange(totalWeight - 1);
    for (s32 i = 0; i < 30; ++i) {
        const EncountChoice *entry = &table->choices[i];
        if (entry->groupId) {
            random -= entry->weight;
            if (random < 0)
                return entry->groupId;
        }
    }
    return 0;
}
