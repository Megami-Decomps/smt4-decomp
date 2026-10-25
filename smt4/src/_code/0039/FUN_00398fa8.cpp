/* NON_MATCHING: touch handling of the pick-list screen (maps the touched region to a row/column in the grid or the side tabs, posts the selection event when it changed, and scrolls via the arrow and slider regions); written from the decompilation, the lost arguments of the flaggedEntry getters and of some scroll helpers are guessed from the surrounding calls and the 14/15-wide division is the compiler's magic-multiply form */
#include "common.h"

#define PICK_REGION_FIRST_GRID 3
#define PICK_REGION_END_GRID 0x8A
#define PICK_REGION_FIRST_TAB 0x8B
#define PICK_REGION_END_TAB 0x8E
#define PICK_REGION_SCROLL_UP 0
#define PICK_REGION_SCROLL_DOWN 1
#define PICK_REGION_SLIDER 2
#define PICK_COLUMNS_PAGED 14
#define PICK_COLUMNS_PLAIN 15
#define PICK_TAB_SELECTED_ROW 6
#define PICK_SCROLL_MIN_WIDTH 0x7F
#define PICK_SELECTION_TOUCH 1
#define PICK_SELECTION_DRAG 2
#define PICK_SELECTION_HOLD 6
#define PICK_EVENT_SELECTION_CHANGED 0x100016C

struct PickList {
    /* 0x00 */ u8 unk00[0x10];
};

struct PickScreen {
    /* 0x000 */ u8 unk000[0x10];
    /* 0x010 */ s32 column;
    /* 0x014 */ s32 row;
    /* 0x018 */ s32 previousColumn;
    /* 0x01C */ s32 previousRow;
    /* 0x020 */ u8 unk020[9];
    /* 0x029 */ u8 paged;
    /* 0x02A */ u8 unk02A[2];
    /* 0x02C */ s16 sliderWidth;
    /* 0x02E */ u8 unk02E[0x4EE];
    /* 0x51C */ PickList pagedList;
    /* 0x52C */ u8 unk52C[0x54];
    /* 0x580 */ PickList plainList;
    /* 0x590 */ u8 unk590[0x54];
    /* 0x5E4 */ PickList tabList;
    /* 0x5F4 */ u8 unk5F4[0x54];
    /* 0x648 */ u8 tabSelected;
    /* 0x649 */ u8 unk649[0x1D7];
    /* 0x820 */ s16 regions[0x80];
};

struct PickSliderInfo {
    /* 0x00 */ u8 unk00[0xA];
    /* 0x0A */ s16 first;
    /* 0x0C */ struct { u8 unk00[2]; s16 count; } *range;
};

extern "C" {
s32 ifTouchGetSelectionMode(void);
s32 ifTouchGetSelectedRegion(void);
s32 ifTouchIsInitialSelection(s32 region);
s32 flaggedEntryGetValueA(PickList *list);
s32 flaggedEntryGetValueB(PickList *list);
void flaggedEntrySetValueA(PickList *list, s32 value);
void flaggedEntrySetValueB(PickList *list, s32 value);
void eventQueueAddUniqueIfValid(u32 event);
s32 FUN_0029ee54(PickList *list);
s32 FUN_0029efa8(PickList *list);
s32 FUN_0029efc0(PickList *list);
void FUN_0029eb5c(PickList *list, s32 position);
PickSliderInfo *asdTMTexTableEntryAt(u32 group, u32 id);
s32 FUN_001c36a0(void);
s32 __aeabi_idivmod(s32 a, s32 b);

void FUN_00398fa8(PickScreen *screen)
{
    s32 selection = ifTouchGetSelectionMode();
    if (selection != PICK_SELECTION_TOUCH && selection != PICK_SELECTION_DRAG && selection != PICK_SELECTION_HOLD)
        return;

    s32 region = ifTouchGetSelectedRegion();
    PickList *pagedList = &screen->pagedList;

    for (s32 i = PICK_REGION_FIRST_GRID; i < PICK_REGION_END_GRID; i++) {
        if (screen->regions[i] != region || region <= 0)
            continue;
        s32 cell = i - PICK_REGION_FIRST_GRID;
        if (screen->paged != 0) {
            if (ifTouchIsInitialSelection(region) != 0) {
                screen->previousColumn = screen->column;
                screen->previousRow = screen->row;
            }
            s32 oldColumn = screen->column;
            s32 oldRow = screen->row;
            flaggedEntrySetValueB(pagedList, cell % PICK_COLUMNS_PAGED);
            flaggedEntrySetValueA(pagedList, cell / PICK_COLUMNS_PAGED);
            screen->column = flaggedEntryGetValueB(pagedList);
            screen->row = flaggedEntryGetValueA(pagedList);
            if (screen->column == oldColumn && screen->row == oldRow)
                break;
        } else {
            s32 oldColumn = screen->column;
            s32 oldRow = screen->row;
            screen->tabSelected = 0;
            flaggedEntrySetValueB(&screen->plainList, cell % PICK_COLUMNS_PLAIN);
            flaggedEntrySetValueA(&screen->plainList, cell / PICK_COLUMNS_PLAIN);
            screen->column = flaggedEntryGetValueB(&screen->plainList);
            screen->row = flaggedEntryGetValueA(&screen->plainList);
            if (screen->column == oldColumn && screen->row == oldRow)
                break;
        }
        eventQueueAddUniqueIfValid(PICK_EVENT_SELECTION_CHANGED);
        break;
    }

    for (s32 i = PICK_REGION_FIRST_TAB; i < PICK_REGION_END_TAB; i++) {
        if (screen->regions[i] != region)
            continue;
        PickList *tabs = &screen->tabList;
        s32 oldTab = flaggedEntryGetValueB(tabs);
        flaggedEntryGetValueA(tabs);
        s32 oldRow = flaggedEntryGetValueA(&screen->plainList);
        if (screen->paged == 0) {
            screen->tabSelected = 1;
            flaggedEntrySetValueA(&screen->plainList, PICK_TAB_SELECTED_ROW);
            flaggedEntrySetValueB(tabs, i - PICK_REGION_FIRST_TAB);
            screen->column = flaggedEntryGetValueB(&screen->plainList);
            screen->row = flaggedEntryGetValueA(&screen->plainList);
        }
        if (selection != PICK_SELECTION_DRAG) {
            if (selection == PICK_SELECTION_HOLD || ifTouchIsInitialSelection(region) == 0)
                break;
        } else if (flaggedEntryGetValueB(tabs) == oldTab && flaggedEntryGetValueA(&screen->plainList) == oldRow) {
            break;
        }
        eventQueueAddUniqueIfValid(PICK_EVENT_SELECTION_CHANGED);
        break;
    }

    if (screen->paged != 0 && screen->sliderWidth >= PICK_SCROLL_MIN_WIDTH) {
        if (screen->regions[PICK_REGION_SCROLL_UP] == region) {
            if (FUN_0029efa8(pagedList) + FUN_0029efc0(pagedList) - 1 >= 0)
                FUN_0029eb5c(pagedList, 0);
        } else if (screen->regions[PICK_REGION_SCROLL_DOWN] == region) {
            s32 next = FUN_0029efa8(pagedList) + FUN_0029efc0(pagedList) + 1;
            if (next < FUN_0029ee54(pagedList))
                FUN_0029eb5c(pagedList, next);
        } else if (screen->regions[PICK_REGION_SLIDER] == region) {
            s32 total = FUN_0029ee54(pagedList);
            PickSliderInfo *slider = asdTMTexTableEntryAt(0x2E, 0x14E);
            s32 offset = (s16)(FUN_001c36a0() - slider->first);
            if (offset >= 0 && offset < slider->range->count)
                FUN_0029eb5c(pagedList, __aeabi_idivmod(offset * total, slider->range->count));
        }
    }
}

} /* extern "C" */
