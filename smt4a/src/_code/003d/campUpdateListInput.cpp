#include "camp/CampStateA.h"
#include "ui/UiSpriteApi.h"
#include "gamedata/FlagValueIsPositive.h"
#include "shard/W5_W5Match7_FlagBanks.h"
#include "shard/W6_W6Match4_RelativeDirectory.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "code/Code002a.h"
#include "code/Code002a_VariantA.h"

/* Items whose use from the camp list runs its own sequence. */
#define ITEM_CONFIRMED_USE 0x79F  /* asks for confirmation, then is consumed */
#define ITEM_ANNOUNCED_USE 0x7AF  /* consumed after its message */
#define ITEM_MESSAGE_ONLY 0x7B6
#define ITEM_MESSAGE_ONLY_2 0x7CD

/* Sounds of the camp menu. */
#define CAMP_SE_DECIDE 0x100020E
#define CAMP_SE_CANCEL 0x100020F
#define CAMP_SE_USE 0x100021C

extern "C" {

s32 padQueryLogicalKey(s32 key, s32 mode);
void campTouchRegionsRemoveGroup(GridNavigation *list, s32 keep);
void campShowSelectedEntryHelp(s32 page);
void campChangeState(s32 newState);
void campRebuildEnabledFlagList(s32 mode);
u32 uiScrollHandleActionsOrTouch(GridNavigation *list, const TextureTableEntryIV *rectangle, const s16 *regions,
                                 s32 firstKey, s32 secondKey, s32 thirdKey, s8 *blockedMode, s32 secondary, s32 notify);
u8 FUN_00228b04(GridNavigation *list, s32 mode);
void FUN_002cb278(GridNavigation *list, s32 mode);
s32 resourceRunOperationIfUnblocked(GridNavigation *list); // declcheck: local (the shared prototype takes the opaque Object; the list is a GridNavigation)
void FUN_0021b274(s32 mode, s32 image, u32 frame);
u8 FUN_003da8f4(s32 group, s32 index);
u32 FUN_0048144c(s32 id);
void flagValueSub(s32 id, u32 amount);
bool FUN_00481404(u16 id);
void FUN_003a7c00(u8 value);
u8 buttonHelpScriptStart(u32 request);
void buttonHelpSetText(const s8 *text, u32 color);
u16 ifTouchGetButtonHelpValue(void);
void flagBanksResetPendingState(s32 overrideEnabled);
void sortMenuAcquire(u32 owner, u8 option);
u8 messageMainIsIdle(void);
void messageMainSetTargetFlags(u8 value);
u32 messageGetChoiceResult(void); // declcheck: local (declared in the item description's header)
u32 messageDismissNumericBanner(s32 close); // declcheck: local (declared in the effect editor's header)

/* Closes the numeric banner and fades its sprite out. */
static __inline void campNumericBannerClose(void)
{
    messageDismissNumericBanner(1);
    uiSpriteSetImageKeyframe(&g_camp->sprites[29], 7, 0);
}

/* The step of the camp's item lists (camp states 11, 13 and 14): scrolling, using the item under
   the cursor, the sort menu, and the message sequences of the items used in place. */
void campUpdateListInput(s32 state)
{
    CampStateA *camp = g_camp;
    GridNavigation *list = NULL;

    if (state == 11) {
        list = &camp->grids[0];
    } else if (state == 13) {
        list = &camp->grids[1];
    } else if (state == 14) {
        list = &camp->grids[2];
    }

    switch (camp->phase) {
    case 0:
        FUN_002cb278(list, 1);
        camp->phase++;
        break;
    case 1: {
        /* Set when a touch on a row confirms it. */
        s8 touched = 0;

        if (uiScrollHandleActionsOrTouch(list, asdTMTexTableEntryAt(20, 0x56D), camp->touch.rowRegions,
                                         camp->touch.scrollRegions[0], camp->touch.scrollRegions[1],
                                         camp->touch.scrollRegions[2], &touched, 0, 1) ||
            FUN_00228b04(list, 1)) {
            campShowSelectedEntryHelp(FUN_003da8f4(camp->menuGroup, listCursorGetRowOfChildIfUnblocked(&camp->menuGrid)));
        } else if ((padQueryLogicalKey(0, 1) || touched) && state == 11) {
            s32 row = resourceRunOperationIfUnblocked(list) + listCursorGetRowIfUnblocked(list);

            if (FUN_0048144c(camp->gridIds0[row])) {
                camp->usedItem = camp->gridIds0[row];
                if (camp->gridIds0[row] == ITEM_CONFIRMED_USE) {
                    eventQueueAddUniqueIfValid(CAMP_SE_DECIDE);
                    buttonHelpScriptStart(3);
                    camp->phase = 2;
                } else if (camp->gridIds0[row] == ITEM_ANNOUNCED_USE) {
                    eventQueueAddUniqueIfValid(CAMP_SE_USE);
                    buttonHelpScriptStart(5);
                    camp->phase = 4;
                } else if (camp->gridIds0[row] == ITEM_MESSAGE_ONLY) {
                    eventQueueAddUniqueIfValid(CAMP_SE_DECIDE);
                    camp->phase = 5;
                } else if (FUN_00481404(camp->gridIds0[row])) {
                    eventQueueAddUniqueIfValid(CAMP_SE_DECIDE);
                    camp->phase = 6;
                } else if (camp->gridIds0[row] == ITEM_MESSAGE_ONLY_2) {
                    eventQueueAddUniqueIfValid(CAMP_SE_DECIDE);
                    camp->phase = 7;
                } else {
                    /* An ordinary item: go on to pick its target. */
                    camp->selectedId = camp->gridIds0[row];
                    FUN_0021b274(3, -1, 0);
                    camp->pendingState = 11;
                    campChangeState(5);
                    campTouchRegionsRemoveGroup(list, 1);
                    campNumericBannerClose();
                    eventQueueAddUniqueIfValid(CAMP_SE_DECIDE);
                    if (camp->gridIds0[row] == 0x7A5 || camp->gridIds0[row] == 0x7A6)
                        FUN_003a7c00(0);
                }
            } else {
                eventQueueAddUniqueIfValid(CAMP_SE_CANCEL);
            }
        } else if (padQueryLogicalKey(1, 1)) {
            /* Back to the camp menu. */
            campShowSelectedEntryHelp(0);
            FUN_0021b274(3, -1, 0);
            camp->pendingState = 6;
            campChangeState(5);
            campTouchRegionsRemoveGroup(list, 1);
            eventQueueAddUniqueIfValid(CAMP_SE_CANCEL);
        } else if (padQueryLogicalKey(9, 1)) {
            /* The sort menu (the key items have none). */
            if (state == 13)
                break;
            if (state == 11) {
                sortMenuAcquire(3, 0);
                FUN_0031f208(12);
                FUN_0031f208(16);
                FUN_0031f208(3);
            } else if (state == 14) {
                sortMenuAcquire(4, 0);
                FUN_0031f208(33);
                FUN_0031f208(16);
                FUN_0031f208(3);
            }
            buttonHelpSetText(NULL, 0xF4F4F4FF);
            camp->buttonHelpValue = ifTouchGetButtonHelpValue();
            campChangeState(43);
            eventQueueAddUniqueIfValid(CAMP_SE_DECIDE);
        }
        break;
    }
    case 2:
        /* The confirmation of the item's use. */
        messageMainSetTargetFlags(1);
        if (FUN_002a21e8()) {
            if (messageGetChoiceResult() != 0) {
                camp->phase = 3;
            } else {
                flagValueSub(ITEM_CONFIRMED_USE, 1);
                if (!flagValueIsPositive(ITEM_CONFIRMED_USE))
                    campRebuildEnabledFlagList(11);
                campChangeState(77);
            }
        }
        break;
    case 3:
        if (messageMainIsIdle()) {
            messageMainSetTargetFlags(0);
            camp->phase = 1;
        }
        break;
    case 4:
        if (FUN_002a21e8() && messageMainIsIdle()) {
            flagValueSub(ITEM_ANNOUNCED_USE, 1);
            if (!flagValueIsPositive(ITEM_ANNOUNCED_USE))
                campRebuildEnabledFlagList(11);
            flagBanksResetPendingState(1);
            camp->phase = 1;
        }
        break;
    case 5:
        if (messageMainIsIdle()) {
            campTouchRegionsRemoveGroup(list, 1);
            campNumericBannerClose();
            FUN_0021b274(3, -1, 0);
            camp->pendingState = 12;
            campChangeState(5);
        }
        break;
    case 6:
        if (messageMainIsIdle()) {
            campTouchRegionsRemoveGroup(list, 1);
            campNumericBannerClose();
            FUN_0021b274(3, -1, 0);
            camp->pendingState = 13;
            campChangeState(5);
        }
        break;
    case 7:
        if (messageMainIsIdle()) {
            campTouchRegionsRemoveGroup(list, 1);
            campNumericBannerClose();
            FUN_0021b274(3, -1, 0);
            camp->pendingState = 14;
            campChangeState(5);
        }
        break;
    }
}

} /* extern "C" */
