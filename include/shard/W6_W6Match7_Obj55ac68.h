#ifndef SHARD_W6_W6MATCH7_OBJ55AC68_H
#define SHARD_W6_W6MATCH7_OBJ55AC68_H

#include "common.h"
#include "shard/W4_Match4_Obj559ecc.h"

struct OnlineWordVectorStorage {
    u32* begin;
    u32* end;
    u32* capacityEnd;
};

struct OnlineWordValueStorage {
    const void* vtable;
    u8 active;
    u8 kind;
    u8 unk06[2];
    OnlineWordVectorStorage words;
};

struct OnlineStringVectorStorage {
    Obj55aff4* begin;
    Obj55aff4* end;
    Obj55aff4* capacityEnd;
};

// Storage for the existing Obj55ac68 constructor/destructor entry points.
// The embedded string is constructed in place as an Obj55aff4.
struct Obj55ac68Storage {
    /* 0x00 */ const void* vtable;
    /* 0x04 */ u8 ready;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u32 state;
    /* 0x0c */ u32 nameStorage[2];
    /* 0x14 */ OnlineWordValueStorage first;
    /* 0x28 */ OnlineWordValueStorage second;
    /* 0x3c */ u16 timeout;
    /* 0x3e */ u8 unk3e[2];
    /* 0x40 */ u32 sharedState[8];
    /* 0x60 */ OnlineStringVectorStorage strings;
    /* 0x6c */ u32 result;
    /* 0x70 */ u16 counter;
    /* 0x72 */ u8 pending;
    /* 0x73 */ u8 unk73;
};

extern "C" Obj55ac68Storage* _ZN9Obj55ac68C1Ev(Obj55ac68Storage* object);

#endif
