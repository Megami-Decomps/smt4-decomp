#ifndef GFX_QUATERNIONWORKSPACE_H
#define GFX_QUATERNIONWORKSPACE_H

#include "common.h"
#include "shard/S1Mover.h"
#include <stddef.h>

struct RotationQuaternion {
    f32 x, y, z, w;
};
struct QuaternionWorkspace {
    u8 unk000[0x100];
    union {
        RotationQuaternion rotation;
        Vec3f direction;
    };
};
typedef char QuaternionWorkspaceLayoutCheck[sizeof(RotationQuaternion) == 0x10 &&
    offsetof(QuaternionWorkspace, rotation) == 0x100 ? 1 : -1];
typedef char QuaternionWorkspaceDirectionOffsetCheck[
    offsetof(QuaternionWorkspace, direction) == 0x100 &&
    sizeof(QuaternionWorkspace) == 0x110 ? 1 : -1];

#endif
