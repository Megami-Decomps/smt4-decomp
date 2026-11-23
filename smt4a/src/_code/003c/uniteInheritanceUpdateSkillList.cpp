/* NON_MATCHING: 193 lines (475 vs 474 rows), allocation only: retail keeps the frame sprite in r0 while it sets up
 * the scroll call's stack arguments, keeps the last row's touch state in r6 and the item count on the stack (this
 * build the reverse), copies the slots with one ldm/stm of four words (this build splits it) with other scratch
 * registers in the compaction loop, loads a pair entry's two words with ldm, and loads returnTo into the flag's
 * own register before FUN_0037e1b0. Naming that flag in an if/else local brings the unit to 52 lines through
 * the allocation of those far blocks, not through its own code, so the argument stays written in place. */
#include <string.h>
#include "code/Code002a_VariantA.h"
#include "code/Code002a_Smt4a.h"
#include "code/Code0023.h"
#include "camp/Unite/UniteWork.h"
#include "shard/Shard0031.h"
#include "shard/Shard0032.h"
#include "ui/IfTouch.h"
#include "ui/UiControl.h"
#include "gamedata/GameDataAccess.h"
#include "code/Code002c_Smt4a.h"
#include "gfx/TrackedRecord.h"
#include "shard/W6_W6Match3_ScrollSelection.h"
#include "shard/W5_W5Match7_FlagBanks.h"
#include "util/BitsAndBytes_VariantC.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
u32 uiScrollHandleActionsOrTouch(ScrollSelection *entry, const TextureTableEntryIV *rectangle, const s16 *ids,
    u32 firstKey, u32 secondKey, u32 thirdKey, s8 *blockedMode, s32 secondary, s32 notify);
s32 gridNavigationHandleConfirm(ScrollSelection *entry, s32 mode);
s32 uiSearchPrimary(ScrollSelection *list);
void scrollOwnerSetValue(ScrollSelection *list, s32 value);
void skillHelpUpdateAttributeAndTarget(u32 id);
void buttonHelpSetText(u32 mode, u32 color);
u32 padQueryLogicalKey(u32 button, u32 mode);
void unitRecordBuild(u32 id, UnitRecord *record);
void uniteMenuChangeState(u32 channel, u32 mode);
u32 uniteStartOrQueueRequest(s32 request);
void partyPanelRemoveLastFusionParent(void);
void FUN_002a7b74(void);
void FUN_00284ee4(s32 start);
void FUN_002c8550(s32 state);
void FUN_0037e1b0(s32 value, u8 flag);

/* Runs the skill inheritance screen's candidate list: moves the cursor between the rows and the button
 * strip below them, puts the chosen skill into a free slot (or all that fit, on button 9), and on
 * cancel takes back the last one or leaves the screen. Returns 1 once the strip confirms the slots. */
u32 uniteInheritanceUpdateSkillList(UniteWorkA *work, s8 blocked, u32 *selected)
{
    u32 result = 0;

    if (uiScrollHandleActionsOrTouch(&work->inheritanceA.skillList, asdTMTexTableEntryAt(0x1A, 0x1F6),
            work->touchA.rowRegions, work->touchA.scrollThumbRegion, work->touchA.scrollUpRegion,
            work->touchA.scrollDownRegion, &blocked, 0, 1) != 0 ||
        gridNavigationHandleConfirm(&work->inheritanceA.skillList, 1) != 0) {
        /* the cursor moved */
        s32 row = listCursorGetRowIfUnblocked(&work->inheritanceA.skillList);
        s32 index = resourceRunOperationIfUnblocked((Object *)&work->inheritanceA.skillList) + listCursorGetRowIfUnblocked(&work->inheritanceA.skillList);
        s32 first = resourceRunOperationIfUnblocked((Object *)&work->inheritanceA.skillList);

        if (work->inheritanceA.rowLimit > 8 && !blocked) {
            s32 touched = recordGetModeForId(work->touchA.rowRegions[work->selectionA.selectedIndex]);
            s32 lastTouched = recordGetModeForId(work->touchA.rowRegions[7]);
            s32 count = gridNavigationGetItemCount((Object *)&work->inheritanceA.skillList);
            s8 wasOnStrip = work->inheritanceA.stripSelected;

            work->inheritanceA.stripSelected = 0;
            if (touched != 0) {
                flaggedEntrySetValueA((FlaggedEntry *)&work->inheritanceA.skillList, uiSearchPrimary(&work->inheritanceA.skillList) - 1);
                work->inheritanceA.stripSelected = 1;
            } else if (lastTouched == 0) {
                if (wasOnStrip && padQueryLogicalKey(6, 1) != 0) {
                    /* up from the strip: back to the last row */
                    if (first <= 1) {
                        scrollListSetSelectionTracked(&work->inheritanceA.skillList, 0);
                    } else {
                        scrollOwnerSetValue(&work->inheritanceA.skillList, first - 2);
                        flaggedEntrySetValueA((FlaggedEntry *)&work->inheritanceA.skillList, 1);
                    }
                } else if (row >= 7 && index < count - 2) {
                    /* keep the last visible row for the strip: scroll instead */
                    s32 top = resourceRunOperationIfUnblocked((Object *)&work->inheritanceA.skillList);

                    flaggedEntrySetValueA((FlaggedEntry *)&work->inheritanceA.skillList, row - 1);
                    scrollOwnerSetValue(&work->inheritanceA.skillList, top + 1);
                }
            }
        }
        if (index >= work->inheritanceA.rowLimit || work->inheritanceA.stripSelected) {
            screenStartOrClear((s32)work->menu.messageFile, 0x1A);
        } else {
            skillHelpUpdateAttributeAndTarget(work->inheritanceA.skills[index]);
        }
    } else if ((padQueryLogicalKey(0, 1) | (s32)blocked) != 0) {
        s32 index = resourceRunOperationIfUnblocked((Object *)&work->inheritanceA.skillList) + listCursorGetRowIfUnblocked(&work->inheritanceA.skillList);

        if (index >= work->inheritanceA.rowLimit || work->inheritanceA.stripSelected) {
            /* the strip: confirm the slots, closing the gaps between them */
            for (s32 i = 0; i < 8; i++) {
                if (work->inheritanceA.slots[i] != 0) {
                    UniteSkillSlots chosen = work->inheritanceA.slotSet;
                    s32 count = 0;

                    memset(work->inheritanceA.slots, 0, sizeof(work->inheritanceA.slots));
                    for (s32 j = 0; j < 8; j++) {
                        if (chosen.ids[j] != 0) {
                            work->inheritanceA.slots[count++] = chosen.ids[j];
                        }
                    }
                    work->inheritanceA.stripSelected = 0;
                    result = 1;
                    break;
                }
            }
            if (result == 0) {
                FUN_002a7b74();
                uniteStartOrQueueRequest(14);
                eventQueueAddUniqueIfValid(0x100020F);
            }
        } else if (arrayContainsU16(work->inheritanceA.slots, 8, work->inheritanceA.skills[index]) != 0) {
            /* already chosen */
            uniteMenuChangeState(0x11, 0);
            eventQueueAddUniqueIfValid(0x100020F);
        } else if (index >= work->inheritanceA.skillCount) {
            eventQueueAddUniqueIfValid(0x100020F);
        } else {
            eventQueueAddUniqueIfValid(0x100020E);
            work->inheritanceA.accepted = 0;
            u16 id = work->inheritanceA.slots[resourceRunOperationIfUnblocked((Object *)&work->inheritanceA.slotList) +
                                              listCursorGetRowIfUnblocked(&work->inheritanceA.slotList)];
            if (id != 0) {
                skillHelpUpdateAttributeAndTarget(id);
            } else {
                buttonHelpSetText(0, 0xF4F4F4FF);
            }
        }
    } else if (padQueryLogicalKey(9, 1) != 0) {
        /* fill the free slots with the candidates not chosen yet */
        eventQueueAddUniqueIfValid(0x100020E);
        for (s32 i = 0; i < 24; i++) {
            if (work->inheritanceA.skills[i] != 0 &&
                arrayContainsU16(work->inheritanceA.slots, 8, work->inheritanceA.skills[i]) == 0) {
                if (i >= work->inheritanceA.skillCount) {
                    break;
                }
                if (work->history.previous == 30) {
                    *selected = 0;
                } else {
                    *selected = work->pairSort.sortedPairs[resourceRunOperationIfUnblocked((Object *)&work->pairSort.pairList) +
                                                           listCursorGetRowIfUnblocked(&work->pairSort.pairList)];
                }

                UnitRecord record;
                unitRecordBuild(work->pairSort.pairs[*selected].resultId, &record);
                s32 unlocked = getUnlockedSlotCount(&record);
                for (s32 slot = 0; slot < unlocked; slot++) {
                    if (work->inheritanceA.slots[slot] == 0) {
                        work->inheritanceA.slots[slot] = work->inheritanceA.skills[i];
                        work->inheritanceA.freedSlots[work->inheritanceA.freedCount] = slot;
                        work->inheritanceA.freedCount++;
                        break;
                    }
                }
            }
        }
    } else if (padQueryLogicalKey(10, 1) == 0 && padQueryLogicalKey(1, 1) != 0) {
        if (work->inheritanceA.freedCount <= 0) {
            /* cancel with nothing chosen: leave the screen */
            bool keepHelp = false;

            if (work->history.previous == 28) {
                work->history.returnTo = 28;
            } else if (work->history.previous == 2) {
                work->history.returnTo = 2;
                work->returnState.helpAvailable = 0;
            } else if (work->history.previous == 30) {
                work->history.returnTo = 30;
                partyPanelRemoveLastFusionParent();
                FUN_0023b45c(0);
                FUN_00284ee4(1);
                keepHelp = true;
                work->pairSort.pairKind = 2;
            } else {
                work->history.returnTo = 13;
            }
            uniteMenuChangeState(0x24, 1);
            for (s32 i = 0; i < 8; i++) {
                if (work->touchA.rowRegions[i] >= 0) {
                    work->touchA.rowRegions[i] = -1;
                    ifTouchRegionRemove();
                }
            }
            for (s32 i = 0; i < 8; i++) {
                if (work->touchA.slotRegions[i] >= 0) {
                    work->touchA.slotRegions[i] = -1;
                    ifTouchRegionRemove();
                }
            }
            work->touchA.scrollThumbRegion = -1;
            work->touchA.scrollUpRegion = -1;
            work->touchA.scrollDownRegion = -1;
            ifTouchRegionRemove();
            ifTouchRegionRemove();
            ifTouchRegionRemove();
            FUN_0037e1b0(work->pairSort.pairKind, work->history.returnTo == 30 ? 0 : 1);
            FUN_002c8550(1);
            if (!keepHelp) {
                buttonHelpSetText(0, 0xF4F4F4FF);
            }
        } else {
            /* cancel: take back the last skill */
            uniteMenuChangeState(0x12, 0);
        }
        eventQueueAddUniqueIfValid(0x100020F);
    }
    return result;
}

} /* extern "C" */
