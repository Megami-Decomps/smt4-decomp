#ifndef SHARD_W8MATCH1_SCRIPT_PHASE_H
#define SHARD_W8MATCH1_SCRIPT_PHASE_H
#include "common.h"
struct ScriptPhaseWork {
    u8 unk000[0xD04]; // 0x000
    u32 scriptProcess; // 0xD04
    u8 unkD08[0x24]; // 0xD08
    s32 state; // 0xD2C
    u8 unkD30[8]; // 0xD30
    s32 scriptState; // 0xD38
    u8 unkD3C[0x1c]; // 0xD3C
    u32 flags; // 0xD58
};
#endif
