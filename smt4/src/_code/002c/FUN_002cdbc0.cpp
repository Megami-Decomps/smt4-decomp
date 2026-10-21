/* NON_MATCHING: retail unit includes an extra decoded instruction after the return, beyond the readable function. */
#include "common.h"

namespace { struct State { u8 padding[0x2f8]; u8 blocked; }; }

extern "C" {
extern s32 DAT_0049fd14;
void asdSequenceRequest(u32 sequence, u32 flags);
u32 FUN_002cdbc0(State *state)
{
    if (state->blocked == 0 && DAT_0049fd14 != -1) { asdSequenceRequest(6, 0); }
    return 1;
}
}
