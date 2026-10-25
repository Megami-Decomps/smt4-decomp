#include "gfx/QuaternionWorkspace.h"

extern "C" QuaternionMatrixWorkspaceView DAT_006471dc;

/* Convert the workspace quaternion into its homogeneous rotation matrix. */
extern "C" void FUN_001bc460(void)
{
    const RotationQuaternion *q = &DAT_006471dc.workspace.rotation;
    f32 (*m)[4] = DAT_006471dc.matrix;
    f32 xx = q->x * q->x;
    f32 yy = q->y * q->y;
    f32 zz = q->z * q->z;
    m[0][0] = 1.0f - (yy + zz) * 2.0f;
    m[0][1] = (q->x * q->y - q->w * q->z) * 2.0f;
    m[0][2] = (q->w * q->y + q->x * q->z) * 2.0f;
    m[0][3] = 0.0f;
    m[1][0] = (q->x * q->y + q->w * q->z) * 2.0f;
    m[1][1] = 1.0f - (xx + zz) * 2.0f;
    m[1][2] = (q->y * q->z - q->w * q->x) * 2.0f;
    m[1][3] = 0.0f;
    m[2][0] = (q->x * q->z - q->w * q->y) * 2.0f;
    m[2][1] = (q->y * q->z + q->w * q->x) * 2.0f;
    m[2][2] = 1.0f - (xx + yy) * 2.0f;
    m[2][3] = 0.0f;
    m[3][0] = 0.0f;
    m[3][1] = 0.0f;
    m[3][2] = 0.0f;
    m[3][3] = 1.0f;
}
