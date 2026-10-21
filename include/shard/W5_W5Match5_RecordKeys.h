#ifndef SHARD_W5_W5MATCH5_RECORD_KEYS_H
#define SHARD_W5_W5MATCH5_RECORD_KEYS_H

#include "common.h"

/* Record layouts used by the sorting callbacks. */
struct RecordSortEntry {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 key;
};

struct ResourceSortEntry {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ u16 key;
};

#endif
