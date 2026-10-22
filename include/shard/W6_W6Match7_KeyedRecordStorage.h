#ifndef SHARD_W6_W6MATCH7_KEYEDRECORDSTORAGE_H
#define SHARD_W6_W6MATCH7_KEYEDRECORDSTORAGE_H

#include "shard/W5_W5Match1_RecordKeys.h"

struct KeyedRecordSlotDefaults {
    u8 indices[3];
    u8 unk03[5];
};

struct KeyedRecordStorage {
    /* 0x000 */ u8 flags;
    /* 0x001 */ u8 name[0x1F];
    /* 0x020 */ union {
        u8 unk020[0x9C];
        struct {
            /* 0x020 */ s32 count;
            /* 0x024 */ void *records;
        } effectSave;
    };
    /* 0x0BC */ KeyedRecordSlotDefaults slots[16];
    /* 0x13C */ u8 unk13C[0xC];
};

struct EffectSaveRecord {
    /* 0x00 */ u32 words[5];
};

struct KeyedEffectSaveStorage {
    /* 0x000 */ u8 unk000[0x28];
    /* 0x028 */ s32 count;
    /* 0x02C */ u8 unk02c[0x110];
    /* 0x13C */ EffectSaveRecord *records;
    /* 0x140 */ u8 unk140[8];
};

typedef char EffectSaveRecordSizeCheck[sizeof(EffectSaveRecord) == 0x14 ? 1 : -1];
typedef char KeyedEffectSaveStorageSizeCheck[sizeof(KeyedEffectSaveStorage) == 0x148 ? 1 : -1];

#endif
