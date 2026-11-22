#include "camp/CampMenuEntry.h"
#include "ui/UiSpriteApi.h"
#include "common.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "camp/CampState.h"

extern "C" {

#define CAMP_LIST_A 11
#define CAMP_LIST_B 12
#define CAMP_LIST_C 13

#define CAMP_EVENT_SELECT 0x100016D
#define CAMP_EVENT_CANCEL 0x100016E


s32 guestWinRequestClose(void);
s32 itemCanUseOnParty(u32 id);
void campReleaseScreenTouchRegions(GridNavigation *list, s32 flag);
void campListShowSelectedHelp(s32 arg);
void messageDismissNumericBanner(s32 arg);
void useCounterAppendValue(s32 id);
void sortMenuCreate(s32 id, s32 arg);
void buttonHelpSetText(s32 a, u32 color);
s32 listCursorGetRowIfUnblocked(GridNavigation *list);
s32 resourceRunOperationIfUnblocked(GridNavigation *list);
s32 gridNavigationHandleConfirm(GridNavigation *list, s32 flag);
s32 uiScrollHandleActionsOrTouch(GridNavigation *list, const TextureTableEntryIV *touchArea, s16 *rowRegions, s32 thumbRegion, s32 previousRegion, s32 nextRegion, s8 *touched, s32 a, s32 b);
void eventQueueAddUniqueIfValid(u32 event);
s32 inputQueryButtonState(s32 button, s32 mode);
u8 buttonHelpGetStatus(void);

/* Switches the camp to `state`, remembering the previous one. */
static void campChangeState(u32 state)
{
    CampState *camp = g_camp;

    camp->previousState = camp->state;
    camp->state = state;
    camp->phase = 0;
    camp->substep = 0;
}

/* Input handling for one of the three camp list screens (`kind` 11, 12 or 13). */
void campUpdateListInput(s32 kind)
{
    CampState *camp = g_camp;
    GridNavigation *list = 0;

    if (kind == CAMP_LIST_A) {
        list = &camp->grids[0];
    } else if (kind == CAMP_LIST_B) {
        list = &camp->grids[1];
    } else if (kind == CAMP_LIST_C) {
        list = &camp->grids[2];
    }

    if (camp->phase == 0) {
        campListRegisterTouchRegions(list, 1);
        camp->phase = camp->phase + 1;
        return;
    }
    if (camp->phase != 1) {
        return;
    }

    s8 touched = 0;
    const TextureTableEntryIV *touchArea = asdTMTexTableEntryAt(0x1D, 0x56D);
    s32 confirmed = uiScrollHandleActionsOrTouch(list, touchArea, camp->touch.rowRegions, camp->touch.scrollRegions[0],
                                                 camp->touch.scrollRegions[1], camp->touch.scrollRegions[2], &touched, 0, 1);
    if (confirmed != 0 || gridNavigationHandleConfirm(list, 1) != 0) {
        u32 part = objectPartRunUnlessLocked(&camp->menuGrid);
        campListShowSelectedHelp(dataTable15GetUnlockedEntryId(camp->menuGroup, part));
        return;
    }

    if ((inputQueryButtonState(0, 1) | touched) != 0 && kind == CAMP_LIST_A) {
        s32 index = resourceRunOperationIfUnblocked(list) + listCursorGetRowIfUnblocked(list);
        u32 id = camp->gridIds0[index];
        if (itemCanUseOnParty(id) != 0) {
            camp->selectedId = camp->gridIds0[index];
            uiSpriteSetKeyframe(&camp->sprites[1], 3, 0);
            camp->returnState = 11;
            campChangeState(5);
            campReleaseScreenTouchRegions(list, 1);
            guestWinRequestClose();
            messageDismissNumericBanner(1);
        } else {
            return eventQueueAddUniqueIfValid(CAMP_EVENT_CANCEL);
        }
        return eventQueueAddUniqueIfValid(CAMP_EVENT_SELECT);
    }

    if (inputQueryButtonState(1, 1) != 0) {
        campListShowSelectedHelp(0);
        uiSpriteSetKeyframe(&camp->sprites[1], 3, 0);
        camp->returnState = 6;
        campChangeState(5);
        campReleaseScreenTouchRegions(list, 1);
        return eventQueueAddUniqueIfValid(CAMP_EVENT_CANCEL);
    }

    if (inputQueryButtonState(9, 1) == 0) {
        return;
    }
    if (kind == CAMP_LIST_B) {
        return;
    }
    if (kind == CAMP_LIST_A) {
        sortMenuCreate(3, 0);
        useCounterAppendValue(12);
        useCounterAppendValue(16);
        useCounterAppendValue(3);
    } else if (kind == CAMP_LIST_C) {
        sortMenuCreate(4, 0);
        useCounterAppendValue(33);
        useCounterAppendValue(16);
        useCounterAppendValue(3);
    }
    buttonHelpSetText(0, 0x323232FF);
    camp->helpStatus = buttonHelpGetStatus();
    campChangeState(40);
    eventQueueAddUniqueIfValid(CAMP_EVENT_SELECT);
}

} /* extern "C" */
