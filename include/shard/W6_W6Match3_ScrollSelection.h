#ifndef SHARD_W6_W6MATCH3_SCROLLSELECTION_H
#define SHARD_W6_W6MATCH3_SCROLLSELECTION_H

#include "shard/W6_W6Match2_ScrollList.h"

struct ScrollSelection : ScrollList {
    /* 0x28 */ u8 unk28[0x38];
    /* 0x60 */ u8 changed;
    /* 0x61 */ u8 unk61;
    /* 0x62 */ u8 locked;
};

#endif
