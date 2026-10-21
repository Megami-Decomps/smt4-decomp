/* NON_MATCHING: first entry store registers, reverse-flag tests and cold sort branches differ; -O2 candidate. */
#include "common.h"

struct FlaggedDemonDefinition {
    u16 id;
    u8 unk02[4];
    u16 flags;
    u8 unk08[0x30];
    u16 flag;
};
struct FlaggedDemonEntry { u16 id, flag; };
struct FlaggedDemonList {
    u8 unk000[0x410];
    u8 dirty;
    u8 unk411[0x1b7];
    FlaggedDemonEntry entries[512]; // 0x5c8
    s16 count, total; // 0xdc8
    u8 controller[1]; // 0xdcc
};
struct FlaggedDemonSortFlags { u8 mode : 7; u8 reverse : 1; };
struct FlaggedDemonSortOptions { u8 unk00[0x15]; FlaggedDemonSortFlags sort; };
extern "C" {
extern FlaggedDemonList *g_statusDown;
const FlaggedDemonDefinition *devilGetRecord(u32);
void memClear(void *, u32);
void FUN_0029f848(void *, s32, s32, s32, s32, s32);
const FlaggedDemonSortOptions *FUN_002a0d0c();
void FUN_002b7bca(void *, s32, s32, s32 (*)(const void *, const void *));
s32 devilIdCompareRankOrderId(const void *, const void *);
s32 FUN_00206d4c(const void *, const void *);
s32 FUN_002dc9d4(const void *, const void *);
s32 FUN_001f61c4(const void *, const void *);
s32 recordCompareByKey(const void *, const void *);
s32 entryRefCompareByKey(const void *, const void *);

void statusBuildFlaggedDemonList(const u8 *flags)
{
    FlaggedDemonList *list = g_statusDown;
    list->count = 0;
    list->total = 0;
    memClear(list->entries, sizeof(list->entries));
    for (u16 id = 0; id < 0x500; ++id) {
        const FlaggedDemonDefinition *record = devilGetRecord(id);
        if (record && (record->flags & 1) && record->flag) {
            u16 flag = record->flag;
            if (flags[flag >> 3] & (1 << (flag & 7))) {
                list->entries[list->count].id = record->id;
                list->entries[list->count].flag = record->flag;
                ++list->count;
            }
            ++list->total;
        }
    }
    FUN_0029f848(list->controller, list->count, 11, 1, 0, 1);
    FlaggedDemonList *sorting = g_statusDown;
    const FlaggedDemonSortFlags *options = &FUN_002a0d0c()->sort;
    if (options->mode == 1) {
        if (options->reverse)
            FUN_002b7bca(sorting->entries, sorting->count, 4, devilIdCompareRankOrderId);
        else
            FUN_002b7bca(sorting->entries, sorting->count, 4, FUN_00206d4c);
    }
    if (options->mode == 0x21) {
        if (options->reverse)
            FUN_002b7bca(sorting->entries, sorting->count, 4, FUN_002dc9d4);
        else
            FUN_002b7bca(sorting->entries, sorting->count, 4, FUN_001f61c4);
    }
    if (options->mode == 3) {
        if (options->reverse)
            FUN_002b7bca(sorting->entries, sorting->count, 4, recordCompareByKey);
        else
            FUN_002b7bca(sorting->entries, sorting->count, 4, entryRefCompareByKey);
    }
    list->dirty = 1;
}
}
