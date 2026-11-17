/* NON_MATCHING: same control flow, calls, frame and switch table; armcc keeps the constant 350 in fp for the two id checks and spills the quest+0x500 base, where retail reloads 350 from the pool each time and keeps the base in fp, so the callee-saved registers differ. */
#include "shard/W4_W4Match2_UiQuest.h"
#include "quest_center/QuestRecord.h"
#include "AsdSDK/AsdMemUtil.h"

/* One objective's progress as FUN_00298e40 reports it; only the first word is read here. */
struct QuestObjectiveProgress {
    /* 0x0 */ s32 remaining;
    /* 0x4 */ s32 unk04[2];
};

/* The saved scroll state of one quest list. */
struct SavedListCursor {
    /* 0x0 */ s32 position;
    /* 0x4 */ s32 top;
};

extern "C" {
void rt_memclr(void *destination, u32 size);
s32 questReadRuntimeFlag(u32 id, u32 flag);
s32 gameFlagIsSet(u32 id);
u32 FUN_00298f88(u32 id);
s32 FUN_00298e40(u32 id, s32 index, QuestObjectiveProgress *progress);
s32 questIsCompleted(u32 id);
s32 FUN_00298e00(u32 id);
s32 idIsAtLeast350(u32 id);
void FUN_002b7bca(void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));
s32 dataTable1bOr1cCompareRecordKeys(const void *left, const void *right);
void gridNavigationConfigure(void *list, s32 count, s32 visible, s32 a, s32 b, s32 c);
void uiQuestSortListByEntryKind(s32 kind);
u32 FUN_00298dc8(u32 id);
void scrollListSetSelectionMarkChanged(void *list, s32 index);
SavedListCursor *gameGetSavedRecordOrFallback(u32 index);
s32 FUN_0029d644(const void *list);
s32 FUN_0029ee54(const void *list);
void scrollOwnerSetValue(void *list, s32 top);
void flaggedEntrySetValueA(void *list, s32 position);

/* Whether one of the quest's six objectives is still open (or the quest is completed without
 * being reported). */
static __inline bool questHasOpenObjective(u32 id)
{
    for (s32 i = 0; i < 6; i++) {
        QuestObjectiveProgress progress;
        if (FUN_00298e40(id, i, &progress) != 0) {
            if (questIsCompleted(id) != 0 && FUN_00298e00(id) == 0)
                return true;
            if (progress.remaining > 0)
                return true;
        }
    }
    return false;
}

/* Rebuilds the quest menu's two lists (quests to report, and the open quests filtered by the
 * selected category), selects the first entry of interest in each and restores the saved scroll. */
void FUN_00189c24(void)
{
    UiQuest *quest = g_uiQuest;
    s32 reportCount = 0;
    s32 openCount = 0;

    memClear(quest->cursor.alternate.ids, sizeof(quest->cursor.alternate.ids));
    rt_memclr(quest->list, sizeof(quest->list));
    for (u16 id = 0; id < 400; id++) {
        if (id < 350 && questReadRuntimeFlag(id, 0) == 0)
            continue;
        if (id >= 350) {
            if (dataTable1bOr1cGetRecord(id) == NULL)
                continue;
            if (gameFlagIsSet(7) != 0 && gameFlagIsSet(0x214) == 0)
                continue;
        }
        if (FUN_00298f88(id) != 0) {
            quest->cursor.alternate.ids[reportCount++] = id;
            continue;
        }
        bool listed = true;
        if (quest->panel.confirming != 0) {
            QuestRecord *record = dataTable1bOr1cGetRecord(id);
            if (record == NULL || record->kind != 0)
                continue;
            if (questHasOpenObjective(id))
                continue;
            if (idIsAtLeast350(id) == 0) {
                if (record->area == 0)
                    continue;
                switch ((s8)quest->panel.choice) {
                case 0:
                    continue;
                case 1:
                    if (record->area != 1)
                        continue;
                    break;
                case 9:
                    if (record->route != 1)
                        continue;
                    break;
                case 10:
                case 11:
                case 12:
                case 13:
                    if (record->route != 2)
                        continue;
                    break;
                default:
                    if (record->area == 1)
                        listed = false;
                    if (record->route != 0)
                        continue;
                    break;
                }
            }
            if (!listed)
                continue;
        }
        quest->list[openCount++] = id;
    }
    FUN_002b7bca(quest->cursor.alternate.ids, reportCount, sizeof(u16), dataTable1bOr1cCompareRecordKeys);
    void *reportList = quest->panel.alternate.cursor;
    gridNavigationConfigure(reportList, reportCount, 10, 1, 1, 1);
    gridNavigationConfigure(quest->cursor.data, openCount, 10, 1, 1, 1);
    uiQuestSortListByEntryKind(0);
    for (s32 i = 0; i < reportCount; i++) {
        if (FUN_00298dc8(quest->cursor.alternate.ids[i]) != 0) {
            scrollListSetSelectionMarkChanged(reportList, i);
            break;
        }
    }
    for (s32 i = 0; i < openCount; i++) {
        if (FUN_00298dc8(quest->list[i]) != 0) {
            QuestRecord *record = dataTable1bOr1cGetRecord(quest->list[i]);
            if (record != NULL && record->kind != 0) {
                scrollListSetSelectionMarkChanged(quest->cursor.data, i);
                break;
            }
        }
    }
    if (quest->panel.confirming != 0)
        return;
    if (quest->cursor.alternate.ids[gameGetSavedRecordOrFallback(0)->top + gameGetSavedRecordOrFallback(0)->position] == 0 ||
        gameGetSavedRecordOrFallback(0)->top + FUN_0029d644(reportList) > FUN_0029ee54(reportList)) {
        gameGetSavedRecordOrFallback(0)->top = 0;
        gameGetSavedRecordOrFallback(0)->position = 0;
    }
    scrollOwnerSetValue(reportList, gameGetSavedRecordOrFallback(0)->top);
    flaggedEntrySetValueA(reportList, gameGetSavedRecordOrFallback(0)->position);
    if (quest->list[gameGetSavedRecordOrFallback(1)->top + gameGetSavedRecordOrFallback(1)->position] == 0 ||
        gameGetSavedRecordOrFallback(1)->top + FUN_0029d644(quest->cursor.data) > FUN_0029ee54(quest->cursor.data)) {
        gameGetSavedRecordOrFallback(1)->top = 0;
        gameGetSavedRecordOrFallback(1)->position = 0;
    }
    scrollOwnerSetValue(quest->cursor.data, gameGetSavedRecordOrFallback(1)->top);
    flaggedEntrySetValueA(quest->cursor.data, gameGetSavedRecordOrFallback(1)->position);
}

} /* extern "C" */
