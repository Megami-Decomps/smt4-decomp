/* NON_MATCHING: only the result polarity differs (retail: cmp; movne r0,#0; bne end; mov r0,#1; built moveq r0,#1; beq end; mov r0,#0). */
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
    if (uiSpriteGetCompletionState(&state->operation) != 0 || uiSpriteGetOperationMode(&state->operation) != 0) {
        return 0;
    }
    return 1;
}
}
