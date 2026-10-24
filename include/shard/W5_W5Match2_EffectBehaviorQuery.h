#ifndef SHARD_W5_W5MATCH2_EFFECTBEHAVIORQUERY_H
#define SHARD_W5_W5MATCH2_EFFECTBEHAVIORQUERY_H
#include "common.h"
#include <stddef.h>
struct EffectBehaviorArgument { u16 index; };
typedef s32 (*EffectBehaviorQuery)(const EffectBehaviorArgument *argument);
struct EffectBehavior;
typedef void (*EffectBehaviorRun)(EffectBehavior *behavior);
struct EffectBehaviorEntry {
    union {
        u8 unk00[0x10];
        EffectBehaviorRun run;
        struct {
            u8 unk00[8];
            s32 elementSize;
            s32 parameterSize;
        } storage;
    };
    EffectBehaviorQuery query;
};
typedef char EffectBehaviorEntryLayoutCheck[
    offsetof(EffectBehaviorEntry, storage.elementSize) == 8 &&
    offsetof(EffectBehaviorEntry, storage.parameterSize) == 0xC &&
    offsetof(EffectBehaviorEntry, query) == 0x10 &&
    sizeof(EffectBehaviorEntry) == 0x14 ? 1 : -1];
#endif
