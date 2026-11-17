/* NON_MATCHING: only the first entry store differs: retail computes the entry address in r1 and the id in r2 (built swaps them). */
#include "ui/UiSpriteApi.h"
#include "status/StatusDown.h"
#include "gamedata/NkmBaseRecord.h"
#include "status/StatusCamera.h"
#include "AsdSDK/AsdMemUtil.h"

struct FlaggedDemonSortFlags { u8 mode : 7; u8 reverse : 1; };
struct FlaggedDemonSortOptions { u8 unk00[0x15]; FlaggedDemonSortFlags sort; };
extern "C" {
void gridNavigationConfigure(GridNavigation *, s32, s32, s32, s32, s32);
void FUN_002b7bca(void *, s32, s32, s32 (*)(const void *, const void *));
s32 devilIdCompareRankOrderId(const void *, const void *);
s32 FUN_00206d4c(const void *, const void *);
s32 FUN_002dc9d4(const void *, const void *);
s32 FUN_001f61c4(const void *, const void *);
s32 recordCompareByKey(const void *, const void *);
s32 entryRefCompareByKey(const void *, const void *);

void statusBuildFlaggedDemonList(const u8 *flags)
{
    StatusDownState *status = g_statusDown;
    status->flagged.count = 0;
    status->flagged.total = 0;
    memClear(status->flagged.entries, sizeof(status->flagged.entries));
    for (u16 id = 0; id < 0x500; ++id) {
        const NkmBaseRecord *record = nkmBaseGetRecord(id);
        if (record && (record->flags & 1) && record->innateFlag) {
            u16 flag = record->innateFlag;
            if (flags[flag >> 3] & (1 << (flag & 7))) {
                status->flagged.entries[status->flagged.count].id = record->id;
                status->flagged.entries[status->flagged.count].flag = record->innateFlag;
                ++status->flagged.count;
            }
            ++status->flagged.total;
        }
    }
    gridNavigationConfigure(&status->flagged.navigation, status->flagged.count, 11, 1, 0, 1);
    StatusDownState *sorting = g_statusDown;
    const FlaggedDemonSortFlags *options = &reinterpret_cast<const FlaggedDemonSortOptions *>(gameDataGetSortPreferences())->sort;
    if (options->mode == 1) {
        if (!options->reverse)
            FUN_002b7bca(sorting->flagged.entries, sorting->flagged.count, 4, FUN_00206d4c);
        else
            FUN_002b7bca(sorting->flagged.entries, sorting->flagged.count, 4, devilIdCompareRankOrderId);
    }
    if (options->mode == 0x21) {
        if (!options->reverse)
            FUN_002b7bca(sorting->flagged.entries, sorting->flagged.count, 4, FUN_001f61c4);
        else
            FUN_002b7bca(sorting->flagged.entries, sorting->flagged.count, 4, FUN_002dc9d4);
    }
    if (options->mode == 3) {
        if (!options->reverse)
            FUN_002b7bca(sorting->flagged.entries, sorting->flagged.count, 4, entryRefCompareByKey);
        else
            FUN_002b7bca(sorting->flagged.entries, sorting->flagged.count, 4, recordCompareByKey);
    }
    status->listActive = 1;
}
}
