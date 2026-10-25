/* NON_MATCHING: compiler tail-calls the rotation setter instead of preserving lr around the call. */
#include "common.h"

namespace { struct Part { u8 padding[0x4c]; u8 rotation[1]; }; struct Owner { u8 padding[0x2c]; Part *part; }; }
namespace { struct Vec3 { f32 x, y, z; }; }

extern "C" {
/* Reads or updates the requested state. */
void FUN_0024bfb8(void *destination, f32 x, f32 y, f32 z);
/* Sets the node's rotation from degrees; the index argument is not used. */
void FUN_0028c618(Owner *owner, s32 index, Vec3 degrees)
{
    FUN_0024bfb8(owner->part->rotation, degrees.x * 0.017453292f, degrees.y * 0.017453292f, degrees.z * 0.017453292f);
}
}
