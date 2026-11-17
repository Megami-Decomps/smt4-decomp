/* NON_MATCHING: trigonometric zero initialization uses a saved GPR rather than retail VFP zero, changing live-register allocation. */
/* Registers the active YHVH actor's forward-offset collision box. */
#include "map/MapGimicGlobal.h"

extern "C" {
void mathSinCos(f32 *sine, f32 *cosine, f32 phase);
s32 sceneRegisterBoxEffect(u32 id, u32 value, const char *name, u32 resource,
    u32 effect, s32 variant, u32 option0, u32 option1, u32 option2,
    u32 option3, u32 option4, u32 option5, u32 flag0, s32 flag1, u32 option,
    u32 data0, u32 data1, s32 data2, u32 priority,
    f32 x, f32 y, f32 z, f32 extent0, f32 extent1, f32 extent2, f32 yaw);

void FUN_003cb744(void)
{
    f32 phase[2] = {0.0f, 0.0f};
    MapGimicStageActorA *actor = &g_mapGimic->stageActor;
    if (actor->active) {
        f32 x = actor->position.x;
        f32 y = actor->position.y;
        f32 z = actor->position.z;
        mathSinCos(&phase[0], &phase[1], actor->heading * (256.0f / 360.0f));
        sceneRegisterBoxEffect(520, 0, "YHVH", 87, 12, -1,
            0, 0, 0, 0, 0, 0, 0, -1, 1, 1, 1, -1, 0,
            x + phase[0] * 100.0f, y, z + phase[1] * 100.0f,
            300.0f, 200.0f, 120.0f, actor->heading);
    }
}
}
