#include "map/mapObj.h"
#include "shard/S1Mover.h"
#include "map/MapEffectReservation.h"

extern "C" {
extern MapObjectState *g_mapObj;
void mathSinCos(f32 *sine, f32 *cosine, f32 angle);
void FUN_00308c94(u32 effect, u32 duration, u8 *state);

/* Spawn the named box effect in front of active supported map objects. */
void mapSpawnActiveSignboardEffects(void)
{
    for (s32 index = 0; index < 24; ++index) {
        MapObjectSlot *slot = &g_mapObj->slots[index];
        if (slot->active == 0)
            continue;
        switch (slot->state) {
        case 6:
        case 7:
        case 9:
        case 11: {
            /* Keep the shared scalar aliases while treating their contiguous storage as a position. */
            Vec3f position = *reinterpret_cast<const Vec3f *>(&slot->unk10);
            f32 sine, cosine;
            mathSinCos(&sine, &cosine, slot->unk1c * (256.0f / 360.0f));
            position.x += sine * 60.0f;
            position.z += cosine * 60.0f;
            u32 effect = mapEffectReserveAndSpawn(0, 0, reinterpret_cast<u32>("KANBAN"), 30, 12, slot->id + 0x1000,
                0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0,
                position.x, position.y, position.z, 200.0f, 200.0f, 100.0f, slot->unk1c);
            if (slot->unk2c != 0)
                FUN_00308c94(effect, 1000, &slot->unk2c);
            break;
        }
        }
    }
}
}
