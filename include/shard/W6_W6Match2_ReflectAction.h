#ifndef SHARD_W6_W6MATCH2_REFLECT_ACTION_H
#define SHARD_W6_W6MATCH2_REFLECT_ACTION_H

#include "common.h"

struct ReflectContext;
struct ReflectAction {
    u8 unk00[4];       // 0x00
    u8 kind;           // 0x04
    union {
        u8 unk05[0x0f]; // 0x05
        struct {
            u8 flags; // 0x05
        } flagView;
    };
    u32 target;        // 0x14
    union {            // 0x18: action-dependent timing payload
        u8 unk18[0x0c];
        struct {
            f32 duration; // 0x18
            u8 unk1c[8];
        } timing;
        struct {
            u32 unk18;
            u32 second; // 0x1c
        } wordValues;
    };
    u16 first;         // 0x24
    u16 second;        // 0x26
    union {            // 0x28: interpretation depends on the action kind
        u32 value;
        f32 scalar;
    };
    union {            // 0x2c
        u8 unk2c[0x20];
        u32 payload; // 0x2c
        struct {
            u8 unk2c[0x1c];
            u16 third; // 0x48
            u16 fourth; // 0x4a
        } extraIds;
    };
    u32 parameter;      // 0x4c
};

extern "C" ReflectContext* g_btlActionReflect;

#endif
