/* NON_MATCHING: only the order of the item-table address arithmetic and its saved register (r4/r6) differ. */
#include "shard/Shard0049.h"
#include "addon/AocEntryKind.h"
#include "event/2dEvent/SmokeFade.h"

extern "C" {
void placeWinSetValue(u8 value);
void FUN_0049af90(EquipmentMenuState *menu);
void FUN_0031f718(s16 id, s32 enabled, s32 initial);
void statusPanelSetOpen(u32 mode);
u32 flaggedValueHolderGetTotal(const FlaggedValueHolder *holder);
void objBSetWordByIndex(s32 which, u16 value);
void FUN_002c85b0(void);
void FUN_00333f6c(void);
}

/* Finish equipment selection or tear down the menu's active child resource. */
extern "C" void FUN_0049ae34(EquipmentMenuState *menu)
{
    switch (menu->state) {
    case 0:
    case 2:
        break;
    case 1:
        if (FUN_0023b3d0()) {
            FUN_0031f718(-1, 0, 0);
            statusPanelSetOpen(1);
            s32 page = menu->page;
            const EquipmentMenuItem *items = menu->pages[page].items;
            u32 index = flaggedValueHolderGetTotal(&menu->cursors[page].holder);
            u32 item = items[index].id;
            if (item != 0) {
                if (aocEntryGetKindForward(item) == 4) {
                    objBSetWordByIndex(0, item);
                }
                if (aocEntryGetKindForward(item) == 5) {
                    objBSetWordByIndex(1, item);
                }
                if (aocEntryGetKindForward(item) == 6) {
                    objBSetWordByIndex(2, item);
                }
            }
            menu->state = 2;
        }
        break;
    case 3:
        if (FUN_0026c3a0()) {
            menu->state = 0;
            FUN_002c85b0();
            FUN_00333f6c();
            placeWinSetValue(1);
        }
        break;
    case 4:
        if (FUN_0023b3d0()) {
            FUN_0049af90(menu);
        }
        break;
    }
}
