/* NON_MATCHING: The global extra-state pointer reload and scaled-value calculation use different scheduling/registers. */
#include "map/LmapViewGlobals.h"
extern "C" {

void FUN_002d1f40(s32 id, u32 amount, s32 priority)
{
    LmapViewA* state = g_lmapViewHolder.view;
    if (amount == 0) {
        state->requestActive = 0;
        state->priority = 0;
        return;
    }
    if (state->requestActive != 0 && state->priority > priority) {
        return;
    }
    state->requestActive = 1;
    state->requestId = id == 0 ? -1 : id;
    state->priority = priority;
    u16 scaledAmount = (u16)(amount * 10);
    state->unk2B4 = (s16)scaledAmount;
    s16 portion = (s16)((scaledAmount * 4u) / 10u);
    state->unk2B2 = portion;
    state->unk2B6 = portion;
}
}
