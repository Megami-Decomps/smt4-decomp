#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x36];
    /* 0x36 */ s16 bonus;
    /* 0x38 */ u8 unk38[0x38];
    /* 0x70 */ u16 order;
} Record;

extern Record *dataTable08Sub2GetRecord(u32 id);
extern void equipmentGetCappedUpgradeBonuses(u32 id, s16 *values);

/* Sort comparison of two ids: by the sum of the first equipmentGetCappedUpgradeBonuses value and the record bonus (b before a when larger), then by order ascending. */
s32 FUN_002b2bbc(u16 *idA, u16 *idB)
{
    s16 valuesA[8];
    s16 valuesB[8];
    Record *recordA = dataTable08Sub2GetRecord(*idA);
    Record *recordB = dataTable08Sub2GetRecord(*idB);
    s32 diff;

    equipmentGetCappedUpgradeBonuses(*idA, valuesA);
    equipmentGetCappedUpgradeBonuses(*idB, valuesB);
    diff = (valuesB[0] + recordB->bonus) - (valuesA[0] + recordA->bonus);
    if (diff == 0) {
        recordA = dataTable08Sub2GetRecord(*idA);
        recordB = dataTable08Sub2GetRecord(*idB);
        diff = recordA->order - recordB->order;
    }
    return diff;
}

} /* extern "C" */
