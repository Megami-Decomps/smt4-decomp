/* NON_MATCHING: canonical slot layout recovers the nested slot base; only global/stride scratch registers remain swapped. */
#include "shard/W4_Match3_EplSlots.h"

extern "C" {
void FUN_001b4eb8(void *object, f32 *position);

void FUN_00294774(u32 slotIndex, f32 x, f32 y, f32 z)
{
    EplSlot *slot = &g_eplSlots->slots[slotIndex];
    void *object = slot->list;
    if (object != NULL) {
        slot->initialization.parameters[0] = x;
        slot->initialization.parameters[1] = y;
        slot->initialization.parameters[2] = z;
        slot->initialization.parameters[3] = 0.0f;
        FUN_001b4eb8(object, slot->initialization.parameters);
    }
}
}
