#ifndef SHARD_W6_W6MATCH3_REFLECTACTION_H
#define SHARD_W6_W6MATCH3_REFLECTACTION_H

#include "common.h"

struct ReflectAction {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u8 kind;
    /* 0x05 */ u8 unk05[0x0f];
    /* 0x14 */ u32 value;
    /* 0x18 */ u32 extra;
    /* 0x1C */ u32 auxiliary;
    union {
        /* 0x20 */ u8 unk20[8];
        struct {
            u8 unk20[4];
            u16 first;     // 0x24
            u16 second;    // 0x26
        } parameters;
    };
    /* 0x28 */ u32 target;
    union {
        /* 0x2C */ u8 unk2c[0x20];
        struct {
            u8 unk2c[4];
            f32 scalar;    // 0x30
        } payload;
    };
    /* 0x4C */ u32 option;
};

#endif
