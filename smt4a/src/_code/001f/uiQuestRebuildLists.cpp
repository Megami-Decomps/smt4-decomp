#include "common.h"
#include "gamedata/GameDataAccess.h"
#include "quest_center/QuestRequirement.h"
#include "quest_center/QuestRecordA.h"
#include "shard/W6_W6Match3_ScrollSelection.h"
#include "shard/W5_W5Match7_UiQuest.h"
#include "gamedata/GameSaveLinkSlot.h"
#include "runtime/String.h"

extern "C" {
void *sysMemClear(void *destination, u32 size);
void qsort(void *elements, u32 count, u32 elementSize, int (*compare)(const void *, const void *));
int dataTable1bOr1cCompareRecordKeys(const void *first, const void *second);
u32 dataTable1bOr1cRecordHasFlag1(u32 id);
s32 questGetRequirementProgress(u32 quest, s32 index, QuestRequirementProgress *progress);
u32 questHasNewMark(s32 index);
u32 questIsCompleted(s32 index);
u8 idIsAtLeast350(u32 value);
s32 questIsReported(u32 id);
void gridNavigationConfigure(ScrollSelection *list, s32 count, s32 columns, s32 first, s32 second, s32 third);
void uiQuestSortListByEntryKind(s32 mode);
s32 uiListGetVisibleCount(ScrollSelection *list);
s32 gridNavigationGetItemCount(ScrollSelection *list);
GameSaveLinkSlot *gameGetSaveLinkSlot(s32 index);
void scrollOwnerSetValue(ScrollSelection *list, s32 value);
void flaggedEntrySetValueA(ScrollSelection *list, s32 value);

/* Rebuilds the quest menu's two lists (the alternate list of quests to report, and the open quests, filtered
 * by the requested category), selects the first entry of interest in each and restores the saved scroll.
 * The locals are declared once at the top (C89 style) and shared by the loops, as in IV's twin. */
void uiQuestRebuildLists(void)
{
    UiQuestApoc *menu = g_uiQuest;
    s32 reportCount = 0;
    s32 openCount = 0;
    bool listed;
    s32 i;
    u16 id;
    QuestRecordA *record;

    sysMemClear(menu->alternateView()->list, sizeof(menu->alternateView()->list));
    rt_memclr(menu->list, sizeof(menu->list));
    for (id = 0; id < 400; id++) {
        if (id < 350 && gameFlagEntryGetBit(id, 0) == 0)
            continue;
        if (id >= 350 && questDataGetRecord(id) == NULL)
            continue;
        if (dataTable1bOr1cRecordHasFlag1(id) != 0) {
            menu->alternateView()->list[reportCount++] = id;
            continue;
        }
        listed = true;
        if (menu->filtered != 0) {
            record = questDataGetRecord(id);
            if (record == NULL || record->kind != 0)
                continue;
            /* A quest with one of its four requirements still open (or completed without being reported) is
             * not listed. */
            for (i = 0; i < 4; i++) {
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
            if (listed && idIsAtLeast350(id) == 0 && record->filterKind != 0) {
                switch (menu->filterMode) {
                case 0:
                    continue;
                case 1:
                    if (record->filterKind != 1)
                        continue;
                    break;
                case 9:
                case 10:
                case 11:
                case 12:
                case 13:
                    break;
                default:
                    if (record->filterKind == 1)
                        listed = false;
                    break;
                }
            }
            if (!listed)
                continue;
        }
        menu->list[openCount++] = id;
    }
    qsort(menu->alternateView()->list, reportCount, sizeof(u16), dataTable1bOr1cCompareRecordKeys);
    gridNavigationConfigure((ScrollSelection *)menu->alternateView()->cursor, reportCount, 10, 1, 1, 1);
    gridNavigationConfigure((ScrollSelection *)menu->cursor, openCount, 10, 1, 1, 1);
    uiQuestSortListByEntryKind(0);
    for (i = 0; i < reportCount; i++) {
        if (questHasNewMark(menu->alternateView()->list[i]) != 0) {
            scrollListSetSelectionTracked((ScrollSelection *)menu->alternateView()->cursor, i);
            break;
        }
    }
    for (i = 0; i < openCount; i++) {
        if (questHasNewMark(menu->list[i]) != 0) {
            record = questDataGetRecord(menu->list[i]);
            if (record != NULL && record->kind != 0 && record->kind != 10) {
                scrollListSetSelectionTracked((ScrollSelection *)menu->cursor, i);
                break;
            }
        }
    }
    if (menu->filtered != 0)
        return;
    if (menu->alternateView()->list[gameGetSaveLinkSlot(0)->top + gameGetSaveLinkSlot(0)->position] == 0 ||
        gameGetSaveLinkSlot(0)->top + uiListGetVisibleCount((ScrollSelection *)menu->alternateView()->cursor) >
            gridNavigationGetItemCount((ScrollSelection *)menu->alternateView()->cursor)) {
        gameGetSaveLinkSlot(0)->top = 0;
        gameGetSaveLinkSlot(0)->position = 0;
    }
    scrollOwnerSetValue((ScrollSelection *)menu->alternateView()->cursor, gameGetSaveLinkSlot(0)->top);
    flaggedEntrySetValueA((ScrollSelection *)menu->alternateView()->cursor, gameGetSaveLinkSlot(0)->position);
    if (menu->list[gameGetSaveLinkSlot(1)->top + gameGetSaveLinkSlot(1)->position] == 0 ||
        gameGetSaveLinkSlot(1)->top + uiListGetVisibleCount((ScrollSelection *)menu->cursor) >
            gridNavigationGetItemCount((ScrollSelection *)menu->cursor)) {
        gameGetSaveLinkSlot(1)->top = 0;
        gameGetSaveLinkSlot(1)->position = 0;
    }
    scrollOwnerSetValue((ScrollSelection *)menu->cursor, gameGetSaveLinkSlot(1)->top);
    flaggedEntrySetValueA((ScrollSelection *)menu->cursor, gameGetSaveLinkSlot(1)->position);
}
}
