/* NON_MATCHING: the zero used to initialize scan counters has a different home register; the progress update shares the other exits' success assignment. */
#include "gamedata/CatalogProgress.h"
#include "addon/aocMain.h"
#include "addon/AocSystemA.h"

extern "C" {
void *dataTableGet(s32 table, s32 section);
s32 aocCountTableRecords(AocSystemA *system);
s32 tableFlagBit0(s32 index);
s32 tableFlagBit1(s32 index);
s32 tableFlagBit2(s32 index);
void FUN_0040a790(s32 index);
void FUN_0040a7b4(s32 index);
void FUN_0040a844(s32 index, s32 enabled);
void gameDataSetEnabledBit(s32 index, s32 enabled);

/* Refresh available quest records, stopping when a newly relevant entry needs attention. */
u32 FUN_003c0dcc()
{
    if (!gameFlagIsSet(0x40E))
        return 0;
    void *table = dataTableGet(0x45, 0);
    dataTableGetEntries(table);
    s32 count = dataTableGetCount(table) + aocCountTableRecords(g_aocSystem);
    s32 visited = 0;
    u32 needsAttention = 0;
    for (s32 index = 0; index < 300; ++index) {
        if (visited >= count)
            break;
        PackageSelectableRecord *record = contentFindRecordById((u16)index);
        if (record == NULL)
            continue;
        ++visited;
        if (record->id == 0)
            continue;
        if (tableFlagBit0(index)) {
            s32 completed = gameFlagIsSet(record->progress.completionFlag);
            if (record->progress.completionFlag != 0 && completed != 0) {
                FUN_0040a7b4(index);
                continue;
            }
            if (tableFlagBit1(index) || tableFlagBit2(index)) {
                needsAttention = 1;
                break;
            }
            u8 previous = tableByteGet1(index);
            u8 progress = countCompletedOptions(record, previous);
            if (previous < progress) {
                gameDataSetModeAndFlag(index, progress);
                needsAttention = 1;
                break;
            }
        } else {
            s32 completed = gameFlagIsSet(record->progress.completionFlag);
            if (record->progress.completionFlag != 0 && completed != 0)
                continue;
            s32 unlocked = gameFlagIsSet(record->progress.unlockFlag);
            if (record->progress.unlockFlag != 0 && unlocked == 0)
                continue;
            FUN_0040a790(index);
            if (record->progress.mode == 1) {
                gameDataSetEnabledBit(index, 0);
                FUN_0040a844(index, 1);
                needsAttention = 1;
                break;
            }
            if (record->progress.mode == 2) {
                gameDataSetEnabledBit(index, 0);
                FUN_0040a844(index, 0);
            } else {
                needsAttention = 1;
                break;
            }
        }
    }
    return needsAttention;
}
} /* extern "C" */
