#ifndef SHARD_W6_W6MATCH3_NAMEDRECORD_H
#define SHARD_W6_W6MATCH3_NAMEDRECORD_H

#include "common.h"

struct W6Match3NamedRecord {
    /* 0x00 */ u8 unk00[0x1a];
    /* 0x1A */ u8 active;
    /* 0x1B */ u8 unk1b;
    /* 0x1C */ u16 id;
    /* 0x1E */ char name[24];
};

#endif
