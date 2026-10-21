/* NON_MATCHING: selection-sort loop arithmetic/branch orientation and local register allocation differ; -O2 candidate. */
#include "common.h"

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
struct CategoryGameFlags {
    u8 unk000[0x3e0];
    s32 ignoreRequirements;
};
extern "C" {
extern CategoryGameFlags g_gameState;
s32 dataTable2bSub1GetCount(CategoryTable *);
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
        if (!g_gameState.ignoreRequirements) {
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
    for (s32 i = 0; i < count - 1; ++i) {
        for (s32 j = i + 1; j < count; ++j) {
            if (categories[i] < categories[j]) {
                s16 category = categories[i];
                categories[i] = categories[j];
                categories[j] = category;
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
