/* NON_MATCHING: the four loop-invariant VFP constants receive a different saved-register permutation. */
#include "map/mapObj.h"
#include "shard/S1Mover.h"
#include "util/SaveSlotInfoSet.h"

extern "C" {
extern MapObjectState *g_mapObj;
void FUN_0018a924(f32 *sine, f32 *cosine, f32 angle);
s32 sceneRegisterBoxEffect(u32 id, u32 value, const char *name, u32 resource,
    u32 effect, s32 variant, u8 option0, u8 option1, u8 option2,
    u8 option3, u8 option4, u8 option5, u8 flag0, u8 flag1, u8 option,
    u32 data0, u32 data1, u32 data2, u32 priority,
    f32 x, f32 y, f32 z, f32 extent0, f32 extent1, f32 extent2, f32 yaw);

/* Spawn the named box effect in front of active supported map objects. */
void FUN_00313440(void)
{
    for (s32 index = 0; index < 24; ++index) {
        MapObjectSlot *slot = &g_mapObj->slots[index];
        if (slot->active != 0 &&
            (slot->state == 6 || slot->state == 7 || slot->state == 9 || slot->state == 11)) {
            /* Keep the shared scalar aliases while treating their contiguous storage as a position. */
            Vec3f position = *reinterpret_cast<const Vec3f *>(&slot->unk10);
            f32 sine, cosine;
            FUN_0018a924(&sine, &cosine, slot->unk1c * (256.0f / 360.0f));
            position.x += sine * 60.0f;
            position.z += cosine * 60.0f;
            u32 effect = sceneRegisterBoxEffect(0, 0, "KANBAN", 30, 12, slot->id + 0x1000,
                0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0,
                position.x, position.y, position.z, 200.0f, 200.0f, 100.0f, slot->unk1c);
            if (slot->unk2c != 0)
                saveSlotInfoSet(effect, 1000, reinterpret_cast<const char *>(&slot->unk2c));
        }
    }
}
}
