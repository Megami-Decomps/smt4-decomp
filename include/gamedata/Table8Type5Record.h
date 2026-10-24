/* One 0x2c-byte record of data table 8 type 5, searched by its ID at +0x20 (shared by both games).
 * The 0x6c-byte records of the table's main section are gamedata/Table8Record.h. */
#ifndef GAMEDATA_TABLE8TYPE5RECORD_H
#define GAMEDATA_TABLE8TYPE5RECORD_H

#include "common.h"

typedef struct Table8Type5Record {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 id;
    /* 0x22 */ u8 unk22[4];
    /* 0x26 */ u16 value;
    /* 0x28 */ u8 unk28[4];
} Table8Type5Record;

typedef char Table8Type5RecordSizeCheck[sizeof(Table8Type5Record) == 0x2C ? 1 : -1];

#endif
