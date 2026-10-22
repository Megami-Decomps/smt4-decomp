/* A table of 0xa8-byte records keyed by a halfword id, held by an owner at 0x3b4. */
#ifndef SHARD_IDRECORDTABLE_H
#define SHARD_IDRECORDTABLE_H

#include "common.h"
#include <stddef.h>

struct IdRecord {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u16 id;
    /* 0x52 */ u8 unk52[0x56];
};

struct IdRecordOwner {
    /* 0x000 */ u8 unk000[0x3b4];
    /* 0x3B4 */ s32 recordCount;
    /* 0x3B8 */ IdRecord *records;
};

typedef char IdRecordSizeCheck[sizeof(IdRecord) == 0xa8 ? 1 : -1];
typedef char IdRecordOwnerRecordsOffsetCheck[offsetof(IdRecordOwner, records) == 0x3b8 ? 1 : -1];

#endif
