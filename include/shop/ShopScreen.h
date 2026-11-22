/* IV's shop category and transaction handlers operate on the same scene. */
#ifndef SHOP_SHOPSCREEN_H
#define SHOP_SHOPSCREEN_H
#include "shard/S2Scene3a.h"
#include "shard/Shard004A.h"

typedef Scene3a ShopScreen;
typedef EquipmentMenuCursor ShopCategoryList;
typedef EquipmentMenuPage ShopSlotTable;
typedef EquipmentMenuItem ShopSlot;
extern "C" void buttonHelpSelectMenuPreset(const void *owner);

extern "C" {
/* What one of the item costs in this shop. */
s32 shopSlotGetPrice(const ShopSlot *item);
/* How many of item `id` the player can pay for at `divisor` apiece and still hold. */
s32 shopAffordableCount(u32 id, s32 divisor);
}

/* The item under the current category's cursor. IV's shop states inline it; Apocalypse's shop has it as
 * a member (Obj536044::selectedItem, shop/ShopSelectedItem.h). */
static __inline ShopSlot *shopSelectedItem(ShopScreen *screen)
{
    ShopCategoryList *list = &screen->slotInfo[screen->slot];
    ShopSlot *slots = screen->lists[screen->slot].items;

    return &slots[flaggedValueHolderGetTotal(&list->holder)];
}

/* Tests whether the item can be bought: nothing is paid on the selling list (slot 8); elsewhere the player
 * must be able to pay for at least one (Apocalypse's Obj536044::canBuyItem, smt4a shop/ShopBuyItem.h). */
static __inline bool shopCanBuyItem(ShopScreen *screen, const ShopSlot *item)
{
    if (screen->slot == 8) {
        return true;
    }
    s32 affordable = shopAffordableCount(item->id, shopSlotGetPrice(item));
    if (affordable == 0) {
        return false;
    }
    return true;
}
#endif
