#include "common.h"
#include "code/Code0049_Smt4a.h"
#include "gamedata/EquipmentRecordA.h"
#include "gamedata/ConsumableRecordA.h"

struct ShopEntry {
    /* 0x00 */ u16 id;
    /* 0x02 */ u16 unk02Bit0 : 1;
    /* 0x02 */ u16 hasRate : 1;
    /* 0x02 */ u16 rate : 8; /* percent of the base price */
    /* 0x02 */ u16 unk02Bits10 : 6;
};

extern "C" {

u32 aocEntryGetKind(u32 id);
s32 gameDataBlocksGetTableFlag(void);

/* Returns a shop entry's price: the item or equipment base price (99999999 without a record,
 * 1000000 for item 0x7b2), scaled by the entry's rate and tripled under table flag 4. */
s32 shopGetEntryPrice(const ShopEntry *entry)
{
    u32 id = entry->id;
    s32 price = 0;

    switch (aocEntryGetKind(id)) {
    case 1:
    case 12: {
        ConsumableRecordA *item = itemTableGetItemRecord(id);
        price = item != NULL ? item->buyPrice : 99999999;
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
        EquipmentRecordA *equip = itemTableGetEquipmentRecord(id);
        price = equip == NULL ? 99999999 : equip->buyPrice;
        break;
    }
    }
    if (entry->hasRate) {
        s32 rate = entry->rate;
        price = rate * price / 100;
    }
    if (gameDataBlocksGetTableFlag() == 4) {
        price *= 3;
    }
    return price;
}

} /* extern "C" */
