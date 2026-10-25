/* NON_MATCHING: default-result stack slot, table selection and weighted-loop saved registers differ. */
#include "battle/WeightedEncounter.h"
#include "gamedata/DataTable.h"
#include "gamedata/Table00.h"
#include "gamedata/GameDataEntries.h"


struct AocSystem;
extern "C" {
extern AocSystem *g_aocSystem;
void FUN_00148d68(u32, u32, s32);

WeightedEncounterTable *resourceFindType27Record(AocSystem *, u32);
const WeightedEncounterGroup *FUN_004bb80c(s32);
const Table00Record *dataTable00FindById(u16);
s32 randRange(u16);
}

static bool groupHasPortrait(u16 id)
{
    const WeightedEncounterGroup *group = FUN_004bb80c(id);
    for (s32 i = 0; i < 6; ++i) {
        if (group->members[i]) {
            const Table00Record *member = dataTable00FindById(group->members[i]);
            if (member && (member->bustUp.value || member->bustUp.variation))
                return true;
        }
    }
    return false;
}

extern "C" u16 FUN_004bc420(u32 first, u32 second, s32 excludePortraitGroups)
{
    s32 index = gameDataGetTableEntry(first, second)->value;
    if (!index) {
        FUN_00148d68(first, second, 1);
        index = gameDataGetTableEntry(first, second)->value;
    }
    void *section = dataTableGet(2, 1);
    WeightedEncounterTable *table = static_cast<WeightedEncounterTable *>(dataTableGetEntries(section));
    if (index >= 0 && static_cast<u32>(index) < dataTableGetCount(section)) {
        WeightedEncounterTable *overrideTable = resourceFindType27Record(g_aocSystem, index);
        table = overrideTable ? overrideTable : &table[index];
    }
    u32 totalWeight = 0;
    for (s32 i = 0; i < 30; ++i) {
        const WeightedEncounterEntry *entry = &table->entries[i];
        if (entry->id && (!excludePortraitGroups || !groupHasPortrait(entry->id)))
            totalWeight += entry->weight;
    }
    s32 random = randRange(totalWeight - 1);
    for (s32 i = 0; i < 30; ++i) {
        const WeightedEncounterEntry *entry = &table->entries[i];
        if (entry->id) {
            random -= entry->weight;
            if (random < 0)
                return entry->id;
        }
    }
    return 0;
}
