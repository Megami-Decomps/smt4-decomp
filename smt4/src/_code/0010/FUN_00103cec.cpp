/* NON_MATCHING: float store is scheduled after the integer stores; literal-pool order also differs. */
#include "shard/W6_W6Match3_SlotState.h"

extern "C" {
extern W6Match3SlotState DAT_004d9758[2];

// Reset both slots to their inactive state.
void FUN_00103cec(void)
{
    for (u8 slot = 0; slot < 2; ++slot) {
        DAT_004d9758[slot].value = 0.0f;
        DAT_004d9758[slot].unk04 = 0;
        DAT_004d9758[slot].unk08 = 0;
        DAT_004d9758[slot].index = 0xff;
        DAT_004d9758[slot].active = 0;
    }
}
}
