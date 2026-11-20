/* NON_MATCHING: selection-sort register allocation, the empty-table branch target and the entry-copy registers differ. */
#include "common.h"
#include "shard/W6_W6Match3_BattleQueue.h"
#include "game/GameState.h"

struct CategoryTable { u32 reserved; };
struct CategoryRecord {
    s8 kind;
    u8 flagRow, flagBit;
    s8 category;
    u16 requiredFlag, excludedFlag;
};
struct CategoryListEntry { u16 enabled; s16 category; };
struct CategoryList {
    u8 unk00000[0x121e4];
    CategoryListEntry entries[32]; // 0x121e4
    s32 count; // 0x12264
};
extern "C" {
const CategoryRecord *dataTable2bSub1GetRecord(CategoryTable *, s32);
s32 gameFlagIsSet(u32);
s32 saveTestFlagRow(u8, u8);

void categoryListBuildUnique(CategoryList *list, s32 kind)
{
    s16 categories[32] = {0};
    s32 count = 0;
    CategoryTable table;
    for (s32 i = 0; i < dataTable2bSub1GetCount(&table); ++i) {
        const CategoryRecord *record = dataTable2bSub1GetRecord(&table, i);
        if (record->kind != kind)
            continue;
        bool found = false;
        if (!g_gameState.showAllEntries) {
            if (record->requiredFlag && !gameFlagIsSet(record->requiredFlag))
                continue;
            if (record->excludedFlag && gameFlagIsSet(record->excludedFlag))
                continue;
            if (!saveTestFlagRow(record->flagRow, record->flagBit))
                continue;
        }
        for (s32 j = 0; j < count; ++j) {
            if (categories[j] == record->category)
                found = true;
        }
        if (!found)
            categories[count++] = record->category;
    }
    /* Select the largest category in each remaining suffix. */
    for (s32 i = 0; i < count - 1; ++i) {
        for (s32 j = 1; j < count - i; ++j) {
            if (categories[i + j] > categories[i]) {
                s16 category = categories[i];
                categories[i] = categories[i + j];
                categories[i + j] = category;
            }
        }
    }
    for (s32 i = 0; i < count; ++i) {
        list->entries[i].enabled = 1;
        list->entries[i].category = categories[i];
    }
    list->count = count;
}
}
