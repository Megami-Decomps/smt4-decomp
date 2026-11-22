/* NON_MATCHING: 514 lines (508 by shape), a typed rewrite with retail's blocks, calls and stores. Retail forms the
 * address of touchRegionCount again in every state (each loop's preheader, each `+= n`), so its states keep their own
 * copies of the tab and page-button tails (450 rows); this build forms the address once at entry and cross-jumps the
 * identical tails (401 rows). The raw decompilation it replaces scored 564 (492 by shape). */
#include "status/StatusDownA.h"
#include "ui/UiControl.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

s32 ifTouchRegionAddRequested(u32 file, s32 index);
s32 ifTouchRegionAdd(u16 x, u16 y, u16 width, u16 height); // declcheck: local (its shared declarations sit in unrelated record headers)
void __aeabi_memset4(void *destination, u32 size, s32 value);
s32 gameFlagIsSet(u32 flag); // declcheck: local (the shared declarations disagree on the result type)
s32 gridNavigationGetItemCount(void *navigation); // declcheck: local (a signed count of a list or a selector; the shared ones are unsigned or take an Object)

} /* extern "C" */

enum {
    STATUS_SPRITES = 0x12,            /* the status screen's sprite table */

    /* Table entries whose rectangles are touch regions. */
    STATUS_REGION_LIST_ROWS = 0x414,  /* the rows of a list, one entry each */
    STATUS_REGION_LIST_LAST = 0x41F,  /* its width is the width of the wide row */
    STATUS_REGION_STAT_ROWS = 0x44C,  /* eleven rows */
    STATUS_REGION_MENU_ROWS = 0x466,  /* seven rows; rows 1 and 2 need flag 0x410 */
    STATUS_REGION_INVENTORY = 0x4AE,  /* nine rows of four cells */
    STATUS_REGION_TAB_A = 0x4E7,
    STATUS_REGION_TAB_B = 0x4E8,
    STATUS_REGION_TAB_C = 0x4E9,
    STATUS_REGION_DETAIL_A = 0x4EA,
    STATUS_REGION_DETAIL_B = 0x4EB,
    STATUS_REGION_DETAIL_C = 0x4EC,
    STATUS_REGION_WIDE_ROW = 0x4F1,
    STATUS_REGION_NEXT = 0x50E,
    STATUS_REGION_PREVIOUS = 0x50F,
    STATUS_REGION_SELECTOR_LAST = 0x54A,
    STATUS_REGION_SKILL_ROWS = 0x566,
    STATUS_REGION_SKILL_CLOSE = 0x56E,

    /* The fixed slots after the rows. */
    STATUS_SLOT_TAB_C = 36,
    STATUS_SLOT_TAB_A = 37,
    STATUS_SLOT_TAB_B = 38,
    STATUS_SLOT_PREVIOUS = 39,
    STATUS_SLOT_NEXT = 40,

    STATUS_FLAG_MENU_ROWS = 0x410
};

/* Removes the status screen's touch regions and registers those of its current state: the rows of the state's
 * list or grid, then its fixed buttons. Each row's slot holds the region the stylus is tested against. */
extern "C" void statusDownRebuildTouchRegions(void)
{
    StatusDownStateA *state = g_statusDown;
    s32 i;

    for (i = 0; i < state->touchRegionCount; i++) {
        ifTouchRegionRemove();
    }
    state->touchRegionCount = 0;
    __aeabi_memset4(state->slots, sizeof(state->slots), -1);
    switch (state->track.state) {
    case 3:
        for (i = 0; i < gridNavigationGetItemCount(&state->list); i++) {
            state->slots[i] = ifTouchRegionAddRequested(STATUS_SPRITES, STATUS_REGION_LIST_ROWS + i);
            state->touchRegionCount++;
        }
        state->slots[STATUS_SLOT_PREVIOUS] = ifTouchRegionAddRequested(STATUS_SPRITES, STATUS_REGION_PREVIOUS);
        state->slots[STATUS_SLOT_NEXT] = ifTouchRegionAddRequested(STATUS_SPRITES, STATUS_REGION_NEXT);
        state->touchRegionCount += 2;
        break;
    case 4:
        for (i = 0; i < gridNavigationGetItemCount(&state->list); i++) {
            state->slots[i] = ifTouchRegionAddRequested(STATUS_SPRITES, STATUS_REGION_LIST_ROWS + i);
            state->touchRegionCount++;
        }
        break;
    case 7:
        for (i = 0; i < gridNavigationGetItemCount(&state->list); i++) {
            state->slots[i] = ifTouchRegionAddRequested(STATUS_SPRITES, STATUS_REGION_LIST_ROWS + i);
            state->touchRegionCount++;
        }
        state->slots[state->touchRegionCount] = ifTouchRegionAddRequested(STATUS_SPRITES, STATUS_REGION_WIDE_ROW);
        state->touchRegionCount++;
        break;
    case 14: {
        const TextureTableEntryIV *row;
        const TextureTableEntryIV *last;

        for (i = 0; i < gridNavigationGetItemCount(&state->list) - 1; i++) {
            state->slots[i] = ifTouchRegionAddRequested(STATUS_SPRITES, STATUS_REGION_LIST_ROWS + i);
            state->touchRegionCount++;
        }
        /* the wide row, cut to the width of the list's last row */
        row = asdTMTexTableEntryAt(STATUS_SPRITES, STATUS_REGION_WIDE_ROW);
        last = asdTMTexTableEntryAt(STATUS_SPRITES, STATUS_REGION_LIST_LAST);
        state->slots[state->touchRegionCount] =
            ifTouchRegionAdd(row->x, row->y, last->placement->width, row->placement->height);
        state->touchRegionCount++;
        break;
    }
    case 19:
        for (i = 0; i < 7; i++) {
            if (gameFlagIsSet(STATUS_FLAG_MENU_ROWS) != 0 || (i != 1 && i != 2)) {
                state->slots[i] = ifTouchRegionAddRequested(STATUS_SPRITES, STATUS_REGION_MENU_ROWS + i);
            } else {
                state->slots[i] = 0;
            }
            state->touchRegionCount++;
        }
        state->slots[STATUS_SLOT_PREVIOUS] = ifTouchRegionAddRequested(STATUS_SPRITES, STATUS_REGION_PREVIOUS);
        state->slots[STATUS_SLOT_NEXT] = ifTouchRegionAddRequested(STATUS_SPRITES, STATUS_REGION_NEXT);
        state->touchRegionCount += 2;
        break;
    case 20:
        for (i = 0; i < 11; i++) {
            state->slots[i] = ifTouchRegionAddRequested(STATUS_SPRITES, STATUS_REGION_STAT_ROWS + i);
            state->touchRegionCount++;
        }
        state->slots[STATUS_SLOT_TAB_A] = ifTouchRegionAddRequested(STATUS_SPRITES, STATUS_REGION_TAB_A);
        state->slots[STATUS_SLOT_TAB_B] = ifTouchRegionAddRequested(STATUS_SPRITES, STATUS_REGION_TAB_B);
        state->slots[STATUS_SLOT_TAB_C] = ifTouchRegionAddRequested(STATUS_SPRITES, STATUS_REGION_TAB_C);
        state->touchRegionCount += 3;
        state->slots[STATUS_SLOT_PREVIOUS] = ifTouchRegionAddRequested(STATUS_SPRITES, STATUS_REGION_PREVIOUS);
        state->slots[STATUS_SLOT_NEXT] = ifTouchRegionAddRequested(STATUS_SPRITES, STATUS_REGION_NEXT);
        state->touchRegionCount += 2;
        break;
    case 22:
        for (s32 row = 0; row < 9; row++) {
            for (s32 column = 0; column < 4; column++) {
                s32 cell = column + row * 4;

                if (cell >= state->inventory.ownedCount) {
                    break;
                }
                state->slots[cell] = ifTouchRegionAddRequested(STATUS_SPRITES, STATUS_REGION_INVENTORY + cell);
                state->touchRegionCount++;
            }
        }
        state->slots[STATUS_SLOT_TAB_A] = ifTouchRegionAddRequested(STATUS_SPRITES, STATUS_REGION_TAB_A);
        state->slots[STATUS_SLOT_TAB_B] = ifTouchRegionAddRequested(STATUS_SPRITES, STATUS_REGION_TAB_B);
        state->slots[STATUS_SLOT_TAB_C] = ifTouchRegionAddRequested(STATUS_SPRITES, STATUS_REGION_TAB_C);
        state->touchRegionCount += 3;
        state->slots[STATUS_SLOT_PREVIOUS] = ifTouchRegionAddRequested(STATUS_SPRITES, STATUS_REGION_PREVIOUS);
        state->slots[STATUS_SLOT_NEXT] = ifTouchRegionAddRequested(STATUS_SPRITES, STATUS_REGION_NEXT);
        state->touchRegionCount += 2;
        break;
    case 24:
        state->slots[STATUS_SLOT_TAB_A] = ifTouchRegionAddRequested(STATUS_SPRITES, STATUS_REGION_DETAIL_A);
        state->slots[STATUS_SLOT_TAB_B] = ifTouchRegionAddRequested(STATUS_SPRITES, STATUS_REGION_DETAIL_B);
        state->slots[STATUS_SLOT_TAB_C] = ifTouchRegionAddRequested(STATUS_SPRITES, STATUS_REGION_DETAIL_C);
        state->touchRegionCount += 3;
        state->slots[STATUS_SLOT_PREVIOUS] = ifTouchRegionAddRequested(STATUS_SPRITES, STATUS_REGION_PREVIOUS);
        state->slots[STATUS_SLOT_NEXT] = ifTouchRegionAddRequested(STATUS_SPRITES, STATUS_REGION_NEXT);
        state->touchRegionCount += 2;
        break;
    case 25:
    case 26:
    case 28:
    case 29:
        for (i = 0; i < gridNavigationGetItemCount(state->selector) - 1; i++) {
            state->slots[i] = ifTouchRegionAddRequested(STATUS_SPRITES, STATUS_REGION_LIST_ROWS + i);
            state->touchRegionCount++;
        }
        state->slots[gridNavigationGetItemCount(state->selector) - 1] =
            ifTouchRegionAddRequested(STATUS_SPRITES, STATUS_REGION_SELECTOR_LAST);
        state->touchRegionCount++;
        break;
    case 31: {
        s32 rows = 0;

        for (i = 0; i < state->menu.count; i++) {
            state->slots[i] = ifTouchRegionAddRequested(STATUS_SPRITES, STATUS_REGION_SKILL_ROWS + i);
            rows++;
            state->touchRegionCount++;
        }
        state->slots[rows] = ifTouchRegionAddRequested(STATUS_SPRITES, STATUS_REGION_SKILL_CLOSE);
        state->touchRegionCount++;
        state->menu.selectedCard = rows;
        break;
    }
    /* The states without touch regions. Retail dispatches through a full 29-entry jump table, which armcc
     * builds only with some of these labels present (without them a compare tree: 604 lines); every such state is
     * listed because which ones the original named cannot be told. */
    case 5:
    case 6:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 15:
    case 16:
    case 17:
    case 18:
    case 21:
    case 23:
    case 27:
    case 30:
        break;
    }
}
