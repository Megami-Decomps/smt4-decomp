/* NON_MATCHING: generic callbacks retain stage pointers and hoist register constants instead of retail's constructor-return chaining. */
#include "shard/W6_W6Match7_CombinerState.h"

extern "C" {
void* __aeabi_vec_ctor_nocookie_nodtor(u8* begin, void* (*construct)(void*), u32 stride, u32 count);
void* gfxCombinerStageConstruct(void* stage);
void* FUN_00197eac(void* operand);
void* FUN_00197ea8(void* source);
}

namespace {
inline void initializeCombinerChannel(CombinerChannel* channel, u8 stageIndex)
{
    channel->function = 0;
    __aeabi_vec_ctor_nocookie_nodtor(channel->operands, FUN_00197eac, sizeof(u8), 3);
    __aeabi_vec_ctor_nocookie_nodtor(channel->sources, FUN_00197ea8, sizeof(u8), 3);
    channel->scale = 0;
    channel->bufferInput = 0;
    channel->operands[0] = channel->operands[1] = channel->operands[2] = 0;
    const u8 source = stageIndex == 0 ? 0xe : 0xf;
    channel->sources[0] = channel->sources[1] = channel->sources[2] = source;
}
}

// Start with a constant-black stage followed by five pass-through stages.
extern "C" void* gfxCombinerStateInitialize(void* storage)
{
    CombinerState* state = static_cast<CombinerState*>(__aeabi_vec_ctor_nocookie_nodtor(
        static_cast<u8*>(storage), gfxCombinerStageConstruct, sizeof(CombinerStage), 6));
    state->bufferColor.r = 0;
    state->bufferColor.g = 0;
    state->bufferColor.b = 0;
    state->bufferColor.a = 0;
    for (u32 index = 0; index < 6; ++index) {
        CombinerStage stage;
        initializeCombinerChannel(&stage.color, static_cast<u8>(index));
        initializeCombinerChannel(&stage.alpha, static_cast<u8>(index));
        stage.constantColor.r = 0;
        stage.constantColor.g = 0;
        stage.constantColor.b = 0;
        stage.constantColor.a = 0;
        switch (index) {
        case 0: stage.registerBase = 0xc0; break;
        case 1: stage.registerBase = 0xc8; break;
        case 2: stage.registerBase = 0xd0; break;
        case 3: stage.registerBase = 0xd8; break;
        case 4: stage.registerBase = 0xf0; break;
        case 5: stage.registerBase = 0xf8; break;
        }
        state->stages[index] = stage;
    }
    return state;
}
