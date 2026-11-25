/* NON_MATCHING: retail's calls, constants, blocks and state changes, in its order. What still differs: the id list
 * and the scratch register that later holds quest+0x900 are in each other's registers (r5/r7); in the selection helper
 * retail loads the text directory before it finishes reading the id and clears it through the quest pointer, and of
 * the helper's two inlined copies retail keeps the selectedId/detailMode stores in the second one, this build in the
 * first. */
#include "shard/W4_W4Match2_UiQuest.h"
#include "ui/UiSpriteApi.h"
#include "ui/GridNavigation.h"
#include "quest_center/QuestRecord.h"
#include "quest_center/qcMain.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/GameDataAccess_Shard0031.h"
#include "shard/W6_W6Match1_BgmRequestChannel.h"
#include "shard/W6_W6Match4_RelativeDirectory.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "shard/W5_W5Match7_FlagBanks.h"
#include "camp/ButtonHelp/ButtonHelp.h"
#include "code/Code0029_Smt4.h"
#include "code/Code0029_VariantA.h"
#include "code/Code0029_VariantB.h"
#include "script/ScriptEntry.h"

/* Sounds of the quest menu. */
#define QUEST_SE_DECIDE 0x100016D
#define QUEST_SE_CANCEL 0x100016E
#define QUEST_SE_PAGE 0x100016F

extern "C" {

s32 inputQueryButtonState(s32 button, s32 mode);
u32 resourceRunOperationIfUnblocked(const GridNavigation *grid);
u32 uiScrollHandleActionsOrTouch(GridNavigation *list, const TextureTableEntryIV *touchArea, const s16 *rowRegions,
                                 s32 thumbRegion, s32 previousRegion, s32 nextRegion, s8 *touched, s32 secondary,
                                 s32 notify);
u8 gridNavigationHandleConfirm(GridNavigation *list, s32 notify);
void uiQuestLoadDetailText(u16 quest, u32 state);
void uiQuestShowStatusHelp(void);
void uiQuestRefreshButtonHelp(void);
void questClearOwnerModeBitsIfEligible(UiQuest *quest);
void buttonHelpSetText(const s8 *text, u32 style);
void sortMenuCreate(u32 owner, u8 option);
void useCounterStart(void);
void uiBindRecordRewardText(u32 id, s32 showRewards, s32 description);
bool questIsOfferable(u16 questId);
s32 questQueryFalse(void);
u32 questIsCompleted(s32 index);
s32 recordCategoryNineIsActiveInMode24(u32 recordId);
s32 gameFlagIsSet(u32 flag); // declcheck: local (its headers belong to the battle and camp menus)
void gameDataSetLinkSlot(u32 index, u32 firstWord, u32 secondWord);

/* The quest under the list cursor. */
static __inline u16 questListCurrentId(GridNavigation *cursor, const u16 *ids)
{
    u32 top = resourceRunOperationIfUnblocked(cursor);
    u32 row = listCursorGetRowIfUnblocked(cursor);
    return ids[row + top];
}

/* Frees the detail panel's text directory unless the add-on data owns it. */
static __inline void questPanelReleaseDirectory(UiQuestPanel *panel)
{
    if (panel->entryDirectory != 0) {
        if (!panel->entryOwnership.borrowed)
            asdMemFree(reinterpret_cast<void *>(panel->entryDirectory));
        panel->entryDirectory = 0;
    }
}

/* Shows `id` in the detail panel: drops the previous quest's text directory, binds the new one and
   restarts the selection timer. */
static __inline void questListSelect(UiQuest *quest, u16 id)
{
    questPanelReleaseDirectory(&quest->panelView.panel);
    uiQuestLoadDetailText(id, 1);
    uiQuestShowStatusHelp();
    uiQuestRefreshButtonHelp();
    if (quest->selectedId != id && quest->detailMode > 2)
        questClearOwnerModeBitsIfEligible(quest);
    quest->selectedId = id;
    quest->detailMode = 0;
}

/* A message script that only informs was started: wait for it in state 10. */
static __inline void questListShowRefusal(void)
{
    buttonHelpSetPreset(0xB0);
    uiQuestEnterState(g_uiQuest, 10);
}

/* The quest list's input: scrolling, paging between categories, the sort menu, accepting or
   reporting the quest under the cursor, and leaving. */
void uiQuestListInput(void)
{
    UiQuest *quest = g_uiQuest;
    GridNavigation *cursor;
    const u16 *ids;
    u16 before;
    s8 touched;

    if (quest->panelView.panel.detailMode != 0) {
        cursor = reinterpret_cast<GridNavigation *>(quest->panelView.panel.alternate.cursor);
        ids = quest->cursor.alternate.ids;
    } else {
        cursor = reinterpret_cast<GridNavigation *>(&quest->cursor);
        ids = quest->list;
    }

    if (static_cast<s32>(gridNavigationGetItemCount(cursor)) <= 0) {
        /* An empty list can only be left. */
        if (inputQueryButtonState(1, 1)) {
            uiSpriteSetKeyframe(&quest->sprites[0], 2, 0);
            uiQuestEnterState(g_uiQuest, 3);
            eventQueueAddUniqueIfValid(QUEST_SE_CANCEL);
        }
    } else {
        before = questListCurrentId(cursor, ids);
        touched = 0;

        if (uiScrollHandleActionsOrTouch(cursor, asdTMTexTableEntryAt(0x29, 0xC1), quest->touch.rowRegions,
                                         quest->touch.scrollThumbRegion, quest->touch.scrollUpRegion,
                                         quest->touch.scrollDownRegion, &touched, 0, 1)) {
            if (questListCurrentId(cursor, ids) != before)
                questListSelect(quest, questListCurrentId(cursor, ids));
        } else if (gridNavigationHandleConfirm(cursor, 1)) {
            questListSelect(quest, questListCurrentId(cursor, ids));
        } else if (inputQueryButtonState(8, 0)) {
            /* Previous category. */
            quest->panelView.panel.nextSelection = quest->panelView.panel.selection;
            quest->panelView.panel.nextSelection--;
            if (quest->panelView.panel.nextSelection < 0)
                quest->panelView.panel.nextSelection = quest->panelView.panel.page - 1;
            if (quest->panelView.panel.nextSelection != quest->panelView.panel.selection) {
                uiSpriteSetKeyframe(&quest->sprites[3], 3, 0);
                uiQuestEnterState(g_uiQuest, 5);
                eventQueueAddUniqueIfValid(QUEST_SE_PAGE);
            }
        } else if (inputQueryButtonState(7, 0)) {
            /* Next category. */
            quest->panelView.panel.nextSelection = quest->panelView.panel.selection;
            quest->panelView.panel.nextSelection++;
            if (quest->panelView.panel.nextSelection >= quest->panelView.panel.page)
                quest->panelView.panel.nextSelection = 0;
            if (quest->panelView.panel.nextSelection != quest->panelView.panel.selection) {
                uiSpriteSetKeyframe(&quest->sprites[3], 2, 0);
                uiQuestEnterState(g_uiQuest, 5);
                eventQueueAddUniqueIfValid(QUEST_SE_PAGE);
            }
        } else if (quest->panelView.panel.detailMode == 0 && inputQueryButtonState(9, 1)) {
            /* The sort menu. */
            eventQueueAddUniqueIfValid(QUEST_SE_DECIDE);
            buttonHelpSetText(NULL, 0x323232FF);
            sortMenuCreate(14, 0);
            useCounterAppendValue(0x22);
            useCounterAppendValue(0x21);
            useCounterAppendValue(0x18);
            useCounterAppendValue(0x19);
            useCounterAppendValue(0x1A);
            useCounterStart();
            uiQuestEnterState(g_uiQuest, 30);
        } else if (quest->panelView.panel.detailMode == 0 && !quest->panelView.panel.confirming && inputQueryButtonState(10, 1)) {
            /* Jump to the quest in progress. */
            if (rosterGetLeaderId() != 0) {
                uiBindRecordRewardText(rosterGetLeaderId(), 0, 1);
                if (scrScriptProcessStartEntry(quest->script.process, 1)) {
                    buttonHelpSetPreset(0xE2);
                    eventQueueAddUniqueIfValid(QUEST_SE_DECIDE);
                    uiQuestEnterState(g_uiQuest, 7);
                }
            }
        } else if (quest->panelView.panel.detailMode == 0 && (inputQueryButtonState(0, 1) || touched)) {
            u16 id = questListCurrentId(cursor, ids);

            if (quest->panelView.panel.confirming) {
                uiQuestEnterState(g_uiQuest, 13);
            } else if (rosterGetLeaderId() == id) {
                /* The quest in progress: offer to abandon it. */
                uiBindRecordRewardText(rosterGetLeaderId(), 0, 1);
                if (scrScriptProcessStartEntry(quest->script.process, 1)) {
                    buttonHelpSetPreset(0xE2);
                    uiQuestEnterState(g_uiQuest, 7);
                }
            } else {
                QuestRecord *record = questDataGetRecord(id);

                uiBindRecordRewardText(id, 0, 1);
                if (record->kind == 0) {
                    /* A delivery quest: report it or say why not. */
                    if (questIsCompleted(id)) {
                        if (questIsReported(id)) {
                            if (scrScriptProcessStartEntry(quest->script.process, 5))
                                questListShowRefusal();
                        } else {
                            if (scrScriptProcessStartEntry(quest->script.process, 8))
                                questListShowRefusal();
                        }
                    } else {
                        if (scrScriptProcessStartEntry(quest->script.process, 5))
                            questListShowRefusal();
                    }
                } else if (questIsOfferable(id) || questQueryFalse()) {
                    buttonHelpSetPreset(0xE2);
                    if (record->sortKey > 2 && (record->sortKey - 2) * 5 > gameGetPlayerData()->level) {
                        /* The player's level is too low. */
                        if (scrScriptProcessStartEntry(quest->script.process, 6))
                            uiQuestEnterState(g_uiQuest, 11);
                    } else if (rosterHasLeader()) {
                        /* Another quest is in progress. */
                        if (scrScriptProcessStartEntry(quest->script.process, 2))
                            uiQuestEnterState(g_uiQuest, 8);
                    } else {
                        if (scrScriptProcessStartEntry(quest->script.process, 0))
                            uiQuestEnterState(g_uiQuest, 6);
                    }
                } else {
                    if (recordCategoryNineIsActiveInMode24(id)) {
                        if (scrScriptProcessStartEntry(quest->script.process, 4))
                            questListShowRefusal();
                    } else if (questIsCompleted(id)) {
                        if (scrScriptProcessStartEntry(quest->script.process, 8))
                            questListShowRefusal();
                    } else {
                        if (scrScriptProcessStartEntry(quest->script.process, 4))
                            questListShowRefusal();
                    }
                }
            }
            eventQueueAddUniqueIfValid(QUEST_SE_DECIDE);
        } else if (!gameFlagIsSet(0x216) && inputQueryButtonState(1, 1)) {
            /* Leave the list. */
            uiSpriteSetKeyframe(&quest->sprites[0], 2, 0);
            uiQuestEnterState(g_uiQuest, 3);
            if (quest->selectedId != 0) {
                questClearOwnerModeBitsIfEligible(quest);
                quest->selectedId = 0;
            }
            eventQueueAddUniqueIfValid(QUEST_SE_CANCEL);
        }

        /* Remember where the cursor is, per list. */
        if (quest->panelView.panel.detailMode != 0)
            gameDataSetLinkSlot(0, flaggedEntryGetValueA(reinterpret_cast<FlaggedEntry *>(cursor)),
                                resourceRunOperationIfUnblocked(cursor));
        else
            gameDataSetLinkSlot(1, flaggedEntryGetValueA(reinterpret_cast<FlaggedEntry *>(cursor)),
                                resourceRunOperationIfUnblocked(cursor));
    }
    quest->detailMode++;
}

} /* extern "C" */
