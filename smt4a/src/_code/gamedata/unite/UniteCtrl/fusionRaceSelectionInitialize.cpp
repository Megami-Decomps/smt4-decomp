/* NON_MATCHING: native retains disabled tracked-allocation filename/line setup; no dead-code imitation. */
#include "gamedata/DataTable.h"
#include "shard/W6_W6Match8_FusionSelection.h"
#include "shard/W6_W6Match8_DevilRecordA.h"

struct FusionSelectionScratch {
    u8 bytes[17];
};
struct FusionSelectionExtras {
    u8 unk000[0x150];
    u8 mode;
    u8 unk151[3];
    u32 value;
    u8 firstFlag;
    u8 secondFlag;
    FusionSelectionScratch scratch;
    u8 unk16b;
    u16 flags;
    u8 flag16e;
    u8 unk16f;
    s16 firstSelection;
    s16 secondSelection;
    u8 unk174[7];
    u8 flag17b;
    u8 unk17c[0x38];
    u8 flag1b4;
};

extern "C" {
void sysMemClear(void *memory, u32 bytes);
void *asdMemoryAllocTracked(u32 pool, u32 kind, u32 flags, u32 bytes, s32 enabled);
s32 recordCompareRankAndIndex(const void *first, const void *second);
void qsort(void *entries, u32 count, u32 stride, s32 (*compare)(const void *, const void *));

FusionRaceSelection *fusionRaceSelectionInitialize(FusionRaceSelection *selection)
{
    void *table = dataTableGet(0, 0);
    dataTableGetEntries(table);
    u32 count = dataTableGetCount(table);
    u8 insertionCounts[0x44];
    sysMemClear(insertionCounts, sizeof(insertionCounts));
    sysMemClear(selection->counts, sizeof(selection->counts));
    for (u32 index = 0; index < count; ++index) {
        const DevilRecordA *record = FUN_00184310((u16)index);
        if (record->race < 65 && (record->flags & 1))
            ++selection->counts[record->race];
    }
    for (s32 race = 0; race < 65; ++race) {
        selection->levels[race] = NULL;
        if (selection->counts[race])
            selection->levels[race] = static_cast<FusionLevelEntry *>(
                asdMemoryAllocTracked(0x100, 0x100, 0, selection->counts[race] * sizeof(FusionLevelEntry), 1));
    }
    for (u32 index = 0; index < count; ++index) {
        const DevilRecordA *record = FUN_00184310((u16)index);
        if (record->race < 65 && (record->flags & 1)) {
            selection->levels[record->race][insertionCounts[record->race]].id = record->id;
            selection->levels[record->race][insertionCounts[record->race]].level = record->level;
            ++insertionCounts[record->race];
        }
    }
    for (s32 race = 0; race < 65; ++race) {
        if (selection->levels[race] != NULL)
            qsort(selection->levels[race], selection->counts[race], sizeof(FusionLevelEntry), recordCompareRankAndIndex);
    }
    FusionSelectionExtras *extras = reinterpret_cast<FusionSelectionExtras *>(selection);
    selection->hasRace = 0;
    selection->race = 0;
    extras->mode = 0;
    extras->value = 0;
    selection->hasDevil = 0;
    selection->devilId = 0;
    extras->flag17b = 0;
    extras->firstFlag = 0;
    extras->secondFlag = 0;
    extras->scratch = FusionSelectionScratch();
    extras->flags &= 0x3ff;
    extras->flag16e = 0;
    extras->firstSelection = -1;
    extras->secondSelection = -1;
    extras->flag1b4 = 0;
    return selection;
}
}
