#ifndef SHOP_SHOPSELECTEDITEM_H
#define SHOP_SHOPSELECTEDITEM_H

#include "classes/Obj536044.h"
#include "shard/Shard004A.h"

/* Gets the item under the active category's cursor. */
inline EquipmentMenuItem *Obj536044::selectedItem()
{
    EquipmentMenuCursor *list = &slotInfo[slot];
    EquipmentMenuItem *items = lists[slot].items;
    return &items[flaggedValueHolderGetTotal(&list->holder)];
}

#endif
