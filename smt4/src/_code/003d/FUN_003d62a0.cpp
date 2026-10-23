/* NON_MATCHING: compiler fuses lerps into VMLA and schedules scalar loads instead of retail's vector-wide operations. */
#include "gfx/CameraPoseBlend.h"

extern "C" f32 FUN_00227280(u32, u32, u32);

// Blend the current camera pose from its saved endpoints using the transition curve.
extern "C" void FUN_003d62a0(CameraPoseBlendView *camera, u32 elapsed)
{
    f32 blend = FUN_00227280(0, camera->duration, elapsed);
    camera->current.scalar = (camera->end.scalar - camera->start.scalar) * blend + camera->start.scalar;
    camera->current.target.x = (camera->end.target.x - camera->start.target.x) * blend + camera->start.target.x;
    camera->current.target.y = (camera->end.target.y - camera->start.target.y) * blend + camera->start.target.y;
    camera->current.target.z = (camera->end.target.z - camera->start.target.z) * blend + camera->start.target.z;
    camera->current.position.x = (camera->end.position.x - camera->start.position.x) * blend + camera->start.position.x;
    camera->current.position.y = (camera->end.position.y - camera->start.position.y) * blend + camera->start.position.y;
    camera->current.position.z = (camera->end.position.z - camera->start.position.z) * blend + camera->start.position.z;
    camera->current.up.x = (camera->end.up.x - camera->start.up.x) * blend + camera->start.up.x;
    camera->current.up.y = (camera->end.up.y - camera->start.up.y) * blend + camera->start.up.y;
    camera->current.up.z = (camera->end.up.z - camera->start.up.z) * blend + camera->start.up.z;
}
