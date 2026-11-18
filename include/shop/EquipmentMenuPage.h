#ifndef SHOP_EQUIPMENTMENUPAGE_H
#define SHOP_EQUIPMENTMENUPAGE_H
#include "shard/W6_W6Match4_FlaggedValueHolder.h"

/* Both shops keep a cursor and a list of items for each of nine categories. */
struct EquipmentMenuCursor {
    union {
        u8 data[0x74];
        FlaggedValueHolder holder;
        struct {
            u8 unk00[8];
            s32 count;
        } range;
    };
};
struct EquipmentMenuItem {
    u16 id;
    union {
        u16 unk02;
        struct {
            u16 options : 10;
            u16 preserved : 6;
        } attributes;
    };
    void clearOptions()
    {
        // Keep the six high bits when resetting an item's ten option bits.
        u32 bits = unk02;
        bits >>= 10;
        bits <<= 10;
        unk02 = bits;
    }
};
struct EquipmentMenuPage {
    EquipmentMenuItem items[1024];
    u16 count;
};
typedef char EquipmentMenuPageLayout[sizeof(EquipmentMenuCursor) == 0x74 &&
    sizeof(EquipmentMenuItem) == 4 && sizeof(EquipmentMenuPage) == 0x1002 ? 1 : -1];
#endif
