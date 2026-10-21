#ifndef SHARD_W6_W6MATCH5_RECORD_CALL_PARAMETERS_H
#define SHARD_W6_W6MATCH5_RECORD_CALL_PARAMETERS_H

#include "common.h"

struct RecordCallParameters {
    u32 first; // 0x00
    u32 second; // 0x04
    u32 third; // 0x08
    u32 fourth; // 0x0c
    u32 reserved[3]; // 0x10
    u8 unk1c[0x10];
    u16 firstFlag; // 0x2c
    u16 secondFlag; // 0x2e
    u8 unk30[0x10];
};

#endif
