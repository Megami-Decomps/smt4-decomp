/* NON_MATCHING: only the float store's schedule differs (retail stores value first, the build last). */
#include "shard/W6_W6Match3_SlotState.h"

extern "C" {
extern W6Match3SlotState g_screenFadeSlots[2];

// Reset both slots to their inactive state.
void screenFadeSlotsReset(void)
{
    W6Match3SlotState *slots = g_screenFadeSlots;
    for (u8 slot = 0; slot < 2; ++slot) {
        slots[slot].value = 0.0f;
        slots[slot].unk04 = 0;
        slots[slot].unk08 = 0;
        slots[slot].index = 0xff;
        slots[slot].active = 0;
    }
}
}
