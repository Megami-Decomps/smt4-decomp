#include "common.h"
#include "addon/AocSystem_Smt4a.h"

#define AOC_PRICE_UNKNOWN 99999999
#define AOC_ITEM_DISCOUNTED 0x02 /* AocPricedItem.flags: bits 2-9 hold the percentage to charge */

struct AocPricedItem {
    /* 0x00 */ u16 id;
    /* 0x02 */ u16 flags;
};

struct AocRecordA {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ s32 price;
};

struct AocRecordB {
    /* 0x00 */ u8 unk00[0x78];
    /* 0x78 */ s32 price;
};

struct AocRecordC {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ s32 price;
};

extern "C" {

s32 aocEntryGetKind(u32 id);
AocRecordA *dataTable8FindRecord(u32 id);
AocRecordB *dataTable08Sub2GetRecord(u32 id);
AocRecordC *aocRecordLookup84(u32 id);

/* Returns the item's price from the record its kind keeps (99999999 when the record is missing),
 * scaled by its discount percentage when it has one. */
s32 aocItemGetPrice(AocPricedItem *item)
{
    u32 id = item->id;
    s32 price = 0;

    switch (aocEntryGetKind(id)) {
    case 1:
    case 12: {
        AocRecordA *record = dataTable8FindRecord(id);
        price = record == NULL ? AOC_PRICE_UNKNOWN : record->price;
        break;
    }
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8: {
        AocRecordB *record = dataTable08Sub2GetRecord(id);
        price = record == NULL ? AOC_PRICE_UNKNOWN : record->price;
        break;
    }
    case 10: {
        AocRecordC *record = aocRecordLookup84(id);
        price = record == NULL ? AOC_PRICE_UNKNOWN : record->price;
        break;
    }
    }
    if (item->flags & AOC_ITEM_DISCOUNTED) {
        price = price * (u8)(item->flags >> 2) / 100;
    }
    return price;
}

} /* extern "C" */
