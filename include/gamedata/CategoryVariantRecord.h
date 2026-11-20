#ifndef GAMEDATA_CATEGORYVARIANTRECORD_H
#define GAMEDATA_CATEGORYVARIANTRECORD_H
#include "common.h"
#include "gamedata/EncountData.h"

/* A 0x94-byte row of data table 0x24 (dataTableFindCategoryVariant): a statistic, keyed by category,
 * kind and variant, and the result it rolls in each phase (statisticsRollAll, smt4a statisticsRollAll). */
struct CategoryVariantRecord {
    /* 0x00 */ u8 category;
    /* 0x01 */ u8 kind;
    /* 0x02 */ u16 variant;
    /* 0x04 */ EncountSlot slots[24];    /* result, weight and hold count per phase */
};
typedef char CategoryVariantRecordSizeCheck[sizeof(CategoryVariantRecord) == 0x94 ? 1 : -1];

#endif
