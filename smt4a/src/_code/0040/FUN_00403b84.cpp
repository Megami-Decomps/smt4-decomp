/* NON_MATCHING: record pointer and completed-flag counter use opposite saved registers; progress comparison/update lowers to a conditional call instead of retail's branch. */
#include "gamedata/FlagGatedCatalog.h"
#include "addon/PackageSelection.h"

extern "C" {
void sysMemClear(void *memory, u32 bytes);
s32 gameFlagIsSet(u16 flag);
u32 tableByteGet1(u32 index);
s32 tableFlagBit0(u32 index);
void FUN_0040a790(u32 index);
void FUN_0040a7b4(u32 index);
void FUN_0040a844(u32 index, s32 mode);
void gameDataSetEnabledBit(u32 index, s32 enabled);
void gameDataSetModeAndFlag(u32 index, u32 mode);

void FUN_00403b84(FlagGatedCatalogList *list, s32 limit)
{
    sysMemClear(list->entries, sizeof(list->entries));
    list->count = 0;
    s32 processed = 0;
    for (s32 index = 0; index < 300 && processed < limit; ++index) {
        const PackageSelectableRecord *record = contentFindRecordById(static_cast<u16>(index));
        if (record == NULL)
            continue;
        ++processed;
        if (record->id == 0)
            continue;
        s32 hidden = gameFlagIsSet(record->progress.completionFlag);
        if (record->progress.completionFlag != 0 && hidden) {
            if (tableFlagBit0(index))
                FUN_0040a7b4(index);
            continue;
        }
        if (!tableFlagBit0(index)) {
            s32 unlocked = gameFlagIsSet(record->progress.unlockFlag);
            if (record->progress.unlockFlag != 0 && !unlocked)
                continue;
            FUN_0040a790(index);
            if (record->progress.mode == 1) {
                gameDataSetEnabledBit(index, 0);
                FUN_0040a844(index, 1);
            } else if (record->progress.mode == 2) {
                gameDataSetEnabledBit(index, 0);
                FUN_0040a844(index, 0);
            }
        }
        u32 previousProgress = tableByteGet1(index);
        u32 progress = previousProgress;
        if (progress < 5) {
            u8 completedFlags = 0;
            for (u8 flag = 0; flag < 5; ++flag) {
                if (gameFlagIsSet(record->options[flag]))
                    ++completedFlags;
            }
            progress = completedFlags;
        }
        if (previousProgress < progress)
            gameDataSetModeAndFlag(index, progress);
        list->entries[list->count] = record->id;
        ++list->count;
    }
    list->visibleCount = 10;
    if (list->count < 10)
        list->visibleCount = list->count;
}
}
