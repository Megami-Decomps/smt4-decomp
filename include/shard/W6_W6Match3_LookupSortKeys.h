#ifndef SHARD_W6_W6MATCH3_LOOKUPSORTKEYS_H
#define SHARD_W6_W6MATCH3_LOOKUPSORTKEYS_H

#include "common.h"

struct LookupSortKeys {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u16 secondary;
    /* 0x26 */ u8 unk26[2];
    /* 0x28 */ u16 primary;
};

#endif
