#ifndef SHARD_W8MATCH1_POSITION_REQUESTS_H
#define SHARD_W8MATCH1_POSITION_REQUESTS_H
#include "common.h"
struct PositionRequest {
    u8 active; // 0x00
    u8 unk01[3]; // 0x01
    u32 id; // 0x04
    u32 timer; // 0x08
    u32 state; // 0x0C
    s16 kind; // 0x10
    u16 unk12; // 0x12
    f32 position[3]; // 0x14
};
struct PositionRequestPool {
    u32 unk00; // 0x00
    u32 count; // 0x04
    u32 unk08; // 0x08
    PositionRequest entries[32]; // 0x0C
};
#endif
