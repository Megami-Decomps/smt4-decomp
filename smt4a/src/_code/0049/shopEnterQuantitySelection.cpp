/* NON_MATCHING: the stepper's minimum/row pair is stored before its value/maximum pair. */
#include "shop/ShopSelectedItem.h"

extern "C" {
s32 FUN_001ba3d0(u32 id); // declcheck: local (the forwarder receives an ID and returns its count)
s32 FUN_0031d174(EquipmentMenuCursor *cursor); // declcheck: local (the forwarder returns the cursor row)
u32 FUN_00498408(Obj536044 *shop, u32 id);
s32 shopGetEntryPrice(const EquipmentMenuItem *item); // declcheck: local (the shop's item type)
s32 shopAffordableCount(u32 id, s32 divisor); // declcheck: local (the shared declaration does not compile here or changes this unit)
}

/* Enters the quantity selection state for the item under the shop cursor. */
extern "C" void shopEnterQuantitySelection(Obj536044 *shop, s32 nextState)
{
    shop->changeState(nextState);
    s32 row = FUN_0031d174(&shop->slotInfo[shop->slot]);
    if (shop->slot == 7 || shop->slot == 8) {
        row += 1;
    } else {
        row += 2;
    }

    EquipmentMenuItem *item = shop->selectedItem();
    s32 maximum;
    if (shop->slot == 8) {
        s32 held = FUN_001ba3d0(item->id);
        if (held < 0) {
            held = 0;
        } else if (held > 99) {
            held = 99;
        }
        maximum = held;
        if (FUN_00498408(shop, item->id) != 0) {
            --maximum;
        }
    } else {
        maximum = shopAffordableCount(item->id, shopGetEntryPrice(item));
    }
    numericStepperSetup(&shop->quantity, maximum, 0, row);
}
