#ifndef GFX_QUATERNIONWORKSPACE_H
#define GFX_QUATERNIONWORKSPACE_H

#include "common.h"
#include <stddef.h>

struct RotationQuaternion {
    f32 x, y, z, w;
};
struct QuaternionWorkspace {
    u8 unk000[0x100];
    RotationQuaternion rotation;
};
typedef char QuaternionWorkspaceLayoutCheck[sizeof(RotationQuaternion) == 0x10 &&
    offsetof(QuaternionWorkspace, rotation) == 0x100 ? 1 : -1];

#endif
