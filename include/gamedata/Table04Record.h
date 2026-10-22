#ifndef GAMEDATA_TABLE04RECORD_H
#define GAMEDATA_TABLE04RECORD_H
#include "common.h"
#include <stddef.h>

struct Table04Record {
    union {
        /* 0x00 */ u8 unk00[0x28];
        struct {
            /* 0x00 */ u8 unk00[0x23];
            /* 0x23 */ u8 category;
        } sort;
    };
    /* 0x28 */ u32 properties;
    /* 0x2C */ u8 unk2C[0x10];
    /* 0x3C */ u32 flags;
};
struct Table04ExtraRecord {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u16 id;
    /* 0x22 */ u8 unk22[0x22];
    /* 0x44 */ s32 flags;
};
typedef char Table04RecordOffsets[offsetof(Table04Record, properties) == 0x28 &&
    offsetof(Table04Record, flags) == 0x3C ? 1 : -1];
typedef char Table04CategoryOffsetCheck[sizeof(Table04Record) == 0x40 &&
    offsetof(Table04Record, sort.category) == 0x23 ? 1 : -1];
typedef char Table04ExtraRecordOffsets[sizeof(Table04ExtraRecord) == 0x48 &&
    offsetof(Table04ExtraRecord, id) == 0x20 && offsetof(Table04ExtraRecord, flags) == 0x44 ? 1 : -1];
#endif
