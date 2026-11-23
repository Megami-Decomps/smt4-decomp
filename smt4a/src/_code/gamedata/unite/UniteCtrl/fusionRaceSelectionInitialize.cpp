#include "gamedata/DataTable.h"
#include "shard/W6_W6Match8_FusionSelection.h"
#include "shard/W6_W6Match8_DevilRecordA.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
void sysMemClear(void *memory, u32 bytes);
s32 recordCompareRankAndIndex(const void *first, const void *second);
void qsort(void *entries, u32 count, u32 stride, s32 (*compare)(const void *, const void *));

/* Clears the active choices and their scratch state, as in IV's uniteCtrlBuildRaceLists. */
static __inline void fusionResetSelection(FusionRaceSelection *selection)
{
    selection->hasRace = 0;
    selection->race = 0;
    selection->mode = 0;
    selection->unk154 = 0;
    selection->hasDevil = 0;
    selection->devilId = 0;
    selection->unk17b = 0;
    selection->unk158 = 0;
    selection->unk159 = 0;
    selection->scratch = FusionSelectionScratch();
    selection->transientFlags = 0;
    selection->unk16e = 0;
    selection->firstSelection = -1;
    selection->secondSelection = -1;
    selection->unk1b4 = 0;
}

/* Builds the sorted list of fusable demons for each race and resets selection state. */
FusionRaceSelection *fusionRaceSelectionInitialize(FusionRaceSelection *selection)
{
    void *table = dataTableGet(0, 0);
    dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    u8 insertionCounts[0x44];
    u32 index;
    s32 race;
    const NkmBaseRecordA *record;
    sysMemClear(insertionCounts, sizeof(insertionCounts));
    sysMemClear(selection->counts, sizeof(selection->counts));
    for (index = 0; index < count; ++index) {
        record = nkmBaseGetRecord((u16)index);
        if (record->race < FUSION_RACE_COUNT_A && (record->flags & 1))
            ++selection->counts[record->race];
    }
    for (race = 0; race < FUSION_RACE_COUNT_A; ++race) {
        selection->levels[race] = NULL;
        if (selection->counts[race]) {
            asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\gamedata\\unite\\UniteCtrl.cpp", 214);
            selection->levels[race] = (FusionLevelEntry *)asdMemoryAllocTracked(
                0x100, 0x100, 0, selection->counts[race] * sizeof(FusionLevelEntry), 1);
        }
    }
    for (index = 0; index < count; ++index) {
        record = nkmBaseGetRecord((u16)index);
        if (record->race < FUSION_RACE_COUNT_A && (record->flags & 1)) {
            selection->levels[record->race][insertionCounts[record->race]].id = record->id;
            selection->levels[record->race][insertionCounts[record->race]].level = record->level;
            ++insertionCounts[record->race];
        }
    }
    for (race = 0; race < FUSION_RACE_COUNT_A; ++race) {
        if (selection->levels[race] != NULL)
            qsort(selection->levels[race], selection->counts[race], sizeof(FusionLevelEntry), recordCompareRankAndIndex);
    }
    fusionResetSelection(selection);
    return selection;
}
} /* extern "C" */
