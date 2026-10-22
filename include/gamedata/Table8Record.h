/* Records of data table 8 (0x6C bytes each), found by id. */
#ifndef GAMEDATA_TABLE8RECORD_H
#define GAMEDATA_TABLE8RECORD_H

#include "common.h"
#include <stddef.h>

struct Table8Record {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ u16 id;
    /* 0x32 */ u16 unk32;
    /* 0x34 */ u8 unk34[7];
    /* 0x3B */ u8 kind;
    /* 0x3C */ u8 unk3c[5];
    /* 0x41 */ u8 type;
    /* 0x42 */ u8 unk42[0x2a];
};

typedef char Table8RecordLayoutCheck[sizeof(Table8Record) == 0x6c && offsetof(Table8Record, id) == 0x30 &&
    offsetof(Table8Record, kind) == 0x3b && offsetof(Table8Record, type) == 0x41 ? 1 : -1];

#endif
