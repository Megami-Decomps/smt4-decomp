/* Structs shared by the helper functions in code shard 003C. */
#ifndef SHARD_SHARD003C_H
#define SHARD_SHARD003C_H

#include "common.h"

#include "shard/Shard003B.h"

typedef struct Obj1C {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ u8 unk1C;
    /* 0x1D */ u8 unk1D;
} Obj1C;

typedef struct Ref208B {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ Obj1C *obj;
} Ref208B;

typedef struct BtlUnitData {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 unk08;
    /* 0x0A */ u8 unk0A[0xA2];
    /* 0xAC */ s32 unkAC;
    /* 0xB0 */ s32 unkB0;
    /* 0xB4 */ s32 unkB4;
    /* 0xB8 */ s32 unkB8;
} BtlUnitData;

typedef struct BtlUnitObjB {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ BtlUnitData *obj;
} BtlUnitObjB;

#endif
