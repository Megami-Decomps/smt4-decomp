#ifndef SMT4A_SHOP_SHOPBUYITEM_H
#define SMT4A_SHOP_SHOPBUYITEM_H

#include "classes/Obj536044.h"
#include "code/Code0049_Smt4a.h"

extern "C" {
/* How many of item `id` the player can pay for at `price` and still hold (0-99). */
s32 shopAffordableCount(u32 id, s32 price);
}

/* Tests whether the item can be bought: nothing is paid on the selling list (slot 8); elsewhere the player must be
 * able to pay for at least one. Inlined by both list states (FUN_0049bd20, itemMenuHandleSelectionInput). */
inline bool Obj536044::canBuyItem(const EquipmentMenuItem *item)
{
    if (slot == 8) {
        return true;
    }
    s32 affordable = shopAffordableCount(item->id, shopGetEntryPrice((const ShopEntry *)item));
    if (affordable == 0) {
        return false;
    }
    return true;
}

#endif
