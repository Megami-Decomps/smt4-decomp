/* Structs shared by the helper functions in code shard 0047. */
#ifndef SHARD_SHARD0047_H
#define SHARD_SHARD0047_H

#include "common.h"

#include "shard/Shard0046.h"

typedef struct ByteAtD {
    /* 0x00 */ u8 unk00[0xD];
    /* 0x0D */ u8 unk0D;
} ByteAtD;

struct ScriptRunState;
typedef struct ScriptHolder {
    union {
        /* 0x00 */ u8 unk00[8];
        struct {
            /* 0x00 */ s32 state;
            /* 0x04 */ u32 entry;
        } phase;
    };
    /* 0x08 */ u8 unk08;
    /* 0x09 */ u8 unk09[3];
    /* 0x0C */ void *buf0C;
    /* 0x10 */ void *buf10;
    union {
        /* 0x14 */ u32 proc14;
        /* 0x14 */ ScriptRunState *process;
    };
} ScriptHolder;
typedef char ScriptHolderPhaseOffsetCheck[
    __INTADDR__(&((ScriptHolder *)0)->phase.state) == 0 &&
    __INTADDR__(&((ScriptHolder *)0)->phase.entry) == 4 &&
    __INTADDR__(&((ScriptHolder *)0)->process) == 0x14 &&
    sizeof(ScriptHolder) == 0x18 ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif

u16 FUN_004186e0(void);

#ifdef __cplusplus
}
#endif

#endif
