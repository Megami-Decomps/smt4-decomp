#include "common.h"

/* An item reference: the item id and its price scaling. */
struct AocItemRef {
    /* 0x00 */ u16 id;
    /* 0x02 */ u16 unk02Bit0 : 1;
    /* 0x02 */ u16 scaled : 1;  /* the price is scaled by `percent` */
    /* 0x02 */ u16 percent : 8;
    /* 0x02 */ u16 unk02Bits10 : 6;
};

struct AocKindOneRecord {
    /* 0x00 */ u8 unk00[0x7c];
    /* 0x7c */ s32 price;
};

struct AocKindTwoRecord {
    /* 0x00 */ u8 unk00[0xa0];
    /* 0xa0 */ s32 price;
};

struct AocKindTenRecord {
    /* 0x00 */ u8 unk00[0x2c];
    /* 0x2c */ s32 price;
};

/* Price reported for an item whose record is missing. */
#define AOC_PRICE_MISSING 99999999

extern "C" {
u32 aocEntryGetKind(u32 id);
AocKindOneRecord *dataTable08Sub1GetRecord(u32 id);
AocKindTwoRecord *dataTable08Sub2GetRecord(u32 id);
AocKindTenRecord *aocRecordLookup84(u32 id);

/* Returns the price of the referenced item from its kind's table, scaled by its percent when flagged. */
s32 aocItemGetPrice(const AocItemRef *ref)
{
    u32 id = ref->id;
    s32 price = 0;

    switch (aocEntryGetKind(id)) {
    case 1: {
        AocKindOneRecord *record = dataTable08Sub1GetRecord(id);
        price = record == NULL ? AOC_PRICE_MISSING : record->price;
        break;
    }
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8: {
        AocKindTwoRecord *record = dataTable08Sub2GetRecord(id);
        price = record == NULL ? AOC_PRICE_MISSING : record->price;
        break;
    }
    case 10: {
        AocKindTenRecord *record = aocRecordLookup84(id);
        price = record == NULL ? AOC_PRICE_MISSING : record->price;
        break;
    }
    }
    if (ref->scaled) {
        price = ref->percent * price / 100;
    }
    return price;
}

} /* extern "C" */
