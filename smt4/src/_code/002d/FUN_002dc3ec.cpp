#include "common.h"

namespace {
struct Operation { u8 padding[0x50]; s16 mode; };
struct State { u8 padding[0x12B8]; Operation operation; };
}

extern "C" {
u32 uiSpriteGetCompletionState(Operation *operation);
s32 uiSpriteGetOperationMode(Operation *operation);

u32 FUN_002dc3ec(State *state)
{
    if (uiSpriteGetCompletionState(&state->operation) != 0) {
        return 1;
    }
    return uiSpriteGetOperationMode(&state->operation) == 0;
}
}
