#ifndef GAMEDATA_TABLE00_H
#define GAMEDATA_TABLE00_H

#include "common.h"

struct Table00Choice {
    /* 0x00 */ u16 value;
    /* 0x02 */ u8 unk02[4];
};

struct Table00Record {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 unk02[0x14];
    /* 0x16 */ u16 flags;
    /* 0x18 */ u8 unk18[0x48];
    /* 0x60 */ Table00Choice choices[3];
    /* 0x72 */ u8 unk72[0x0E];
    /* 0x80 */ u16 relatedIds[3];
    /* 0x86 */ u8 unk86[0x22];
};

typedef char Table00RecordSizeCheck[sizeof(Table00Record) == 0xA8 ? 1 : -1];

#endif
