/* IV's shop category and transaction handlers operate on the same scene. */
#ifndef SHOP_SHOPSCREEN_H
#define SHOP_SHOPSCREEN_H
#include "shard/S2Scene3a.h"

typedef Scene3a ShopScreen;
typedef EquipmentMenuCursor ShopCategoryList;
typedef EquipmentMenuPage ShopSlotTable;
typedef EquipmentMenuItem ShopSlot;
extern "C" void buttonHelpSelectMenuPreset(const void *owner);
#endif
