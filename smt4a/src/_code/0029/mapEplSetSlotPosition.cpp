#include "shard/W4_Match3_EplSlots.h"

extern "C" {
void skelNodePoseChain(void *object, f32 *position);

void mapEplSetSlotPosition(u32 slotIndex, f32 x, f32 y, f32 z)
{
    EplSlots *slots = g_eplSlots;
    EplSlot *slot = &slots->slots[slotIndex];
    void *object = slot->list;
    if (object != NULL) {
        slot->initialization.parameters[0] = x;
        slot->initialization.parameters[1] = y;
        slot->initialization.parameters[2] = z;
        slot->initialization.parameters[3] = 0.0f;
        skelNodePoseChain(object, slot->initialization.parameters);
    }
}
}
