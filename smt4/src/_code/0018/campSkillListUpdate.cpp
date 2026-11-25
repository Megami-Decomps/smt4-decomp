/* NON_MATCHING: same calls, branches and tail merges as retail (75 raw / 53 shape rows), following
 * Apocalypse's campSkillListUpdate. Two things differ: retail keeps the hoisted zero in r8 and the
 * `scrolling` flag (and then the confirmed row's entry address) in r7, the build the other way round; and
 * retail shares the `mov r0, r9` of the two select sounds where the build repeats it before the branch. */
#include "camp/CampMenuEntry.h"
#include "ui/UiSpriteApi.h"
#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "camp/CampState.h"
#include "camp/CampSkillList.h"
#include "status/StatusCamera.h"
#include "gamedata/UnitRecordAccess.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/DataTable.h"
#include "ui/PartyPanelState.h"
#include "ui/PartyPanel.h"
#include "ui/UiControl.h"
#include "code/Code0029.h"
#include "code/Code0029_VariantA.h"
#include "code/Code0029_VariantB.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "code/Code0029_Smt4.h"
#include "quest_center/qcMain.h"
#include "shard/W5_W5Match7_FlagBanks.h"
#include "shard/W6_W6Match4_RelativeDirectory.h"

extern "C" {

#define CAMP_EVENT_SELECT 0x100016D
#define CAMP_EVENT_CANCEL 0x100016E
#define CAMP_EVENT_USE_SKILL 0x100017C

enum {
    SKILL_ESTOMA = 0x8C /* used from the menu itself; every other skill picks a target */
};

void campReleaseScreenTouchRegions(GridNavigation *list, s32 flag);
void campUpdateCategoryHighlightColors(void);
void campListShowSelectedHelp(s32 arg);
void FUN_00298ad8(void);
void FUN_00298d0c(u32 value);
void beginStatusPanelClose(void);
void statusPanelSetOpen(s32 open);
void FUN_0029d8f4(StatBlock *unit, s32 demonSide, u8 flag);
void gameLoadUnitSnapshot(s32 id, s32 mode);
s32 FUN_0029dfa8(void);
s32 FUN_0029e02c(void);
void sortMenuCreate(s32 id, s32 arg);
void buttonHelpSetText(s32 a, u32 color);
u8 buttonHelpStartScript(u32 value);
s32 resourceRunOperationIfUnblocked(GridNavigation *list);
s32 gridNavigationHandleConfirm(GridNavigation *list, s32 flag);
s32 uiScrollHandleActionsOrTouch(GridNavigation *list, const TextureTableEntryIV *touchArea, s16 *rowRegions, s32 thumbRegion, s32 previousRegion, s32 nextRegion, s8 *touched, s32 a, s32 b);
s32 inputQueryButtonState(s32 button, s32 mode);
u8 buttonHelpGetStatus(void);
s32 FUN_002987d8(s32 unit, s32 skill);
s32 skillCanUseInField(u32 skill, s32 unit);
void mapEnableAndClearState(void);
void guestWinRequestOpen(void);
u32 messageInitializeSavedBanner(void);
s8 uiStateGetSecondFlag(const void *state);
s8 uiStateGetFirstFlag(const void *state);

/* Switches the camp to `state`, remembering the previous one. */
static void campChangeState(u32 state)
{
    CampState *camp = g_camp;

    camp->previousState = camp->state;
    camp->state = state;
    camp->phase = 0;
    camp->substep = 0;
}

/* Shows what the skill under the cursor costs its owner on the party panel. */
static void showSelectedSkillCost(void)
{
    CampState *camp = g_camp;
    s32 index = resourceRunOperationIfUnblocked(&camp->grids[3]) + listCursorGetRowIfUnblocked(&camp->grids[3]);
    s32 cost;

    if (camp->skills[index].unit < 0) {
        cost = skillGetDiscountedCost(camp->skills[index].skill, 1);
    } else {
        cost = appGetRemainingCapacity(camp->skills[index].skill);
    }
    FUN_00298d28(0, -cost);
}

/* Leaving the list gives the menu back its first group (as Apocalypse's campRestoreMenuGroup). */
static __inline void campRestoreMenuGroup(CampState *camp)
{
    if (camp->menuGroupBorrowed != 0) {
        camp->menuGroup = 1;
        FUN_00298ad8();
        camp->menuGroupBorrowed = 0;
    }
}

/* Shows the help of the menu entry the cursor is on. */
static __inline void campRefreshEntryHelp(CampState *camp)
{
    campListShowSelectedHelp(dataTable15GetUnlockedEntryId(camp->menuGroup, objectPartRunUnlessLocked(&camp->menuGrid)));
}

/* Takes the row's skill cost from its unit's MP. */
static __inline void campPaySkillCost(CampState *camp, s32 row)
{
    if (camp->skills[row].unit < 0) {
        PlayerDataIV *player = gameGetPlayerData();
        player->mp -= skillGetDiscountedCost(camp->skills[row].skill, 1);
        if (player->mp < 0) {
            player->mp = 0;
        }
    } else {
        StatBlock *record = gameGetUnitRecord(camp->skills[row].unit);
        record->mp -= appGetRemainingCapacity(camp->skills[row].skill);
        if (record->mp < 0) {
            record->mp = 0;
        }
    }
}

/* The camp's skill list: phase 0 opens it on the cursor's row, phase 1 scrolls it, previews each skill's
 * cost, uses the confirmed skill (140 starts its own script) and handles cancel and the sort menu. */
void campSkillListUpdate(void)
{
    CampState *camp = g_camp;

    switch (camp->phase) {
    case 0:
        showSelectedSkillCost();
        campListRegisterTouchRegions(&camp->grids[3], 1);
        camp->phase++;
        /* fall through */
    case 1:
        break;
    default:
        return;
    }

    if ((s32)gridNavigationGetItemCount(&camp->grids[3]) <= 0) {
        /* The list is empty: only cancel works. */
        if (inputQueryButtonState(1, 1)) {
            campReleaseScreenTouchRegions(&camp->grids[3], 1);
            beginStatusPanelClose();
            FUN_00298d0c(0);
            campListShowSelectedHelp(0);
            uiSpriteSetKeyframe(&camp->sprites[1], 3, 0);
            camp->returnState = 6;
            campChangeState(5);
            campRestoreMenuGroup(camp);
            eventQueueAddUniqueIfValid(CAMP_EVENT_CANCEL);
        }
        return;
    }

    campUpdateCategoryHighlightColors();
    s32 row = resourceRunOperationIfUnblocked(&camp->grids[3]) + listCursorGetRowIfUnblocked(&camp->grids[3]);
    bool scrolling = false;
    if (uiStateGetSecondFlag(&camp->grids[3]) || uiStateGetFirstFlag(&camp->grids[3])) {
        /* The cursor moved: close the status panel unless it already shows the new row's owner. */
        scrolling = true;
        const s16 *shown = reinterpret_cast<const s16 *>(FUN_0029acb0());
        if ((*shown < 0 && camp->skills[row].unit >= 0) ||
            (*shown >= 0 && (camp->skills[row].unit < 0 || gameGetUnitRecord(camp->skills[row].unit)->id != *shown))) {
            FUN_0029dfc0(0);
        }
    } else {
        if (!FUN_0029dfa8()) {
            if (camp->skills[row].unit < 0) {
                gameLoadUnitSnapshot(-1, 0);
                statusPanelSetOpen(1);
            } else {
                FUN_0029d8f4(gameGetUnitRecord(camp->skills[row].unit), 0, 0);
                statusPanelSetOpen(1);
            }
        }
        if (FUN_0029e02c()) {
            /* The party panel took the input: hand the screen over to it. */
            FUN_0029acb0();
            campReleaseScreenTouchRegions(&camp->grids[3], 1);
            for (s32 i = 0; i < (s32)uiListGetVisibleCount(&camp->grids[3]); i++) {
                ifTouchRegionRemove();
                camp->touch.rowRegions[i] = -1;
            }
            if (gameGetFlagByte12e8() < 0) {
                uiSpriteSetKeyframe(&camp->sprites[1], 4, 0);
            } else if (gameGetFlagByte12e8() > 0) {
                uiSpriteSetKeyframe(&camp->sprites[1], 3, 0);
            }
            camp->returnState = 0x15;
            campChangeState(5);
            return;
        }
    }

    {
        /* Set when a touch on a row confirms it. */
        s8 touched = 0;

        if (uiScrollHandleActionsOrTouch(&camp->grids[3], asdTMTexTableEntryAt(0x1D, 0x56D), camp->touch.rowRegions,
                                         camp->touch.scrollRegions[0], camp->touch.scrollRegions[1],
                                         camp->touch.scrollRegions[2], &touched, 0, 1)) {
            campRefreshEntryHelp(camp);
            showSelectedSkillCost();
            return;
        }
        if (gridNavigationHandleConfirm(&camp->grids[3], 1)) {
            campRefreshEntryHelp(camp);
            showSelectedSkillCost();
            return;
        }
        if ((inputQueryButtonState(0, 1) | touched) && FUN_0029dfa8()) {
            if (skillCanUseInField(camp->skills[row].skill, static_cast<s16>(camp->skills[row].unit)) &&
                FUN_002987d8(camp->skills[row].unit, camp->skills[row].skill) &&
                campSkillUserCanAct(&camp->skills[row])) {
                if (camp->skills[row].skill == SKILL_ESTOMA) {
                    mapEnableAndClearState();
                    campPaySkillCost(camp, row);
                    if (camp->skills[row].unit < 0) {
                        gameLoadUnitSnapshot(-1, 0);
                        statusPanelSetOpen(0);
                    } else {
                        FUN_0029d8f4(gameGetUnitRecord(camp->skills[row].unit), 0, 0);
                        statusPanelSetOpen(0);
                    }
                    eventQueueAddUniqueIfValid(CAMP_EVENT_USE_SKILL);
                    buttonHelpStartScript(0);
                    campChangeState(0x35);
                    buttonHelpSetPreset(0x9E);
                    gameGlobalsSetSubScreenActive(1);
                    return;
                }
                /* Pick the skill's target on the party panel. */
                campReleaseScreenTouchRegions(&camp->grids[3], 1);
                uiSpriteSetKeyframe(&camp->sprites[1], 3, 0);
                FUN_0029dfc0(0);
                FUN_00298d0c(0);
                camp->returnState = 0xF;
                campChangeState(5);
                eventQueueAddUniqueIfValid(CAMP_EVENT_SELECT);
                return;
            }
            eventQueueAddUniqueIfValid(CAMP_EVENT_CANCEL);
            return;
        }
        if (inputQueryButtonState(1, 1) && !FUN_0029e02c()) {
            /* Cancel: back to the menu. */
            campReleaseScreenTouchRegions(&camp->grids[3], 1);
            campRestoreMenuGroup(camp);
            FUN_00298d28(0, 0);
            beginStatusPanelClose();
            FUN_00298d0c(0);
            campListShowSelectedHelp(0);
            uiSpriteSetKeyframe(&camp->sprites[1], 3, 0);
            camp->returnState = 6;
            campChangeState(5);
            guestWinRequestOpen();
            messageBannerInitSelection(1, 0);
            messageInitializeSavedBanner();
            eventQueueAddUniqueIfValid(CAMP_EVENT_CANCEL);
            return;
        }
        if (!scrolling && inputQueryButtonState(9, 1)) {
            sortMenuCreate(1, 0);
            useCounterAppendValue(11);
            useCounterAppendValue(32);
            useCounterAppendValue(13);
            useCounterAppendValue(15);
            useCounterAppendValue(17);
            useCounterAppendValue(3);
            buttonHelpSetText(0, 0x323232FF);
            camp->helpStatus = buttonHelpGetStatus();
            campChangeState(40);
            eventQueueAddUniqueIfValid(CAMP_EVENT_SELECT);
        }
    }
}

} /* extern "C" */
