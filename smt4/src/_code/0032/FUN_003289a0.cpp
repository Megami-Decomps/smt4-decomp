/* NON_MATCHING: retail argument and pointer lifetime scheduling differs. */
#include "common.h"

struct ParameterState { u8 unk00[8]; u32 value; u8 unk0c[12]; u32 previous; };
struct ParameterOwner { u32 unk00; ParameterState *state; };
extern "C" void FUN_002a9834(u32 *output, ParameterOwner *owner, u32 value, s32 mode);
/* Saves the supplied parameter and dispatches it with the current value. */
extern "C" void FUN_003289a0(ParameterOwner *owner, u32 value, s32 mode)
{
    owner->state->previous = owner->state->value;
    u32 current = owner->state->value;
    FUN_002a9834(&current, owner, value, mode);
}
