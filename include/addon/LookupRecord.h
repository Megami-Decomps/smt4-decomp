#ifndef AOC_LOOKUP_RECORD_H
#define AOC_LOOKUP_RECORD_H
#include "common.h"

struct Table01Record {
    /* 0x00 */ u8 data[0x20];
};

struct AocLookupRecord {
    /* 0x00 */ u16 id;
    /* 0x02 */ Table01Record record;
    /* 0x22 */ u8 unk22[6];
};
#endif
