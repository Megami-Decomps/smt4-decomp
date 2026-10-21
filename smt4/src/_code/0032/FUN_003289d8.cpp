/* NON_MATCHING: retail argument packing or conditional store scheduling differs. */
#include "common.h"
struct ParameterState { u8 unk00[8]; u32 value; u8 unk0c[12]; u32 previous; };
struct ParameterOwner { u32 unk00; ParameterState *state; };
extern "C" void FUN_002a9834(u32 *value, ParameterOwner *owner, s32 mode, s32 reserved);
/* Saves the parameter and passes its previous value to the helper. */
extern "C" void FUN_003289d8(ParameterOwner *owner, s32 mode)
{
    owner->state->previous = owner->state->value;
    u32 value = owner->state->value;
    FUN_002a9834(&value, owner, mode, 0);
}
