#ifndef GAMEDATA_TABLE48RECORD_H
#define GAMEDATA_TABLE48RECORD_H
#include "common.h"
#include <stddef.h>
struct Table48Record {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ s32 id;
    /* 0x24 */ u32 unk24;
};
typedef char Table48RecordLayoutCheck[(sizeof(Table48Record) == 0x28 && offsetof(Table48Record, id) == 0x20) ? 1 : -1];
#endif
