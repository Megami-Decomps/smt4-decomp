#ifndef SHARD_W6_W6MATCH5_ARMYSUMMON_H
#define SHARD_W6_W6MATCH5_ARMYSUMMON_H

#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include <stddef.h>

struct ArmySummonState {
    u8 unk0000[0x4394]; // 0x0000
    void *commands; // 0x4394
    AsdMdlObject *model; // 0x4398
};
typedef char ArmySummonCommandsOffsetCheck[offsetof(ArmySummonState, commands) == 0x4394 ? 1 : -1];
typedef char ArmySummonModelOffsetCheck[offsetof(ArmySummonState, model) == 0x4398 ? 1 : -1];
typedef char ArmySummonStateSizeCheck[sizeof(ArmySummonState) == 0x439C ? 1 : -1];

#endif
