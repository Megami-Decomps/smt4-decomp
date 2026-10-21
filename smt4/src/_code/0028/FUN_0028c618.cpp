/* NON_MATCHING: compiler tail-calls the rotation setter instead of preserving lr around the call. */
#include "common.h"

namespace { struct Part { u8 padding[0x4c]; u8 rotation[1]; }; struct Owner { u8 padding[0x2c]; Part *part; }; }

extern "C" {
/* Reads or updates the requested state. */
void FUN_0024bfb8(void *destination, f32 x, f32 y, f32 z);
void FUN_0028c618(Owner *owner, f32 x, f32 y, f32 z)
{
    FUN_0024bfb8(owner->part->rotation, x * 0.017453292f, y * 0.017453292f, z * 0.017453292f);
}
}
