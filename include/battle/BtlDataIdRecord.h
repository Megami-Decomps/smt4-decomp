/* A row of section 0 of the battle state's data-table file (0xC bytes): an id and four values,
 * found by id (btlDataFindRecordById, smt4a btlDataFindRecordById) and read by script commands. */
#ifndef BATTLE_BTLDATAIDRECORD_H
#define BATTLE_BTLDATAIDRECORD_H

#include "common.h"
#include <stddef.h>

typedef struct BtlDataIdRecord {
    /* 0x00 */ u16 id;
    /* 0x02 */ u16 values[4];
    /* 0x0A */ u8 unk0A[2];
} BtlDataIdRecord;

typedef char BtlDataIdRecordLayoutCheck[
    sizeof(BtlDataIdRecord) == 0xC && offsetof(BtlDataIdRecord, values) == 2 ? 1 : -1];

#endif
