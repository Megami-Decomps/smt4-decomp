/* NON_MATCHING: pose-component lifetimes and expanded/transposed matrix copy grouping differ. */
#include "gfx/CameraMatrixCache.h"
#include "map/mapDepart.h"

extern "C" {
void nn_math_ARMv6_MTX34LookAtC_FAST(Matrix34Data *, const MapVector *, const MapVector *, const MapVector *);
void FUN_002b77f4(Matrix34Data *, const Matrix34Data *);
void memCopyWords(const u32 *, u32 *, u32);
void nn_math_ARMv6_MTX44TransposeAsm(Matrix44 *, const Matrix44 *);
void FUN_0011d08c(void *, const Matrix34Data *);

void FUN_002c1edc(CameraMatrixCache *camera, const MapVector *eye, const MapVector *target, const MapVector *up)
{
    // CameraMatrixCache's initial padding starts at byte 1, so an aligned pose union would shift it.
    struct LookAtView {
        u8 enabled;
        u8 dirty;
        u8 unk02[2];
        MapVector eye;
        MapVector target;
        MapVector up;
        u8 unk28[0x10];
        Matrix34Data view;
        Matrix44 expanded;
        u8 unkA8[0x80];
        Matrix34Data orientation;
        u8 unk158[0x40];
        Matrix44 transposed;
    };
    typedef char LookAtViewOffsets[offsetof(LookAtView, view) == 0x38 &&
        offsetof(LookAtView, orientation) == 0x128 && offsetof(LookAtView, transposed) == 0x198 ? 1 : -1];
    LookAtView *pose = reinterpret_cast<LookAtView *>(camera);
    pose->eye = *eye;
    pose->target = *target;
    pose->up = *up;
    pose->dirty = 0;
    f32 dx = pose->eye.x - pose->target.x;
    f32 dy = pose->eye.y - pose->target.y;
    f32 dz = pose->eye.z - pose->target.z;
    if (dx * dx + dy * dy + dz * dz == 0.0f)
        pose->target.z += 1.0f;
    nn_math_ARMv6_MTX34LookAtC_FAST(&pose->view, &pose->eye, &pose->up, &pose->target);
    FUN_002b77f4(&pose->orientation, &pose->view);
    memCopyWords(reinterpret_cast<const u32 *>(pose->view.values), reinterpret_cast<u32 *>(pose->expanded.values), sizeof(pose->view));
    pose->expanded.values[12] = 0.0f;
    pose->expanded.values[13] = 0.0f;
    pose->expanded.values[14] = 0.0f;
    pose->expanded.values[15] = 1.0f;
    pose->transposed = pose->expanded;
    nn_math_ARMv6_MTX44TransposeAsm(&pose->transposed, &pose->transposed);
    if (camera->enabled)
        FUN_0011d08c(camera->parameters, &pose->view);
}
}
