/* NON_MATCHING: r5/r6 swap between the slot pointer and its id; layout and logic match. */
#include "common.h"
#include "gamedata/EquipmentRecord.h"
#include "gamedata/ConsumableRecord.h"

extern "C" {

typedef struct ItemSlot {
    /* 0x0 */ u16 id;
    /* 0x2 */ u16 unk2_0 : 1;
    /* 0x2 */ u16 discounted : 1;
    /* 0x2 */ u16 discountPercent : 8;
    /* 0x2 */ u16 unk2_10 : 6;
} ItemSlot;

u32 aocEntryGetKind(u32 id);
u8 FUN_002973ec(void);

static s32 itemGetPrice(u32 id)
{
    ConsumableRecord *item = itemTableGetItemRecord(id);

    if (item == NULL) {
        return 99999999;
    }
    return item->buyPrice;
}

static s32 equipGetPrice(u32 id)
{
    EquipmentRecord *equip = itemTableGetEquipmentRecord(id);

    if (equip == NULL) {
        return 99999999;
    }
    return equip->buyPrice;
}

/* Return the slot's item price, scaled by its discount and tripled in mode 2. */
s32 FUN_00230e04(ItemSlot *slot)
{
    s32 price = 0;
    u16 id = slot->id;

    switch (aocEntryGetKind(id)) {
    case 1:
        price = itemGetPrice(id);
        break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        price = equipGetPrice(id);
        break;
    }
    if (slot->discounted) {
        price = (s32)(slot->discountPercent * price) / 100;
    }
    if (FUN_002973ec() == 2) {
        price *= 3;
    }
    return price;
}

} /* extern "C" */
