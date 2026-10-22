/* NON_MATCHING: register choice in the rate scaling (retail multiplies and divides in r0, keeping the 1/100 constant in r1). */
#include "common.h"

struct ShopEntry {
    /* 0x00 */ u16 id;
    /* 0x02 */ u16 unk02Bit0 : 1;
    /* 0x02 */ u16 hasRate : 1;
    /* 0x02 */ u16 rate : 8; /* percent of the base price */
    /* 0x02 */ u16 unk02Bits10 : 6;
};

struct ItemPriceRecord {
    /* 0x00 */ u8 unk00[0x4C];
    /* 0x4C */ s32 price;
};

struct EquipPriceRecord {
    /* 0x00 */ u8 unk00[0x74];
    /* 0x74 */ s32 price;
};

extern "C" {

u32 aocEntryGetKind(u32 id);
ItemPriceRecord *dataTable8FindRecord(u32 id);
EquipPriceRecord *FUN_00192608(u32 id);
s32 gameDataBlocksGetTableFlag(void);

/* Returns a shop entry's price: the item or equipment base price (99999999 without a record,
 * 1000000 for item 0x7b2), scaled by the entry's rate and tripled under table flag 4. */
s32 FUN_0049cad0(const ShopEntry *entry)
{
    u32 id = entry->id;
    s32 price = 0;

    switch (aocEntryGetKind(id)) {
    case 1:
    case 12: {
        ItemPriceRecord *item = dataTable8FindRecord(id);
        price = item != NULL ? item->price : 99999999;
        if (id == 0x7b2) {
            price = 1000000;
        }
        break;
    }
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8: {
        EquipPriceRecord *equip = FUN_00192608(id);
        price = equip == NULL ? 99999999 : equip->price;
        break;
    }
    }
    if (entry->hasRate) {
        price = price * entry->rate / 100;
    }
    if (gameDataBlocksGetTableFlag() == 4) {
        price *= 3;
    }
    return price;
}

} /* extern "C" */
