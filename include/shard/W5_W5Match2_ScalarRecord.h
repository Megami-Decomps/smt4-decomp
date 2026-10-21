#ifndef SHARD_W5_W5MATCH2_SCALARRECORD_H
#define SHARD_W5_W5MATCH2_SCALARRECORD_H

#include "common.h"

/* Records are separate views: their callbacks need not share an object layout. */
struct ScalarRecord {
    /* 0x00 */ u16 value;
};

struct SecondaryValueRecord {
    /* 0x00 */ u8 unk00[0x3A];
    /* 0x3A */ u16 secondaryValue;
};

struct SortKeyRecord {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 sortKey;
};

struct RankedRecord {
    /* 0x00 */ u16 index;
    /* 0x02 */ u16 rank;
};
#endif
