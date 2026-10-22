/* NON_MATCHING: the two floating-point aggregate store addresses use r1 instead of retail's ip. */
#include "common.h"

struct DrawIntegerTriple { s32 x, y, z; };
struct DrawFloatTriple { f32 x, y, z; };
struct DrawParameterState {
    /* 0x00 */ u8 unk00[0x58];
    /* 0x58 */ DrawIntegerTriple options;
    /* 0x64 */ DrawIntegerTriple position;
    /* 0x70 */ DrawFloatTriple values;
};

extern "C" void FUN_00401198(DrawParameterState *state);

/* Store the draw parameters before rebuilding the render state. */
extern "C" void drawStoreAndApplyParameters(DrawParameterState *state, DrawIntegerTriple options,
                               DrawFloatTriple values, DrawIntegerTriple position)
{
    state->options = options;
    state->values = values;
    state->position = position;
    FUN_00401198(state);
}
