/* NON_MATCHING: retail's calls, constants, blocks and state changes, in its order. What still differs: in the
 * selection helper retail loads the detail messages before it finishes reading the id, and of its two inlined copies
 * retail keeps the selectedId/detailMode stores in the second one, this build in the first; retail sends every sound
 * but the sort menu's through the confirmation arm's eventQueueAddUniqueIfValid call, this build keeps the paging
 * and accept arms' own calls; and the accept scripts for kind 11 and the other kinds start through one predicated
 * call where retail has two. */
#include "shard/W5_W5Match7_UiQuest.h"
#include "ui/UiSpriteApi.h"
#include "ui/GridNavigation.h"
#include "quest_center/QuestRecordA.h"
#include "camp/CampStateQueries.h"
#include "gamedata/GameDataAccess_Shard0031.h"
#include "shard/W6_W6Match1_BgmRequestChannel.h"
#include "shard/W6_W6Match4_RelativeDirectory.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "shard/W5_W5Match7_FlagBanks.h"
#include "code/Code002a_VariantA.h"
#include "code/Code002f.h"

/* Sounds of the quest menu. */
#define QUEST_SE_DECIDE 0x100020E
#define QUEST_SE_CANCEL 0x100020F
#define QUEST_SE_PAGE 0x1000210

extern "C" {

s32 objectApplyIfUnblocked(GridNavigation *object); // declcheck: local (the shared prototype takes the opaque Object; the list is a GridNavigation)
s32 padQueryLogicalKey(s32 key, s32 mode);
s32 resourceRunOperationIfUnblocked(GridNavigation *object); // declcheck: local (as above)
u32 uiScrollHandleActionsOrTouch(GridNavigation *list, const TextureTableEntryIV *touchArea, const s16 *rowRegions,
                                 s32 thumbRegion, s32 previousRegion, s32 nextRegion, s8 *touched, s32 secondary,
                                 s32 notify);
u8 FUN_00228b04(GridNavigation *list, s32 mode);
void FUN_003d498c(u32 id, u32 mode);
void FUN_003d474c(void);
void FUN_0023ff10(void);
u32 partyEntryBitsBit4(s32 index);
u32 questHasSpecialDetailPage(u32 id);
void questMarkSelectedSpecialDetail(void);
void FUN_00417d08(UiQuestApoc *quest);
void buttonHelpSetText(const s8 *text, u32 color);
void sortMenuAcquire(u32 owner, u8 option);
void useCounterStart(void);
void FUN_003dea6c(u16 definitionId, s32 includeArguments, s32 convertTitle);
u32 questRecordIsUsable(u32 id);
s32 questQueryFalse(void);
u32 partyEntryFlagsBit3(s32 index);
u8 rosterHasLeader(void); // declcheck: local (its header belongs to the memory manager)
u32 scrScriptProcessStartEntry(ScriptProcess *process, s32 entryIndex);
void sysPlaySe(u32 id);
s32 recordCategoryNineIsActiveInMode24(u32 recordId);
void FUN_00212724(void);
void slotBlockSetPair(u32 index, u32 first, u32 second);

/* The quest under the list cursor. */
static __inline u16 questListCurrentId(GridNavigation *cursor, const u16 *ids)
{
    u32 top = resourceRunOperationIfUnblocked(cursor);
    u32 row = listCursorGetRowIfUnblocked(cursor);
    return ids[row + top];
}

/* Frees the detail panel's messages unless the add-on data owns them. */
static __inline void questReleaseDetailMessages(UiQuestApoc *quest)
{
    if (quest->detailMessages != NULL) {
        if (!quest->messageOwnership.addonOwned)
            asdMemFree(quest->detailMessages);
        quest->detailMessages = NULL;
    }
}

/* Opens a special quest's detail on its first special page (page 0 when it has none); the same block
 * is inlined in uiQuestReturnToList and FUN_00334560. */
static __inline void uiQuestSelectSpecialDetailPage(u16 id)
{
    UiQuestApoc *quest = g_uiQuest;
    if (!partyEntryBitsBit4(id) && questHasSpecialDetailPage(id)) {
        s32 index;
        for (index = 0; index < quest->listState.count; ++index) {
            if (FUN_002f7730(index, id) == 3)
                break;
        }
        if (index >= quest->listState.count)
            index = 0;
        quest->listState.selection = index;
        quest->listState.nextSelection = index;
    }
}

/* Shows `id` in the detail panel: drops the previous quest's messages, binds the new ones and
   restarts the selection timer. */
static __inline void questListSelect(UiQuestApoc *quest, u16 id)
{
    questReleaseDetailMessages(quest);
    FUN_003d498c(id, 1);
    FUN_003d474c();
    FUN_0023ff10();
    uiQuestSelectSpecialDetailPage(id);
    if (quest->detailMode > 2)
        questMarkSelectedSpecialDetail();
    if (quest->selectedId != id && quest->detailMode > 2)
        FUN_00417d08(quest);
    quest->selectedId = id;
    quest->detailMode = 0;
}

/* The quest list's input: scrolling, paging between categories, the sort menu, accepting the
   quest under the cursor, and leaving. */
void uiQuestListInput(void)
{
    UiQuestApoc *quest = g_uiQuest;
    GridNavigation *cursor;
    const u16 *ids;
    u16 before;
    s8 touched;

    if (quest->unk90c != 0) {
        cursor = reinterpret_cast<GridNavigation *>(quest->alternateView()->cursor);
        ids = quest->alternateView()->list;
    } else {
        cursor = reinterpret_cast<GridNavigation *>(quest->cursor);
        ids = quest->list;
    }

    if (objectApplyIfUnblocked(cursor) <= 0) {
        /* An empty list can only be left. */
        if (padQueryLogicalKey(1, 1)) {
            uiSpriteSetKeyframe(quest->sprite(0), 2, 0);
            uiSpriteSetImageKeyframe(quest->sprite(0), 9, 0);
            uiQuestEnterMenuState(g_uiQuest, 3);
            eventQueueAddUniqueIfValid(QUEST_SE_CANCEL);
        }
    } else {
        before = questListCurrentId(cursor, ids);
        touched = 0;

        if (uiScrollHandleActionsOrTouch(cursor, asdTMTexTableEntryAt(0x1E, 0xC1), quest->touch.rowRegions,
                                         quest->touch.scrollThumbRegion, quest->touch.scrollUpRegion,
                                         quest->touch.scrollDownRegion, &touched, 0, 1)) {
            if (questListCurrentId(cursor, ids) != before)
                questListSelect(quest, questListCurrentId(cursor, ids));
        } else if (FUN_00228b04(cursor, 1)) {
            questListSelect(quest, questListCurrentId(cursor, ids));
        } else if (padQueryLogicalKey(8, 0)) {
            /* Previous category. */
            quest->listState.nextSelection = quest->listState.selection;
            quest->listState.nextSelection--;
            if (quest->listState.nextSelection < 0)
                quest->listState.nextSelection = quest->listState.count - 1;
            if (quest->listState.nextSelection != quest->listState.selection) {
                uiSpriteSetKeyframe(quest->sprite(3), 3, 0);
                uiSpriteSetImageKeyframe(quest->sprite(3), 9, 0);
                uiQuestEnterMenuState(g_uiQuest, 5);
                eventQueueAddUniqueIfValid(QUEST_SE_PAGE);
            }
        } else if (padQueryLogicalKey(7, 0)) {
            /* Next category. */
            quest->listState.nextSelection = quest->listState.selection;
            quest->listState.nextSelection++;
            if (quest->listState.nextSelection >= quest->listState.count)
                quest->listState.nextSelection = 0;
            if (quest->listState.nextSelection != quest->listState.selection) {
                uiSpriteSetKeyframe(quest->sprite(3), 2, 0);
                uiSpriteSetImageKeyframe(quest->sprite(3), 9, 0);
                uiQuestEnterMenuState(g_uiQuest, 5);
                eventQueueAddUniqueIfValid(QUEST_SE_PAGE);
            }
        } else if (quest->unk90c == 0 && padQueryLogicalKey(9, 1)) {
            /* The sort menu. */
            eventQueueAddUniqueIfValid(QUEST_SE_DECIDE);
            buttonHelpSetText(NULL, 0xF4F4F4FF);
            sortMenuAcquire(14, 0);
            FUN_0031f208(0x22);
            FUN_0031f208(0x21);
            FUN_0031f208(0x18);
            FUN_0031f208(0x19);
            useCounterStart();
            uiQuestEnterMenuState(g_uiQuest, 30);
        } else if (quest->unk90c == 0 && !quest->unk93D && padQueryLogicalKey(10, 1)) {
            /* IV jumped to the quest in progress here; Apocalypse only swallows the key. */
        } else if (quest->unk90c == 0 && (padQueryLogicalKey(0, 1) || touched)) {
            u16 id = questListCurrentId(cursor, ids);

            if (quest->unk93D) {
                uiQuestEnterMenuState(g_uiQuest, 13);
                eventQueueAddUniqueIfValid(QUEST_SE_DECIDE);
            } else {
                QuestRecordA *record = questDataGetRecord(id);
                bool accepted = false;

                FUN_003dea6c(id, 0, 1);
                if (record->kind == 6 || record->kind == 9 || record->kind == 11) {
                    if (questRecordIsUsable(id) || questQueryFalse()) {
                        if (!partyEntryFlagsBit3(id) || record->kind == 9) {
                            if (rosterHasLeader()) {
                                /* Another quest is in progress. */
                                if (rosterGetLeaderId() != id && scrScriptProcessStartEntry(quest->script.process, 4)) {
                                    sysPlaySe(0xB2);
                                    uiQuestEnterMenuState(g_uiQuest, 10);
                                    accepted = true;
                                }
                            } else {
                                u32 started;

                                if (record->kind != 6) {
                                    if (record->kind != 11)
                                        started = scrScriptProcessStartEntry(quest->script.process, 0);
                                    else
                                        started = scrScriptProcessStartEntry(quest->script.process, 18);
                                } else {
                                    started = scrScriptProcessStartEntry(quest->script.process, 17);
                                }
                                if (started) {
                                    uiQuestEnterMenuState(g_uiQuest, 6);
                                    sysPlaySe(0xE4);
                                    accepted = true;
                                }
                            }
                        }
                    } else if (recordCategoryNineIsActiveInMode24(id)) {
                        if (scrScriptProcessStartEntry(quest->script.process, 4)) {
                            sysPlaySe(0xB2);
                            uiQuestEnterMenuState(g_uiQuest, 10);
                        }
                    }
                }
                if (accepted)
                    eventQueueAddUniqueIfValid(QUEST_SE_DECIDE);
            }
        } else if (padQueryLogicalKey(1, 1)) {
            /* Leave the list. */
            uiSpriteSetKeyframe(quest->sprite(0), 2, 0);
            uiSpriteSetImageKeyframe(quest->sprite(0), 9, 0);
            uiQuestEnterMenuState(g_uiQuest, 3);
            if (campIsState85())
                FUN_00212724();
            questMarkSelectedSpecialDetail();
            if (quest->selectedId != 0) {
                FUN_00417d08(quest);
                quest->selectedId = 0;
            }
            eventQueueAddUniqueIfValid(QUEST_SE_CANCEL);
        }

        /* Remember where the cursor is, per list. */
        if (quest->unk90c != 0)
            slotBlockSetPair(0, flaggedEntryGetValueA(reinterpret_cast<FlaggedEntry *>(cursor)),
                             resourceRunOperationIfUnblocked(cursor));
        else
            slotBlockSetPair(1, flaggedEntryGetValueA(reinterpret_cast<FlaggedEntry *>(cursor)),
                             resourceRunOperationIfUnblocked(cursor));
    }
    quest->detailMode++;
}

} /* extern "C" */
