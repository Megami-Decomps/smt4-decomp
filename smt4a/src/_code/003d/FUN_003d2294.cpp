/* NON_MATCHING: first homogeneous W=1 multiplication folds and reassociates; VFP coordinate lifetimes and final serial stores differ, with the retail matrix stack size preserved. */
#include "shard/W5_W5Match2_PlainData.h"
#include "shard/S1Mover.h"

static __inline f32 matrixTransformCoordinate(const f32 *row, f32 x, f32 y, f32 z, f32 w)
{
    return row[0] * x + row[1] * y + row[2] * z + row[3] * w;
}

extern "C" {
const Matrix44 *_ZN2nw4math5MTX448IdentityEv(void);
void mtx44Copy(Matrix44 *destination, const Matrix44 *source);
void FUN_001a1c28(Matrix44 *matrix, f32 x, f32 y, f32 z);
void FUN_0019a0fc(Matrix44 *result, const Matrix44 *left, const Matrix44 *right);

void FUN_003d2294(Vec3f *position, s32 xAngle, s32 yAngle, s32 zAngle)
{
    f32 x = position->x;
    f32 y = position->y;
    f32 z = position->z;
    f32 w = 1.0f;
    Matrix44 matrix;
    mtx44Copy(&matrix, _ZN2nw4math5MTX448IdentityEv());
    Matrix44 xRotation;
    FUN_001a1c28(&xRotation, (f32)xAngle * (256.0f / 360.0f), 0.0f, 0.0f);
    FUN_0019a0fc(&matrix, &matrix, &xRotation);
    f32 afterXx = matrixTransformCoordinate(&matrix.values[0], x, y, z, w);
    f32 afterXy = matrixTransformCoordinate(&matrix.values[4], x, y, z, w);
    f32 afterXz = matrixTransformCoordinate(&matrix.values[8], x, y, z, w);
    f32 afterXw = matrixTransformCoordinate(&matrix.values[12], x, y, z, w);
    mtx44Copy(&matrix, _ZN2nw4math5MTX448IdentityEv());
    Matrix44 yRotation;
    FUN_001a1c28(&yRotation, 0.0f, (f32)yAngle * (256.0f / 360.0f), 0.0f);
    FUN_0019a0fc(&matrix, &matrix, &yRotation);
    f32 afterYx = matrixTransformCoordinate(&matrix.values[0], afterXx, afterXy, afterXz, afterXw);
    f32 afterYy = matrixTransformCoordinate(&matrix.values[4], afterXx, afterXy, afterXz, afterXw);
    f32 afterYz = matrixTransformCoordinate(&matrix.values[8], afterXx, afterXy, afterXz, afterXw);
    f32 afterYw = matrixTransformCoordinate(&matrix.values[12], afterXx, afterXy, afterXz, afterXw);
    mtx44Copy(&matrix, _ZN2nw4math5MTX448IdentityEv());
    Matrix44 zRotation;
    FUN_001a1c28(&zRotation, 0.0f, 0.0f, (f32)zAngle * (256.0f / 360.0f));
    FUN_0019a0fc(&matrix, &matrix, &zRotation);
    position->x = matrixTransformCoordinate(&matrix.values[0], afterYx, afterYy, afterYz, afterYw);
    position->y = matrixTransformCoordinate(&matrix.values[4], afterYx, afterYy, afterYz, afterYw);
    position->z = matrixTransformCoordinate(&matrix.values[8], afterYx, afterYy, afterYz, afterYw);
}
}
