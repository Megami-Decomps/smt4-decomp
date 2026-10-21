#include "common.h"

extern "C" {

struct Owner { u8 unk0000[0x4d30]; u32 states[1]; };

s32 btlIsExtendedState(const Owner *owner, u32 index)
{
    u32 state = owner->states[index];
    return state != 0 && state != 1 && state != 2;
}

} /* extern "C" */
