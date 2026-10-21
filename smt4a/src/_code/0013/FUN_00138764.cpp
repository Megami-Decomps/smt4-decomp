/* NON_MATCHING: float store is scheduled after the integer stores; literal-pool order also differs. */
#include "shard/W6_W6Match3_SlotState.h"

extern "C" {
extern W6Match3SlotState DAT_006357d8[2];

// Reset both slots to their inactive state.
void FUN_00138764(void)
{
    for (u8 slot = 0; slot < 2; ++slot) {
        DAT_006357d8[slot].value = 0.0f;
        DAT_006357d8[slot].unk04 = 0;
        DAT_006357d8[slot].unk08 = 0;
        DAT_006357d8[slot].index = 0xff;
        DAT_006357d8[slot].active = 0;
    }
}
}
