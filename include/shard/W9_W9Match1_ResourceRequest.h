#ifndef SHARD_W9_W9MATCH1_RESOURCE_REQUEST_H
#define SHARD_W9_W9MATCH1_RESOURCE_REQUEST_H

#include "common.h"
#include <stddef.h>

struct ResourceRequestLabel {
    char text[21];
};
struct ResourceRequest {
    u16 kind; // 0x00
    u16 option; // 0x02
    u16 variant; // 0x04
    u16 flags; // 0x06
    f32 position[3]; // 0x08
    u32 parameter; // 0x14
    u8 active; // 0x18
    ResourceRequestLabel label; // 0x19
};
struct RegisteredResourceRequest {
    ResourceRequest request;
    u32 handle; // 0x30
    u8 unk34[8];
    u8 marked; // 0x3c
    u8 unk3d[3];
};

typedef char ResourceRequestLayoutCheck[sizeof(ResourceRequestLabel) == 21 && sizeof(ResourceRequest) == 0x30 &&
    offsetof(ResourceRequest, kind) == 0 && offsetof(ResourceRequest, option) == 2 &&
    offsetof(ResourceRequest, variant) == 4 && offsetof(ResourceRequest, flags) == 6 &&
    offsetof(ResourceRequest, position) == 8 && offsetof(ResourceRequest, parameter) == 0x14 &&
    offsetof(ResourceRequest, active) == 0x18 && offsetof(ResourceRequest, label) == 0x19 ? 1 : -1];
typedef char RegisteredResourceRequestLayoutCheck[sizeof(RegisteredResourceRequest) == 0x40 &&
    offsetof(RegisteredResourceRequest, request) == 0 && offsetof(RegisteredResourceRequest, handle) == 0x30 &&
    offsetof(RegisteredResourceRequest, marked) == 0x3c ? 1 : -1];

#endif
