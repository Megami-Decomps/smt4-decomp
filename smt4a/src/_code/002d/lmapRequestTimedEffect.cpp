/* NON_MATCHING: only the unsigned divide-by-10 of the scaled amount differs: retail's umull writes the high word to r0
 * (umull r1, r0, r1, r2), the build to r1 and then moves it. */
#include "map/LmapViewGlobals.h"
extern "C" {

/* Clears the pending map request (amount 0) or replaces it with request `id` (0 = none, stored as -1) unless the pending
 * one has a higher priority; the scaled amount and four tenths of it go to the request's timers. */
void lmapRequestTimedEffect(s32 id, u32 amount, s32 priority)
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
    if (id == 0) {
        state->requestId = -1;
    } else {
        state->requestId = id;
    }
    state->priority = priority;
    u16 scaledAmount = (u16)(amount * 10);
    state->unk2B4 = (s16)scaledAmount;
    s16 portion = (s16)((scaledAmount * 4u) / 10u);
    state->unk2B2 = portion;
    state->unk2B6 = portion;
}
}
