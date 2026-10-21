#ifndef SHARD_W5_W5MATCH2_EFFECTBEHAVIORQUERY_H
#define SHARD_W5_W5MATCH2_EFFECTBEHAVIORQUERY_H
#include "common.h"
struct EffectBehaviorArgument { u16 index; };
typedef s32 (*EffectBehaviorQuery)(const EffectBehaviorArgument *argument);
struct EffectBehaviorEntry { u8 unk00[0x10]; EffectBehaviorQuery query; };
#endif
