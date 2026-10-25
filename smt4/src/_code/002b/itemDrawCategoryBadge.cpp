#include "shard/PadState.h"
#include "shard/TextureDrawCall.h"

namespace {
struct ItemCategoryView { u8 prefix[0x53]; u8 category; };
struct EquipmentCategoryView { u8 prefix[0x6C]; u8 category; };
struct PlayerEquipmentView {
    u16 weapon;
    u16 gun;
    u16 armor;
    u16 head;
    u16 arms;
    u16 legs;
    u16 accessory;
};
}
extern "C" {
u32 aocEntryGetKind(u32 id);
const ItemCategoryView *dataTable08Sub0GetRecord(u32 id);
const EquipmentCategoryView *dataTable08Sub1GetRecord(u32 id);
u32 categoryIdFromIndex(u32 category);
PadState *gameGetPlayerData();
void FUN_002ae9ec(s32 layer, s32 group, u32 image, s32 x, s32 y, s32 priority);

// Draw an item's category icon and optionally mark the currently equipped entry.
void itemDrawCategoryBadge(u32 id, s32 x, s32 y, s32 priority, s32 markEquipped)
{
    u32 icon = 0;
    u32 equipped = 0;
    switch (aocEntryGetKind(id)) {
    case 1:
        icon = categoryIdFromIndex(dataTable08Sub1GetRecord(id)->category);
        break;
    case 0: {
        const ItemCategoryView *record = dataTable08Sub0GetRecord(id);
        icon = record->category == 0 ? 0x3FF : categoryIdFromIndex(record->category);
        break;
    }
    case 2:
        icon = 0x3F7;
        if (markEquipped != 0 && reinterpret_cast<PlayerEquipmentView *>(gameGetPlayerData())->weapon == id)
            equipped = 1;
        break;
    case 3:
        icon = 0x3F8;
        if (markEquipped != 0 && reinterpret_cast<PlayerEquipmentView *>(gameGetPlayerData())->gun == id)
            equipped = 1;
        break;
    case 4:
        icon = 0x3FA;
        if (markEquipped != 0 && reinterpret_cast<PlayerEquipmentView *>(gameGetPlayerData())->head == id)
            equipped = 1;
        break;
    case 5:
        icon = 0x3FB;
        if (markEquipped != 0 && reinterpret_cast<PlayerEquipmentView *>(gameGetPlayerData())->arms == id)
            equipped = 1;
        break;
    case 6:
        icon = 0x3FC;
        if (markEquipped != 0 && reinterpret_cast<PlayerEquipmentView *>(gameGetPlayerData())->legs == id)
            equipped = 1;
        break;
    case 7:
        icon = 0x3FD;
        if (markEquipped != 0 && reinterpret_cast<PlayerEquipmentView *>(gameGetPlayerData())->accessory == id)
            equipped = 1;
        break;
    case 8:
        icon = 0x3F9;
        if (markEquipped != 0 && reinterpret_cast<PlayerEquipmentView *>(gameGetPlayerData())->armor == id)
            equipped = 1;
        break;
    case 9: case 10:
        icon = 0x3FE;
        break;
    }
    FUN_002ae9ec(2, 0x13, icon, x, y, priority);
    if (equipped != 0)
        FUN_002bf288(2, 0x13, 0x417, x, y, priority + 1);
}
}
