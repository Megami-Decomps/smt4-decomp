/* NON_MATCHING: retail emits 'ldr r0, [pc, #16]'; compiler emits 'ldr r0, [pc, #20]' at the first differing instruction. */
#include "common.h"

extern "C" {
s32 gameFlagIsSet(u32); extern struct { u8 pad[0x2C]; s32 mode; } g_battleViewState;
s32 FUN_002d0014() { return gameFlagIsSet(0x4D0) != 0 && g_battleViewState.mode == 9; }
}
