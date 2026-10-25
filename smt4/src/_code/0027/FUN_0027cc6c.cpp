/* NON_MATCHING: global and loop-counter scratch registers are permuted; all instructions now agree. */
#include "map/MapStateSlots.h"

extern "C" MapStateSlots *g_mapStateSlots;

static __inline void resetSlot(MapStateSlot *slot, bool clearTimer)
{
    slot->active = 0;
    slot->state = 0;
    slot->motion.flags = 0;
    slot->motion.position[0] = 0.0f;
    slot->motion.position[1] = 0.0f;
    slot->motion.position[2] = 0.0f;
    slot->motion.heading = 0.0f;
    slot->motion.elapsed = 0;
    slot->motion.mode = 0;
    if (clearTimer)
        slot->motion.timer = 0;
    slot->motion.modelIndex = 0;
    slot->motion.speed = 0;
    slot->motion.ready = 0;
    slot->motion.model = NULL;
    slot->motion.pending = 0;
    slot->motion.sourceIndex = 0;
    slot->motion.resourcePending = 0;
    slot->motion.resourceId = -1;
}

// Clear the map's regular slots, model references, and three auxiliary slots.
extern "C" void FUN_0027cc6c(void)
{
    struct ExtendedSlotsView { MapStateSlots base; MapStateSlot auxiliary[3]; };
    s32 index;
    g_mapStateSlots->state = 0;
    g_mapStateSlots->unk04 = 0;
    g_mapStateSlots->unk06 = 0;
    g_mapStateSlots->unk08 = 0;
    g_mapStateSlots->unk0A = 0;
    g_mapStateSlots->allocation.count = 0;
    for (index = 0; index < 32; ++index)
        resetSlot(&g_mapStateSlots->slots[index], true);
    MapStateSlots *slots = g_mapStateSlots;
    for (index = 0; index < 8; ++index) {
        slots->references.models[index].unk00 = 0;
        slots->references.models[index].model = NULL;
    }
    // The auxiliary slots lie beyond the shared MapStateSlots extent.
    for (index = 0; index < 3; ++index)
        resetSlot(&reinterpret_cast<ExtendedSlotsView *>(g_mapStateSlots)->auxiliary[index], false);
}
