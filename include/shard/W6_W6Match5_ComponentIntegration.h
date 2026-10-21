#ifndef SHARD_W6_W6MATCH5_COMPONENTINTEGRATION_H
#define SHARD_W6_W6MATCH5_COMPONENTINTEGRATION_H

#include "common.h"

struct IntegrationVector4 {
    f32 x, y, z, w;
};
struct ComponentIntegrationState {
    u8 unk000[0x100];
    IntegrationVector4 values; // 0x100
    IntegrationVector4 delta; // 0x110
};

#endif
