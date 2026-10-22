/* NON_MATCHING: The global extra-state pointer reload and scaled-value calculation use different scheduling/registers. */
#include "map/lmapMain.h"
extern "C" {
extern LmapExtraGlobalsA DAT_005806a0;

void FUN_002d1f40(s32 id, u32 amount, s32 priority)
{
    LmapExtraA* state = DAT_005806a0.extra;
    if (amount == 0) {
        state->unk2A8 = 0;
        state->priority = 0;
        return;
    }
    if (state->unk2A8 != 0 && state->priority > priority) {
        return;
    }
    state->unk2A8 = 1;
    state->unk2B0 = id == 0 ? -1 : id;
    state->priority = priority;
    u16 scaledAmount = (u16)(amount * 10);
    state->unk2B4 = (s16)scaledAmount;
    s16 portion = (s16)((scaledAmount * 4u) / 10u);
    state->unk2B2 = portion;
    state->unk2B6 = portion;
}
}
