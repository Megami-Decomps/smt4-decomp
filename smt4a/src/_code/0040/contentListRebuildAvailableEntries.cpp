/* NON_MATCHING: catalog insertion and loop-exit scheduling differ. */
#include "gamedata/FlagGatedCatalog.h"
#include "gamedata/CatalogProgress.h"

extern "C" {
void sysMemClear(void *memory, u32 bytes);
s32 tableFlagBit0(u32 index);
void FUN_0040a790(u32 index);
void FUN_0040a7b4(u32 index);
void FUN_0040a844(u32 index, s32 mode);
void gameDataSetEnabledBit(u32 index, s32 enabled);

/* Rebuild the available-entry catalog and update each quest's stored progress. */
void contentListRebuildAvailableEntries(FlagGatedCatalogList *list, s32 limit)
{
    sysMemClear(list->entries, sizeof(list->entries));
    list->count = 0;
    s32 processed = 0;
    for (s32 index = 0; index < 300 && processed < limit; ++index) {
        const PackageSelectableRecord *record = contentFindRecordById((u16)index);
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
        u8 previousProgress = tableByteGet1(index);
        u8 progress = countCompletedOptions(record, previousProgress);
        if (previousProgress < progress)
            gameDataSetModeAndFlag(index, progress);
        list->entries[list->count] = record->id;
        ++list->count;
    }
    list->visibleCount = 10;
    if (list->count < 10)
        list->visibleCount = list->count;
}
} /* extern "C" */
