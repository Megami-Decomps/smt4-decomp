/* NON_MATCHING: entry address uses 0x5760 base rather than native0x5700 plus member offsets; -O2 candidate. */
#include "common.h"

struct CategoryPreviewEntry {
    u16 id;
    u16 valueA;
    u16 valueB;
    u16 categories;
    u8 unk08[0x20];
    u8 active;
    u8 unk29[3];
};
struct CategoryPreviewWork {
    u8 unk0000[0x5758];
    s32 count;
    u32 unk575c;
    CategoryPreviewEntry entries[10];
    u32 unk5918;
    s32 timer;
    s32 categoryIndex;
};
struct CategoryPreviewRecord {
    u8 unk00[0x2a];
    u16 valueA;
    u16 valueB;
    u8 unk2e[0x16];
    u16 categories;
    u8 unk46[0x5be];
};

extern "C" {
u16 *FUN_0029acb0();
u32 categoryGetColor(u32 category);
void FUN_00317e58(u32 color);
void FUN_0026a958(s32 enabled);
void FUN_0026a858(u32 id, CategoryPreviewRecord *record);
void FUN_0029d8f4(const CategoryPreviewRecord *record, s32 enabled, u8 mode);
void statusPanelSetOpen(s32 enabled);
}

static inline void categoryPreviewUpdate(const CategoryPreviewEntry *entry)
{
    CategoryPreviewRecord record;
    FUN_0026a858(entry->id, &record);
    record.valueA = entry->valueA;
    record.valueB = entry->valueB;
    record.categories = entry->categories;
    FUN_0029d8f4(&record, 1, 0);
    FUN_0026a958(1);
    statusPanelSetOpen(1);
}

extern "C" void categoryPreviewCycleTint(CategoryPreviewWork *work)
{
    u16 *current = FUN_0029acb0();
    for (s32 index = 0; index < work->count; ++index) {
        CategoryPreviewEntry *entry = &work->entries[index];
        if (!entry->active)
            continue;
        if (entry->categories != 0) {
            if ((s16)current[0] != entry->id)
                continue;
            s32 categoryCount = 0;
            for (s32 category = 1; category < 11; ++category) {
                if (!(entry->categories & (1u << (u8)category)))
                    continue;
                if (work->categoryIndex == categoryCount) {
                    FUN_00317e58(categoryGetColor((s16)category));
                    FUN_0026a958(1);
                    if (entry->categories != current[10])
                        categoryPreviewUpdate(entry);
                }
                ++categoryCount;
            }
            if (work->timer >= 24) {
                work->categoryIndex = (work->categoryIndex + 1) % categoryCount;
                work->timer = 0;
            }
            if (entry->categories != 0)
                continue;
        }
        FUN_00317e58(categoryGetColor(0));
        if (entry->categories != current[10])
            categoryPreviewUpdate(entry);
    }
}
