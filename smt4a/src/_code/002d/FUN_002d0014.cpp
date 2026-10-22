/* NON_MATCHING: retail emits 'ldr r0, [pc, #16]'; compiler emits 'ldr r0, [pc, #20]' at the first differing instruction. */
#include "battle/btlView.h"

extern "C" {
s32 gameFlagIsSet(u32); extern BattleViewState g_battleViewState;
s32 FUN_002d0014() { return gameFlagIsSet(0x4D0) != 0 && g_battleViewState.unk2c == 9; }
}
