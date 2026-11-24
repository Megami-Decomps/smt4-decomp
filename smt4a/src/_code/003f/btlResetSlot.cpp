#include "battle/BtlMainAccess.h"

extern "C" {

/* Resets the animation slot `index` and records its target. */
void btlResetSlot(BtlMainStateExtA *state, s32 index, u32 target)
{
    state->slotColorFade.mode[index] = 0;
    state->slotColorFade.timer[index] = 0;
    state->slotColorFade.parameters[index] = target;
    state->slotColorFade.previousColor[index] = state->slotColorFade.baseColor[index];
    state->slotColorFade.color[index] = 0;
}

} /* extern "C" */
