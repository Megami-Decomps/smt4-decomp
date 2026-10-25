/* NON_MATCHING: guard-finalization NOPs are absent; shared identity pointer caching/register allocation differs. */
#include "gfx/CameraMatrixCache.h"

extern "C" {
extern u32 _ZGVZN2nw4math5MTX348IdentityEvE8identity;
extern u32 _ZGVZN2nw4math5MTX448IdentityEvE8identity;
extern Matrix34Data _ZZN2nw4math5MTX348IdentityEvE8identity;
extern Matrix44 _ZZN2nw4math5MTX448IdentityEvE8identity;
s32 __cxa_guard_acquire(u32 *guard);
void memClear(void *memory, u32 size);
void nn_math_ARMv6_MTX34CopyAsm(Matrix34Data *output, const Matrix34Data *input);
void mtx44Copy(Matrix44 *output, const Matrix44 *input);
void FUN_0011cfb4(void *parameters);
}

static __inline void initializeIdentityRows(f32 *values)
{
    values[0] = 1.0f;
    values[1] = 0.0f;
    values[2] = 0.0f;
    values[3] = 0.0f;
    values[4] = 0.0f;
    values[5] = 1.0f;
    values[6] = 0.0f;
    values[7] = 0.0f;
    values[8] = 0.0f;
    values[9] = 0.0f;
    values[10] = 1.0f;
    values[11] = 0.0f;
}

static __inline void initializeSharedIdentity44(void)
{
    if (!(_ZGVZN2nw4math5MTX448IdentityEvE8identity & 1) && __cxa_guard_acquire(&_ZGVZN2nw4math5MTX448IdentityEvE8identity)) {
        initializeIdentityRows(_ZZN2nw4math5MTX448IdentityEvE8identity.values);
        _ZZN2nw4math5MTX448IdentityEvE8identity.values[12] = 0.0f;
        _ZZN2nw4math5MTX448IdentityEvE8identity.values[13] = 0.0f;
        _ZZN2nw4math5MTX448IdentityEvE8identity.values[14] = 0.0f;
        _ZZN2nw4math5MTX448IdentityEvE8identity.values[15] = 1.0f;
    }
}

// Reset a camera's matrices and initialize stereo calibration when requested.
extern "C" void FUN_002c2044(CameraMatrixCache *camera, s32 enabled)
{
    union InitialCameraView {
        struct {
            u8 unk000[0x38];
            Matrix34Data view;
            u8 unk068[0x40];
            Matrix44 projection;
            Matrix44 transform;
        } initial;
        struct { u8 unk000[0x498]; f32 distance; } defaults;
    };
    InitialCameraView *work = reinterpret_cast<InitialCameraView *>(camera);
    memClear(camera, sizeof(*camera));
    camera->unk001[0] = 0;
    if (!(_ZGVZN2nw4math5MTX348IdentityEvE8identity & 1) && __cxa_guard_acquire(&_ZGVZN2nw4math5MTX348IdentityEvE8identity))
        initializeIdentityRows(_ZZN2nw4math5MTX348IdentityEvE8identity.values);
    nn_math_ARMv6_MTX34CopyAsm(&work->initial.view, &_ZZN2nw4math5MTX348IdentityEvE8identity);
    initializeSharedIdentity44();
    mtx44Copy(&work->initial.projection, &_ZZN2nw4math5MTX448IdentityEvE8identity);
    initializeSharedIdentity44();
    mtx44Copy(&work->initial.transform, &_ZZN2nw4math5MTX448IdentityEvE8identity);
    work->defaults.distance = 5.0f;
    camera->enabled = enabled;
    if (enabled) {
        FUN_0011cfb4(&camera->parameters);
        camera->stereoScale = 5.0f;
        camera->stereoOffset = 1.0f;
    }
}
