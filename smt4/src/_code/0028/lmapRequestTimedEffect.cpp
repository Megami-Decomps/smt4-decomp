/* NON_MATCHING: only the unsigned divide-by-10 of the scaled amount differs: retail's umull writes the high word to r0
 * (umull r1, r0, r1, r2), the build to r1 and then moves it (as in the Apocalypse twin FUN_002d1f40). */
#include "map/LmapViewGlobals.h"

extern "C" {

/* Clears the pending map request (amount 0) or replaces it with request `identifier` (0 = none, stored as -1) unless
 * the pending one has a higher priority; the scaled amount and four tenths of it go to the request's timers. */
void lmapRequestTimedEffect(s32 identifier, s32 amount, s32 priority)
{
    LmapView *state = g_lmapViewHolder.view;
    if (amount == 0) {
        state->requestActive = 0;
        state->priority = 0;
        return;
    }
    if (state->requestActive != 0 && state->priority > priority) {
        return;
    }
    state->requestActive = 1;
    if (identifier == 0) {
        state->requestId = -1;
    } else {
        state->requestId = identifier;
    }
    state->priority = priority;
    u16 scaledAmount = (u16)(amount * 10);
    state->unk2AC = (s16)scaledAmount;
    s16 portion = (s16)((scaledAmount * 4u) / 10u);
    state->unk2AA = portion;
    state->unk2AE = portion;
}
}
