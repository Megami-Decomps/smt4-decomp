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
    /* 0x020 */ u8 unk020[0x9C];
    /* 0x0BC */ KeyedRecordSlotDefaults slots[16];
    /* 0x13C */ u8 unk13C[0xC];
};

#endif
