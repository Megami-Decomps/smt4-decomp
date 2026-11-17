/* NON_MATCHING: only the first entry store differs: retail computes the entry address in r1 and the id in r2 (built swaps them). */
#include "common.h"
#include "gamedata/DevilRecord.h"
#include "status/StatusCamera.h"
#include "AsdSDK/AsdMemUtil.h"

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
void gridNavigationConfigure(void *, s32, s32, s32, s32, s32);
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
        const DevilRecord *record = devilGetRecord(id);
        if (record && (record->flags & 1) && record->innateFlag) {
            u16 flag = record->innateFlag;
            if (flags[flag >> 3] & (1 << (flag & 7))) {
                list->entries[list->count].id = record->id;
                list->entries[list->count].flag = record->innateFlag;
                ++list->count;
            }
            ++list->total;
        }
    }
    gridNavigationConfigure(list->controller, list->count, 11, 1, 0, 1);
    FlaggedDemonList *sorting = g_statusDown;
    const FlaggedDemonSortFlags *options = &reinterpret_cast<const FlaggedDemonSortOptions *>(gameDataGetSortPreferences())->sort;
    if (options->mode == 1) {
        if (!options->reverse)
            FUN_002b7bca(sorting->entries, sorting->count, 4, FUN_00206d4c);
        else
            FUN_002b7bca(sorting->entries, sorting->count, 4, devilIdCompareRankOrderId);
    }
    if (options->mode == 0x21) {
        if (!options->reverse)
            FUN_002b7bca(sorting->entries, sorting->count, 4, FUN_001f61c4);
        else
            FUN_002b7bca(sorting->entries, sorting->count, 4, FUN_002dc9d4);
    }
    if (options->mode == 3) {
        if (!options->reverse)
            FUN_002b7bca(sorting->entries, sorting->count, 4, entryRefCompareByKey);
        else
            FUN_002b7bca(sorting->entries, sorting->count, 4, recordCompareByKey);
    }
    list->dirty = 1;
}
}
