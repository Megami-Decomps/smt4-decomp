#ifndef SHARD_W6_W6MATCH3_APPLETMESSAGECONFIG_H
#define SHARD_W6_W6MATCH3_APPLETMESSAGECONFIG_H

#include "common.h"

struct AppletMessageConfig {
    u32 unk00;  // 0x000
    u32 unk04;  // 0x004
    u16 unk08;  // 0x008
    u16 unk0a;  // 0x00a
    union {
        u8 table[0xed8];     // 0x00c: byte clearing view
        u16 message[0x76c];  // 0x00c: UTF-16 message view
    };
    u8 enabled;       // 0xee4
    u8 unkEE5;        // 0xee5
    u8 unkEE6;        // 0xee6
    u8 buffer[0x89];  // 0xee7
    u32 index;        // 0xf70
    u16 unkF74;       // 0xf74
    u8 sub[0xa];      // 0xf76: two words and a halfword, cleared by wordTripleClear
};

#endif
