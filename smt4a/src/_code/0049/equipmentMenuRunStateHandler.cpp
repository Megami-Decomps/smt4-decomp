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
void gameGlobalsSetSceneState(void);
void gameGlobalsReleaseReference(void);
}

/* Gets the item under the active page's cursor: the body of Obj536044::selectedItem
 * (shop/ShopSelectedItem.h) over this view of the shop. */
static __inline const EquipmentMenuItem *equipmentMenuSelectedItem(EquipmentMenuState *menu)
{
    EquipmentMenuCursor *list = &menu->cursors[menu->page];
    const EquipmentMenuItem *items = menu->pages[menu->page].items;
    return &items[flaggedValueHolderGetTotal(&list->holder)];
}

/* Finish equipment selection or tear down the menu's active child resource. */
extern "C" void equipmentMenuRunStateHandler(EquipmentMenuState *menu)
{
    switch (menu->state) {
    case 0:
    case 2:
        break;
    case 1:
        if (gameStateIsNotTransitioning()) {
            FUN_0031f718(-1, 0, 0);
            statusPanelSetOpen(1);
            u32 item = equipmentMenuSelectedItem(menu)->id;
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
        if (gameGlobalsIsActiveStateFour()) {
            menu->state = 0;
            gameGlobalsSetSceneState();
            gameGlobalsReleaseReference();
            placeWinSetValue(1);
        }
        break;
    case 4:
        if (gameStateIsNotTransitioning()) {
            FUN_0049af90(menu);
        }
        break;
    }
}
