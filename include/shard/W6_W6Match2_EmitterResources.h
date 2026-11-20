#ifndef SHARD_W6_W6MATCH2_EMITTER_RESOURCES_H
#define SHARD_W6_W6MATCH2_EMITTER_RESOURCES_H

#include "common.h"
#include <stddef.h>

struct EffEmitter;

struct ResourceEmitter {
    u32 key;         // 0x00
    union {
        u8 unk04[0x2c]; // 0x04
        struct {
            u8 unk04BeforeEmitter[0x28];
            EffEmitter *emitter; // 0x2C
        } resource;
    };
    void* buffer;    // 0x30
};
typedef char ResourceEmitterLayoutCheck[offsetof(ResourceEmitter, resource.emitter) == 0x2C &&
    offsetof(ResourceEmitter, buffer) == 0x30 && sizeof(ResourceEmitter) == 0x34 ? 1 : -1];

struct EmitterSource {
    u16 id;          // 0x00
    u8 unk02[0x22]; // 0x02
    void* data;      // 0x24
};

struct EmitterArguments {
    u8 data[0x24]; // 0x00
};

struct EffParticleParam;

struct EmitterResourceRequest {
    u8 unk00[0x0c];            // 0x00
    union {
        EmitterArguments arguments; // 0x0c
        struct {
            u8 unk0c[0x20];
            /* 0x2C */ EffParticleParam *parameter; /* the particle parameters to copy */
        } particle;
    };
    EmitterSource* source;      // 0x30
};
typedef char EmitterResourceRequestLayoutCheck[offsetof(EmitterResourceRequest, arguments) == 0x0C &&
    offsetof(EmitterResourceRequest, particle.parameter) == 0x2C &&
    offsetof(EmitterResourceRequest, source) == 0x30 ? 1 : -1];

#endif
