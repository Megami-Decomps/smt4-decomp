/* NON_MATCHING: compiler hoists combiner byte loads and balances OR chains, increasing saved-register usage. */
#include "shard/W6_W6Match7_CombinerState.h"

// Emit six texture-combiner stages followed by buffer routing and buffer color.
extern "C" u32 *FUN_0015fcec(const CombinerState *state, u32 *commands)
{
    for (u32 index = 0; index < 6; ++index) {
        const CombinerStage *stage = &state->stages[index];
        *commands++ = u32(stage->color.sources[0]) | (u32(stage->color.sources[1]) << 4) |
            (u32(stage->color.sources[2]) << 8) | (u32(stage->alpha.sources[0]) << 16) |
            (u32(stage->alpha.sources[1]) << 20) | (u32(stage->alpha.sources[2]) << 24);
        *commands++ = stage->registerBase | 0x804f0000;
        *commands++ = u32(stage->color.operands[0]) | (u32(stage->color.operands[1]) << 4) |
            (u32(stage->color.operands[2]) << 8) | (u32(stage->alpha.operands[0]) << 12) |
            (u32(stage->alpha.operands[1]) << 16) | (u32(stage->alpha.operands[2]) << 20);
        *commands++ = u32(stage->color.function) | (u32(stage->alpha.function) << 16);
        RgbaWord color;
        color.rgba = stage->constantColor;
        *commands++ = (color.word & 0xffffff) | (u32(stage->constantColor.a) << 24);
        *commands++ = u32(stage->color.scale) | (u32(stage->alpha.scale) << 16);
    }
    commands[0] = ((u32(state->stages[1].color.bufferInput) << 8) |
                  (u32(state->stages[1].alpha.bufferInput) << 12)) |
        ((u32(state->stages[2].color.bufferInput) << 9) |
         (u32(state->stages[2].alpha.bufferInput) << 13)) |
        ((u32(state->stages[3].color.bufferInput) << 10) |
         (u32(state->stages[3].alpha.bufferInput) << 14)) |
        ((u32(state->stages[4].color.bufferInput) << 11) |
         (u32(state->stages[4].alpha.bufferInput) << 15));
    commands[1] = 0x200e0;
    RgbaWord color;
    color.rgba = state->bufferColor;
    commands[2] = (color.word & 0xffffff) | (u32(state->bufferColor.a) << 24);
    commands[3] = 0xf00fd;
    return commands + 4;
}
