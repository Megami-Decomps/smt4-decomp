#include "code/Code001b.h"
#include "shard/W4_W4Match2_UiQuest.h"
#include "quest_center/QuestRecord.h"
#include "quest_center/QuestRequirement.h"
#include "gamedata/GameSaveLinkSlot.h"
#include "AsdSDK/AsdMemUtil.h"
#include "runtime/String.h"

extern "C" {
s32 questReadRuntimeFlag(u32 id, u32 flag);
s32 gameFlagIsSet(u32 id); // declcheck: local (the shared declaration does not compile here or changes this unit)
u32 questGetRequirementProgress(s32 quest, s32 index, QuestRequirementProgress *progress);
s32 questIsCompleted(u32 id);
s32 questIsReported(u32 id); // declcheck: local (the shared declaration does not compile here or changes this unit)
s32 idIsAtLeast350(u32 id);
void qsort(void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));
s32 dataTable1bOr1cCompareRecordKeys(const void *left, const void *right);
void gridNavigationConfigure(void *list, s32 count, s32 visible, s32 a, s32 b, s32 c);
void uiQuestSortListByEntryKind(s32 kind);
u32 questHasNewMark(u32 id); // declcheck: local (the shared declaration does not compile here or changes this unit)
void scrollListSetSelectionMarkChanged(void *list, s32 index); // declcheck: local (the shared declaration does not compile here or changes this unit)
GameSaveLinkSlot *gameGetSaveLinkSlot(u32 index);
s32 uiListGetVisibleCount(const void *list); // declcheck: local (the shared declaration does not compile here or changes this unit)
s32 gridNavigationGetItemCount(const void *list); // declcheck: local (the shared declaration does not compile here or changes this unit)
void scrollOwnerSetValue(void *list, s32 top);
void flaggedEntrySetValueA(void *list, s32 position); // declcheck: local (the shared declaration does not compile here or changes this unit)

/* Rebuilds the quest menu's two lists (quests to report, and the open quests filtered by the
 * selected category), selects the first entry of interest in each and restores the saved scroll.
 * The locals are declared once at the top (C89 style) and shared by the loops: `listed` is cleared, not
 * skipped, by an open objective, which keeps the `if (!listed)` test on the switch arms that leave it true. */
void uiQuestRebuildLists(void)
{
    UiQuest *quest = g_uiQuest;
    s32 reportCount = 0;
    s32 openCount = 0;
    bool listed;
    s32 i;
    u16 id;
    QuestRecord *record;

    memClear(quest->cursor.alternate.ids, sizeof(quest->cursor.alternate.ids));
    rt_memclr(quest->list, sizeof(quest->list));
    for (id = 0; id < 400; id++) {
        if (id < 350 && questReadRuntimeFlag(id, 0) == 0)
            continue;
        if (id >= 350) {
            if (questDataGetRecord(id) == NULL)
                continue;
            if (gameFlagIsSet(7) != 0 && gameFlagIsSet(0x214) == 0)
                continue;
        }
        if (dataTable1bOr1cRecordHasFlag1(id) != 0) {
            quest->cursor.alternate.ids[reportCount++] = id;
            continue;
        }
        listed = true;
        if (quest->panelView.panel.confirming != 0) {
            record = questDataGetRecord(id);
            if (record == NULL || record->kind != 0)
                continue;
            /* A quest with one of its six objectives still open (or completed without being reported) is not
             * listed. */
            for (i = 0; i < 6; i++) {
                QuestRequirementProgress progress;
                if (questGetRequirementProgress(id, i, &progress) != 0) {
                    if (questIsCompleted(id) != 0 && questIsReported(id) == 0) {
                        listed = false;
                        break;
                    }
                    if (progress.remaining > 0) {
                        listed = false;
                        break;
                    }
                }
            }
            if (listed && idIsAtLeast350(id) == 0) {
                if (record->area == 0)
                    continue;
                switch (quest->panelView.panel.choice) {
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
    qsort(quest->cursor.alternate.ids, reportCount, sizeof(u16), dataTable1bOr1cCompareRecordKeys);
    gridNavigationConfigure(quest->panelView.panel.alternate.cursor, reportCount, 10, 1, 1, 1);
    gridNavigationConfigure(quest->cursor.data, openCount, 10, 1, 1, 1);
    uiQuestSortListByEntryKind(0);
    for (i = 0; i < reportCount; i++) {
        if (questHasNewMark(quest->cursor.alternate.ids[i]) != 0) {
            scrollListSetSelectionMarkChanged(quest->panelView.panel.alternate.cursor, i);
            break;
        }
    }
    for (i = 0; i < openCount; i++) {
        if (questHasNewMark(quest->list[i]) != 0) {
            record = questDataGetRecord(quest->list[i]);
            if (record != NULL && record->kind != 0) {
                scrollListSetSelectionMarkChanged(quest->cursor.data, i);
                break;
            }
        }
    }
    if (quest->panelView.panel.confirming != 0)
        return;
    if (quest->cursor.alternate.ids[gameGetSaveLinkSlot(0)->top + gameGetSaveLinkSlot(0)->position] == 0 ||
        gameGetSaveLinkSlot(0)->top + uiListGetVisibleCount(quest->panelView.panel.alternate.cursor) > gridNavigationGetItemCount(quest->panelView.panel.alternate.cursor)) {
        gameGetSaveLinkSlot(0)->top = 0;
        gameGetSaveLinkSlot(0)->position = 0;
    }
    scrollOwnerSetValue(quest->panelView.panel.alternate.cursor, gameGetSaveLinkSlot(0)->top);
    flaggedEntrySetValueA(quest->panelView.panel.alternate.cursor, gameGetSaveLinkSlot(0)->position);
    if (quest->list[gameGetSaveLinkSlot(1)->top + gameGetSaveLinkSlot(1)->position] == 0 ||
        gameGetSaveLinkSlot(1)->top + uiListGetVisibleCount(quest->cursor.data) > gridNavigationGetItemCount(quest->cursor.data)) {
        gameGetSaveLinkSlot(1)->top = 0;
        gameGetSaveLinkSlot(1)->position = 0;
    }
    scrollOwnerSetValue(quest->cursor.data, gameGetSaveLinkSlot(1)->top);
    flaggedEntrySetValueA(quest->cursor.data, gameGetSaveLinkSlot(1)->position);
}

} /* extern "C" */
