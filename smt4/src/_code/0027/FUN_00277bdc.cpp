/* NON_MATCHING: the four loop-invariant VFP constants receive a different saved-register permutation. */
#include "map/mapObj.h"
#include "shard/S1Mover.h"

extern "C" {
extern MapObjectState *g_mapObj;
void FUN_002ad314(f32 *sine, f32 *cosine, f32 angle);
s32 FUN_00263cb8(u32 resource, u32 kind, u32 owner, u32 appearanceResource,
    u32 first, u32 second, u8 red, u8 green, u8 blue, u8 secondaryRed, u8 secondaryGreen,
    u8 secondaryBlue, u8 channel, u8 mode, u8 flags, u32 scaleXBits,
    u32 scaleYBits, u32 scaleZBits, u32 option,
    f32 x, f32 y, f32 z, f32 rotationY, f32 rotationX, f32 rotationZ, f32 heading);
void FUN_00308c94(u32 effect, u32 duration, u8 *state);

/* Spawn the named box effect in front of active supported map objects. */
void FUN_00277bdc(void)
{
    for (s32 index = 0; index < 24; ++index) {
        MapObjectSlot *slot = &g_mapObj->slots[index];
        if (slot->active != 0 &&
            (slot->state == 6 || slot->state == 7 || slot->state == 9 || slot->state == 11)) {
            /* Keep the shared scalar aliases while treating their contiguous storage as a position. */
            Vec3f position = *reinterpret_cast<const Vec3f *>(&slot->unk10);
            f32 sine, cosine;
            FUN_002ad314(&sine, &cosine, slot->unk1c * (256.0f / 360.0f));
            position.x += sine * 60.0f;
            position.z += cosine * 60.0f;
            u32 effect = FUN_00263cb8(0, 0, reinterpret_cast<u32>("KANBAN"), 30, 12, slot->id + 0x1000,
                0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0,
                position.x, position.y, position.z, 200.0f, 200.0f, 100.0f, slot->unk1c);
            if (slot->unk2c != 0)
                FUN_00308c94(effect, 1000, &slot->unk2c);
        }
    }
}
}
