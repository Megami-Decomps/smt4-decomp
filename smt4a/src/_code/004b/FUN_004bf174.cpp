#include "common.h"
#include "shard/W6_W6Match3_UnitStatusRequest.h"

extern "C" {

typedef struct PickMenu {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u8 type;
    /* 0x005 */ u8 unk005[3];
    /* 0x008 */ s32 state;
    /* 0x00C */ s32 nextState;
    /* 0x010 */ u8 unk010[0x250];
    /* 0x260 */ u8 pageEntry[0x64];  /* flagged entry holding the page (A) and column (B) */
    /* 0x2C4 */ u32 items[12];
    /* 0x2F4 */ s32 cursor;
    /* 0x2F8 */ u8 unk2F8[0x2C];
    /* 0x324 */ s32 itemCount;
    /* 0x328 */ s32 markedItem;
    /* 0x32C */ s32 selected;
    /* 0x330 */ u8 unk330[0x14];
    /* 0x344 */ s32 closing;
} PickMenu;

extern s32 statusDownGetMode(void);
extern s32 FUN_0022e714(void);
extern s32 FUN_00187168(void);
extern s32 FUN_0023b3b8(void);
extern s32 FUN_0035db94(void);
extern u32 FUN_003e4d68(u32 item);
extern void statusPanelSetOpen(s32 arg);
extern void FUN_0023b45c(s32 arg);
extern void FUN_00183f58(s32 a, s32 b, s32 c, s32 d);
extern void FUN_004be990(PickMenu *menu, s32 a, s32 b, s32 c);
extern void flaggedEntrySetValueA(void *entry, s32 value);
extern void flaggedEntrySetValueB(void *entry, s32 value);
extern void sysPlaySe(u32 se);

/* Handles the pick menu's input: moves the cursor, confirms or cancels. */
void FUN_004bf174(PickMenu *menu)
{
    s32 step = statusDownGetMode();

    if (step != 0) {
        s32 index = menu->cursor + step;
        s32 row;
        s32 column;

        if (index >= menu->itemCount) {
            index = 0;
        } else if (index < 0) {
            index = menu->itemCount - 1;
        }
        column = index % 4;
        row = index / 4;
        flaggedEntrySetValueB(menu->pageEntry, column);
        flaggedEntrySetValueA(menu->pageEntry, row);
        menu->cursor = index;
        menu->selected = index;
        FUN_0023b45c(0);
    } else if (FUN_0022e714() == 0) {
        FUN_003e4d68(menu->items[menu->selected] & 0xFFFF);
        if (FUN_00187168() != 0) {
            statusRequestUnitDetails((const UnitCategoryRecord*)FUN_003e4d68(menu->items[menu->selected] & 0xFFFF), 0, 0);
            statusPanelSetOpen(1);
        }
    }
    if (FUN_0023b3b8() == 0) {
        menu->closing = 3;
        menu->state = 2;
        menu->nextState = 3;
        if (menu->type == 2 && menu->itemCount > 0) {
            sysPlaySe(0xF0);
            FUN_00183f58(5, 1, 1, 1);
        } else {
            u32 selectedItem = menu->items[menu->selected];
            u32 markedItem = menu->items[menu->markedItem];
            if (selectedItem == markedItem) {
                sysPlaySe(0x11B);
            } else {
                sysPlaySe(0xF0);
            }
        }
        if (FUN_0035db94() < 0) {
            FUN_004be990(menu, 1, -1, 0);
            return;
        }
        if (FUN_0035db94() > 0) {
            FUN_004be990(menu, 0, -1, 0);
            return;
        }
    }
}

} /* extern "C" */
