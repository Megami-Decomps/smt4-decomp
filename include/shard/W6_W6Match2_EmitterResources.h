#ifndef SHARD_W6_W6MATCH2_EMITTER_RESOURCES_H
#define SHARD_W6_W6MATCH2_EMITTER_RESOURCES_H

#include "common.h"

struct ResourceEmitter {
    u32 key;         // 0x00
    u8 unk04[0x2c]; // 0x04
    void* buffer;    // 0x30
};

struct EmitterSource {
    u16 id;          // 0x00
    u8 unk02[0x22]; // 0x02
    void* data;      // 0x24
};

struct EmitterArguments {
    u8 data[0x24]; // 0x00
};

struct EmitterResourceRequest {
    u8 unk00[0x0c];            // 0x00
    EmitterArguments arguments; // 0x0c
    EmitterSource* source;      // 0x30
};

#endif
