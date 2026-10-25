#ifndef GFX_QUATERNIONWORKSPACE_H
#define GFX_QUATERNIONWORKSPACE_H

#include "common.h"
#include "shard/S1Mover.h"
#include "AsdSDK/Source/Gfx/Effect/effMenuMatrix.h"
#include <stddef.h>
#include "shard/W5_W5Match2_ShiftRandom.h"

struct RotationQuaternion {
    f32 x, y, z, w;
};
struct QuaternionWorkspace {
    u8 unk000[0x100];
    union {
        RotationQuaternion rotation;
        Vec3f direction;
        EffMenuPosition position;
    };
};
typedef char QuaternionWorkspaceLayoutCheck[sizeof(RotationQuaternion) == 0x10 &&
    offsetof(QuaternionWorkspace, rotation) == 0x100 ? 1 : -1];
typedef char QuaternionWorkspaceDirectionOffsetCheck[
    offsetof(QuaternionWorkspace, direction) == 0x100 &&
    offsetof(QuaternionWorkspace, position) == 0x100 &&
    sizeof(QuaternionWorkspace) == 0x110 ? 1 : -1];

struct QuaternionMatrixWorkspaceView {
    /* 0x000 */ QuaternionWorkspace workspace;
    /* 0x110 */ u8 unk110[0x30];
    /* 0x140 */ f32 matrix[4][4];
};
typedef char QuaternionMatrixWorkspaceLayoutCheck[
    offsetof(QuaternionMatrixWorkspaceView, matrix) == 0x140 &&
    sizeof(QuaternionMatrixWorkspaceView) == 0x180 ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif

u32 randomAdvanceShiftRegister(ShiftRandomState *state);

#ifdef __cplusplus
}
#endif

#endif
