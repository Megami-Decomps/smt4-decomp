#ifndef GFX_KEYED_RECORD_H
#define GFX_KEYED_RECORD_H

#include "common.h"
#include <stddef.h>

struct KeyedRecordPart {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ s32 key;
    /* 0x08 */ u8 unk08[0x10];
};
struct KeyedRecord {
    /* 0x000 */ u8 unk000[0x2c];
    /* 0x02C */ KeyedRecordPart parts[6];
    /* 0x0BC */ u8 unk0BC[0x8c];
};
typedef char KeyedRecordLayoutCheck[sizeof(KeyedRecordPart) == 0x18 &&
    offsetof(KeyedRecordPart, key) == 4 && offsetof(KeyedRecord, parts) == 0x2c &&
    sizeof(KeyedRecord) == 0x148 ? 1 : -1];

#endif
