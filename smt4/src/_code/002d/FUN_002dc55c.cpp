/* NON_MATCHING: compiler schedules address formation, prologue and conditional return differently from retail. */
#include "common.h"
namespace { struct Operation { u8 padding[0x50]; s16 mode; u8 reserved[2]; u8 active; }; struct State { u8 padding[0x1c4]; Operation operation; }; }
extern "C" {
u32 recordGetSignedFlags(Operation *operation);
u32 FUN_002dc55c(State *state)
{
    if (state->operation.mode == 2 && state->operation.active != 0) { return recordGetSignedFlags(&state->operation); }
    return 1;
}
}
