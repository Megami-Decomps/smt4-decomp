#ifndef GAMEDATA_REFERENCEDKINDRECORD_H
#define GAMEDATA_REFERENCEDKINDRECORD_H

#include "common.h"

struct ReferencedKindRecord {
    /* 0x00 */ u8 unk00[0x26];
    /* 0x26 */ u16 kind;
};
struct KindComparisonKey {
    /* 0x00 */ u32 id;
    /* 0x04 */ u32 unk04;
};

#endif
