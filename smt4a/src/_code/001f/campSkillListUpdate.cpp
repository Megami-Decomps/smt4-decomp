/* NON_MATCHING: every instruction, branch, tail call, padding nop and address agrees with retail (604 rows each) except
 * one register trade: retail keeps the constant 1 in sl and the second MP-change lookup's temporary in fp, this build the
 * other way round (six instructions). */
#include "camp/CampStateA.h"
#include "camp/CampSkillList.h"
#include "camp/CampMenuEntry.h"
#include "camp/UIFade/UIFade.h"
#include "event/2dEvent/SmokeFade.h"
#include "gamedata/GameSaveDataA.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/SaveSlotRecord.h"
#include "network/DataStore/DataStoreMain.h"
#include "ui/UiControl.h"
#include "shard/W5_W5Match7_FlagBanks.h"
#include "shard/W6_W6Match1_PositionedStream.h"
#include "shard/W6_W6Match4_RelativeDirectory.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "code/Code0022_Smt4a.h"
#include "code/Code0023.h"
#include "code/Code002a.h"
#include "code/Code002a_Smt4a.h"
#include "code/Code002a_VariantA.h"
#include "code/Code002c.h"
#include "code/Code002c_Smt4a.h"
#include "code/Code0033.h"
#include "code/Code004b_Smt4a.h"

extern "C" {
s32 padQueryLogicalKey(s32 key, s32 mode);
void campTouchRegionsRemoveGroup(GridNavigation *list, s32 keep);
void campShowSelectedEntryHelp(s32 page);
void campChangeState(s32 newState);
void campResetScreen(void);
s32 uiSearchPrimary(GridNavigation *list);
u32 uiScrollHandleActionsOrTouch(GridNavigation *list, const TextureTableEntryIV *rectangle, const s16 *regions,
                                 s32 firstKey, s32 secondKey, s32 thirdKey, s8 *blockedMode, s32 secondary, s32 notify);
u8 gridNavigationHandleConfirm(GridNavigation *list, s32 mode);
void campListRegisterTouchRegions(GridNavigation *list, s32 mode);
/* One-instruction getters armlink inlined (config/inlined.txt). */
s32 uiStateGetFirstFlag(const void *block);
s32 uiStateGetSecondFlag(const void *block);
void statusPanelClose(void);
s8 FUN_0022e714(void);
void FUN_0035dbd4(u32 value);
s32 FUN_0035db94(void);
void FUN_0021b274(s32 mode, s32 image, u32 frame);
void FUN_003d386c(s32 useSelector);
s32 skillGetCostWithRankReduction(u32 id, s32 useSkillRank);
u32 FUN_002684d0(s32 skillId, s32 target);
void FUN_0031f718(s32 id, s32 useBaseStats, u32 flags);
void statusPanelSetOpen(s32 open);
void statusDisplayBindUnitRecord(SlotRecordA *record, s32 useBaseStats, u32 selection, const u32 *parameters);
u8 buttonHelpScriptStart(u32 request);
void buttonHelpSetText(const s8 *text, u32 color);
u16 ifTouchGetButtonHelpValue(void);
void sysPlaySe(u32 id);
void flagBanksResetPendingState(s32 overrideEnabled);
void sortMenuAcquire(u32 owner, u8 option);
}

/* The MP change using the selected skill would cause its unit (a negative unit is the player). */
static __inline s32 campSelectedSkillMpChange(void)
{
    CampStateA *camp = g_camp;
    s32 row = campSkillListRow(camp);

    if (camp->entries[row].unit < 0) {
        return -skillGetCostWithRankReduction(camp->entries[row].id, 1);
    }
    return -skillGetAdjustedCost(gameGetSlotRecord(camp->entries[row].unit), camp->entries[row].id);
}

/* Takes the row's skill cost from its unit's MP. */
static __inline void campPaySkillCost(CampStateA *camp, s32 row)
{
    if (camp->entries[row].unit < 0) {
        PlayerDataA *player = gameGetPlayerData();
        player->mp -= skillGetCostWithRankReduction(camp->entries[row].id, 1);
        if (player->mp < 0) {
            player->mp = 0;
        }
    } else {
        SlotRecordA *record = gameGetSlotRecord(camp->entries[row].unit);
        record->mp -= skillGetAdjustedCost(record, camp->entries[row].id);
        if (record->mp < 0) {
            record->mp = 0;
        }
    }
}

/* Shows the help of the menu entry the cursor is on. */
static __inline void campRefreshEntryHelp(CampStateA *camp)
{
    campShowSelectedEntryHelp(dataTable15GetUnlockedEntryId(camp->menuGroup, listCursorGetRowOfChildIfUnblocked(&camp->menuGrid)));
}

/* Whether the skill's user can act: the player must not be down; a demon must exist, have neither ailment
 * bit 1 (down) nor bit 10 set, and game flag 0x401 must be set. */
static __inline bool campSkillUserCanAct(const CampListEntryA *entry)
{
    bool usable = true;

    if (entry->unit < 0) {
        if (gameGetPlayerData()->ailments & 2) {
            return false;
        }
    } else {
        SlotRecordA *record = gameGetSlotRecord(entry->unit);
        if (record == NULL || (record->ailments & 2) || (record->ailments & 0x400)) {
            usable = false;
        }
        return gameFlagIsSet(0x401) && usable;
    }
    return true;
}

/* Leaving the list gives the menu back its first group. */
static __inline void campRestoreMenuGroup(CampStateA *camp)
{
    if (camp->menuGroupBorrowed) {
        camp->menuGroup = 1;
        FUN_0020d700();
        camp->menuGroupBorrowed = 0;
    }
}

/* The camp's skill list: phase 0 opens it on the cursor's row, phase 1 scrolls it, previews each
 * skill's cost, uses the confirmed skill (140 and 147 start their own scripts) and handles
 * cancel and the sort menu. */
extern "C" void campSkillListUpdate(void)
{
    CampStateA *camp = g_camp;

    if (camp->phase == 0) {
        if (!gameStateIsNotTransitioning()) {
            return;
        }
        statusPreviewMpChange(0, campSelectedSkillMpChange());
        /* remembers the row for the status screen */
        s32 row = campSkillListRow(camp);
        CampStateA *current = g_camp;
        if (current != NULL) {
            current->statusSelection = row;
        }
        campListRegisterTouchRegions(&camp->grids[3], 1);
        camp->phase++;
        return;
    }
    if (camp->phase != 1) {
        return;
    }

    if (gridNavigationGetItemCount(reinterpret_cast<Object *>(&camp->grids[3])) <= 0) {
        /* The list is empty: only cancel works. */
        if (padQueryLogicalKey(1, 1)) {
            campTouchRegionsRemoveGroup(&camp->grids[3], 1);
            statusPanelClose();
            FUN_0035dbd4(0);
            campShowSelectedEntryHelp(0);
            FUN_0021b274(3, -1, 0);
            camp->pendingState = 6;
            campChangeState(5);
            campRestoreMenuGroup(camp);
            eventQueueAddUniqueIfValid(0x100020F);
        }
        return;
    }

    FUN_003d386c(0);
    s32 row = campSkillListRow(camp);
    bool scrolling = false;
    if (uiStateGetSecondFlag(&camp->grids[3]) || uiStateGetFirstFlag(&camp->grids[3])) {
        scrolling = true;
        const s16 *shown = reinterpret_cast<const s16 *>(gameGlobalsGetBlock1390());
        if ((*shown < 0 && camp->entries[row].unit >= 0) ||
            (*shown >= 0 && (camp->entries[row].unit < 0 || gameGetSlotRecord(camp->entries[row].unit)->id != *shown))) {
            FUN_0023b45c(0);
        }
    } else {
        if (!FUN_0022e714()) {
            statusPreviewMpChange(0, campSelectedSkillMpChange());
            CampStateA *current = g_camp;
            if (current != NULL) {
                current->statusSelection = row;
            }
            if (camp->entries[row].unit < 0) {
                FUN_0031f718(-1, 0, 0);
                statusPanelSetOpen(1);
            } else {
                statusDisplayBindUnitRecord(gameGetSlotRecord(camp->entries[row].unit), 0, 0, NULL);
                statusPanelSetOpen(1);
            }
        }
        if (FUN_002a7410()) {
            gameGlobalsGetBlock1390();
            campTouchRegionsRemoveGroup(&camp->grids[3], 1);
            for (s32 i = 0; i < uiSearchPrimary(&camp->grids[3]); i++) {
                ifTouchRegionRemove();
                camp->touch.rowRegions[i] = -1;
            }
            if (FUN_0035db94() < 0) {
                FUN_0021b274(4, -1, 0);
            } else if (FUN_0035db94() > 0) {
                FUN_0021b274(3, -1, 0);
            }
            camp->pendingState = 24;
            campChangeState(5);
            return;
        }
    }

    {
        /* Set when a touch on a row confirms it. */
        s8 touched = 0;

        if (uiScrollHandleActionsOrTouch(&camp->grids[3], asdTMTexTableEntryAt(20, 0x56D), camp->touch.rowRegions,
                                         camp->touch.scrollRegions[0], camp->touch.scrollRegions[1],
                                         camp->touch.scrollRegions[2], &touched, 0, 1)) {
            campRefreshEntryHelp(camp);
        } else if (gridNavigationHandleConfirm(&camp->grids[3], 1)) {
            campRefreshEntryHelp(camp);
        } else if ((padQueryLogicalKey(0, 1) || touched) && FUN_0022e714()) {
            if (FUN_002684d0(camp->entries[row].id, static_cast<s16>(camp->entries[row].unit)) &&
                FUN_0022a030(camp->entries[row].unit, camp->entries[row].id) &&
                campSkillUserCanAct(&camp->entries[row])) {
                switch (camp->entries[row].id) {
                case 140:
                    FUN_002b5c88();
                    campPaySkillCost(camp, row);
                    if (camp->entries[row].unit < 0) {
                        FUN_0031f718(-1, 0, 0);
                        statusPanelSetOpen(0);
                    } else {
                        statusDisplayBindUnitRecord(gameGetSlotRecord(camp->entries[row].unit), 0, 0, NULL);
                        statusPanelSetOpen(0);
                    }
                    eventQueueAddUniqueIfValid(0x100021C);
                    buttonHelpScriptStart(0);
                    campChangeState(71);
                    sysPlaySe(160);
                    gameGlobalsSetMenuOpenFlag(1);
                    break;
                case 147:
                    flagBanksResetPendingState(0);
                    campPaySkillCost(camp, row);
                    if (camp->entries[row].unit < 0) {
                        FUN_0031f718(-1, 0, 0);
                        statusPanelSetOpen(0);
                    } else {
                        statusDisplayBindUnitRecord(gameGetSlotRecord(camp->entries[row].unit), 0, 0, NULL);
                        statusPanelSetOpen(0);
                    }
                    eventQueueAddUniqueIfValid(0x100021C);
                    buttonHelpScriptStart(4);
                    campChangeState(71);
                    sysPlaySe(160);
                    gameGlobalsSetMenuOpenFlag(1);
                    break;
                default:
                    campTouchRegionsRemoveGroup(&camp->grids[3], 1);
                    FUN_0021b274(3, -1, 0);
                    FUN_0023b45c(0);
                    FUN_0035dbd4(0);
                    camp->pendingState = 18;
                    campChangeState(5);
                    eventQueueAddUniqueIfValid(0x100020E);
                    break;
                }
            } else {
                eventQueueAddUniqueIfValid(0x100020F);
            }
        } else if (padQueryLogicalKey(1, 1) && !FUN_002a7410()) {
            campTouchRegionsRemoveGroup(&camp->grids[3], 1);
            campRestoreMenuGroup(camp);
            statusPreviewMpChange(0, 0);
            statusPanelClose();
            FUN_0035dbd4(0);
            campShowSelectedEntryHelp(0);
            FUN_0021b274(3, -1, 0);
            camp->pendingState = 6;
            campChangeState(5);
            campResetScreen();
            eventQueueAddUniqueIfValid(0x100020F);
        } else if (!scrolling && padQueryLogicalKey(9, 1)) {
            sortMenuAcquire(1, 0);
            useCounterAppendValue(11);
            useCounterAppendValue(32);
            useCounterAppendValue(13);
            useCounterAppendValue(15);
            useCounterAppendValue(17);
            useCounterAppendValue(3);
            buttonHelpSetText(NULL, 0xF4F4F4FF);
            camp->buttonHelpValue = ifTouchGetButtonHelpValue();
            campChangeState(43);
            eventQueueAddUniqueIfValid(0x100020E);
        }
    }
}
