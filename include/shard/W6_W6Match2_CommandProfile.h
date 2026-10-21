#ifndef SHARD_W6_W6MATCH2_COMMAND_PROFILE_H
#define SHARD_W6_W6MATCH2_COMMAND_PROFILE_H

#include "common.h"

struct ProfileComponent {
    u8 enabled; // 0x00
    u8 mode;    // 0x01
    u8 kind;    // 0x02
};

struct CommandProfile {
    u8 enabled;                 // 0x00
    u8 unk01[0x2f];            // 0x01
    ProfileComponent primary;  // 0x30
    u8 unk33[0x21];            // 0x33
    ProfileComponent secondary; // 0x54
    u8 unk57[5];               // 0x57
    u8 mode;                    // 0x5c
    u8 unk5d[0x23];            // 0x5d
};

#endif
