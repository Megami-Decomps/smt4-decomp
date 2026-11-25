/* NON_MATCHING: the spawn calls load the transform address before the tag and use a scratch register for it;
 * retail loads the tag first and advances the slot's own register to the transform. */
#include "map/MapStateSlots.h"

extern "C" {
extern MapStateSlots *g_mapStateSlots;
u8 mapSavedFlagIsSet(s32 index);
s32 mapIfSpawnEffect(u32 layer, s32 effect, u32 owner, s32 tag,
                 f32 first, f32 second, f32 third, f32 fourth);
}


/* Spawns an effect at the slot's tag and transform. */
static __inline void spawnSlotEffect(s32 effect, const MapStateSlot *slot)
{
    mapIfSpawnEffect(0, effect, ~0u, (s16)slot->motion.timer,
        slot->motion.point.x, slot->motion.point.y, slot->motion.point.z, slot->motion.heading);
}

extern "C" {
/* Spawn active map-slot effects according to area variant, category and saved flags. */
void mapSpawnActiveSlotEffects()
{
    for (s32 i = 0; i < 32; ++i) {
        const MapStateSlot *slot = &g_mapStateSlots->slots[i];
        if (!slot->active) {
            continue;
        }
        const s16 category = (s16)slot->motion.modelIndex;
        if ((category == 3 || category == 4) || (category == 5 || category == 7)) {
            if (!mapSavedFlagIsSet((s16)slot->motion.speed)) {
                if ((s16)g_mapStateSlots->unk04 < 100) {
                    if (slot->motion.modelIndex == 7) {
                        spawnSlotEffect(0x1F, slot);
                    } else {
                        spawnSlotEffect(0x1E, slot);
                    }
                } else {
                    spawnSlotEffect(0x25, slot);
                }
            }
            continue;
        }
        if (slot->state == 1) {
            if ((s16)g_mapStateSlots->unk04 < 100) {
                if (category != 1) {
                    spawnSlotEffect(0x1D, slot);
                } else {
                    spawnSlotEffect(0x1E, slot);
                }
            } else {
                spawnSlotEffect(0x26, slot);
            }
        }
    }
}
} /* extern "C" */
