/* NON_MATCHING: alternate optimization may recover shared effect-0x1E block placement and destructive VFP-address register allocation (91/91 rows). */
#include "common.h"

namespace {
struct MapStateEffectSlot {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ s32 state;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ f32 transform[4];
    /* 0x1C */ u8 unk1C[6];
    /* 0x22 */ s16 tag;
    /* 0x24 */ s16 category;
    /* 0x26 */ u8 unk26[2];
    /* 0x28 */ u32 flagIndex;
    /* 0x2C */ u8 unk2C[0x20];
};
struct MapStateEffectTable {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s16 areaId;
    /* 0x06 */ u8 unk06[0x52];
    /* 0x58 */ MapStateEffectSlot slots[32];
};
}

extern "C" {
extern MapStateEffectTable* g_mapStateSlots;
u8 mapSavedFlagIsSet(s32 index);
s32 mapIfSpawnEffect(u32 layer, s32 effect, u32 owner, s32 tag,
                 f32 first, f32 second, f32 third, f32 fourth);
}


extern "C" {
/* Spawn active map-slot effects according to area variant, category and saved flags. */
void mapSpawnActiveSlotEffects()
{
    for (s32 i = 0; i < 32; ++i) {
        const MapStateEffectSlot* slot = &g_mapStateSlots->slots[i];
        if (!slot->active) {
            continue;
        }
        const s16 category = slot->category;
        if ((category == 3 || category == 4) || (category == 5 || category == 7)) {
            if (!mapSavedFlagIsSet(static_cast<s16>(slot->flagIndex))) {
                if (g_mapStateSlots->areaId < 100) {
                    if (slot->category == 7) {
                        mapIfSpawnEffect(0, 0x1F, ~0u, slot->tag,
                            slot->transform[0], slot->transform[1], slot->transform[2], slot->transform[3]);
                    } else {
                        mapIfSpawnEffect(0, 0x1E, ~0u, slot->tag,
                            slot->transform[0], slot->transform[1], slot->transform[2], slot->transform[3]);
                    }
                } else {
                    mapIfSpawnEffect(0, 0x25, ~0u, slot->tag,
                        slot->transform[0], slot->transform[1], slot->transform[2], slot->transform[3]);
                }
            }
        } else if (slot->state == 1) {
            if (g_mapStateSlots->areaId < 100) {
                if (category != 1) {
                    mapIfSpawnEffect(0, 0x1D, ~0u, slot->tag,
                        slot->transform[0], slot->transform[1], slot->transform[2], slot->transform[3]);
                } else {
                    mapIfSpawnEffect(0, 0x1E, ~0u, slot->tag,
                        slot->transform[0], slot->transform[1], slot->transform[2], slot->transform[3]);
                }
            } else {
                mapIfSpawnEffect(0, 0x26, ~0u, slot->tag,
                    slot->transform[0], slot->transform[1], slot->transform[2], slot->transform[3]);
            }
        }
    }
}
} // extern "C"
