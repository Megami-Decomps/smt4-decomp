#ifndef GAMEDATA_ITEMSORTRECORD_H
#define GAMEDATA_ITEMSORTRECORD_H

#include "common.h"
#include <stddef.h>

struct ItemSortRecord {
    union {
        /* 0x00 */ u8 unk00[0x2c];
        struct {
            u8 prefix[0x23];
            u8 category;
            u16 value;
        } sort;
    };
    /* 0x2c */ u16 secondaryKey;
};
typedef char ItemSortRecordLayoutCheck[
    offsetof(ItemSortRecord, sort.category) == 0x23 &&
    offsetof(ItemSortRecord, sort.value) == 0x24 &&
    offsetof(ItemSortRecord, secondaryKey) == 0x2C &&
    sizeof(ItemSortRecord) == 0x2E ? 1 : -1];

#endif
