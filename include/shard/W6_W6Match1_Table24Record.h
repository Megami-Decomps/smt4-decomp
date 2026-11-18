#ifndef SHARD_W6_W6MATCH1_TABLE24RECORD_H
#define SHARD_W6_W6MATCH1_TABLE24RECORD_H

#include "common.h"

struct Table24Record {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 unk02[6];
    /* 0x08 */ char name[0x38];  /* the name starts here; the rest of the record is not mapped */
};
typedef char Table24RecordSizeCheck[sizeof(Table24Record) == 0x40 ? 1 : -1];

#endif
