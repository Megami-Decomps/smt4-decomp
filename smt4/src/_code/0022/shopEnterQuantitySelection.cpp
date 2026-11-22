/* NON_MATCHING: 14 lines, as its Apocalypse twin shopEnterQuantitySelection: retail stores the stepper's
 * value/maximum pair before its minimum/row pair (the build: after), with the flag in r0. */
#include "gamedata/EquipmentSortPower.h"
#include "shop/ShopScreen.h"

extern "C" {
s32 flaggedEntryGetValueByState(FlaggedValueHolder *holder);
s32 playerSlotHoldsEntry(Scene3a *scene, u16 id);

/* Enters `phase` and sets up the quantity selection for the item under the cursor: up to the count the player
 * can spare (the selling list, slot 8) or can pay for (Apocalypse: shopEnterQuantitySelection). */
void shopEnterQuantitySelection(Scene3a *scene, s32 phase)
{
    scene->pageTransition.substep = 0;
    scene->pageTransition.phase = phase;
    s32 row = flaggedEntryGetValueByState(&scene->slotInfo[scene->slot].holder);
    if (scene->slot == 7 || scene->slot == 8) {
        row += 1;
    } else {
        row += 2;
    }
    EquipmentMenuItem *item = shopSelectedItem(scene);
    s32 maximum;
    if (scene->slot == 8) {
        s32 held = itemGetOwnedCount(item->id);
        if (held < 0) {
            held = 0;
        } else if (held > 99) {
            held = 99;
        }
        maximum = held;
        if (playerSlotHoldsEntry(scene, item->id)) {
            --maximum;
        }
    } else {
        maximum = shopAffordableCount(item->id, shopSlotGetPrice(item));
    }
    numericStepperSetup(&scene->quantity, maximum, 0, row);
}
} /* extern "C" */
