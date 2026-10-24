/* NON_MATCHING: identity and transform construction groups VFP stores differently and changes saved-register allocation. */
#include "common.h"
#include "shard/W5_W5Match2_PlainData.h"

extern "C" {

struct Vector4 {
    explicit Vector4(f32 value) : x(value), y(value), z(value), w(value) {}
    float x, y, z, w;
};

struct EffectInstance {
    u32 resource;       // 0x00
    s32 primaryIndex;    // 0x04
    s32 secondaryIndex;  // 0x08
    s32 positionX;       // 0x0c: signed 20.12
    s32 positionY;       // 0x10: signed 20.12
    unsigned char reserved14[4];  // 0x14
    s16 originX;         // 0x18
    s16 originY;         // 0x1a
    s16 originZ;         // 0x1c
    unsigned char reserved1e[2];  // 0x1e
    float speed;                 // 0x20
    unsigned char reserved24[4];  // 0x24
    float scaleX;                // 0x28
    float scaleY;                // 0x2c
    float rotation;              // 0x30
    float horizontalOffset;      // 0x34
    s16 drawParameter;   // 0x38
    s16 scaleMode;       // 0x3a
    u8 useOrigin;       // 0x3c
    u8 spatialMode;     // 0x3d
    unsigned char reserved3e[2];  // 0x3e
    float uniformScale;          // 0x40
    unsigned char reserved44[65]; // 0x44
    u8 enabled;         // 0x85
};

struct TitleScene;

extern "C" {
extern long long _ZGVZN2nw4math5MTX448IdentityEvE8identity;
extern Matrix44 _ZZN2nw4math5MTX448IdentityEvE8identity;
extern TitleScene* g_titleScene;

int __cxa_guard_acquire(long long* guard);

void mtx44Copy(Matrix44* destination, const Matrix44* source);
void nn_math_ARMv6_MTX44MultAsm(
    Matrix44* destination, const Matrix44* left, const Matrix44* right);
void FUN_002b2144(Matrix44* destination, float x, float y, float z);
void efctSetSpeed(float speed);
void cameraSetViewMatrix(TitleScene* scene, const Matrix44* matrix);

void FUN_002bf380(
    u32 flags, u32 resource, s32 index,
    s32 argument3, s32 argument4, s32 parameter);
void FUN_002bf288(
    u32 flags, u32 resource, s32 index,
    s32 argument3, s32 argument4, s32 parameter);

void quadSetOrderedVectors(
    const Vector4 &first, const Vector4 &second,
    const Vector4 &third, const Vector4 &fourth,
    s32 argument4, s32 argument5);
void FUN_002c198c(TitleScene* scene);
void FUN_002c18e4(TitleScene* scene);
}

namespace {

static __inline void setIdentity(Matrix44 *matrix)
{
    matrix->values[0] = 1.0f;
    matrix->values[1] = 0.0f;
    matrix->values[2] = 0.0f;
    matrix->values[3] = 0.0f;
    matrix->values[4] = 0.0f;
    matrix->values[5] = 1.0f;
    matrix->values[6] = 0.0f;
    matrix->values[7] = 0.0f;
    matrix->values[8] = 0.0f;
    matrix->values[9] = 0.0f;
    matrix->values[10] = 1.0f;
    matrix->values[11] = 0.0f;
    matrix->values[12] = 0.0f;
    matrix->values[13] = 0.0f;
    matrix->values[14] = 0.0f;
    matrix->values[15] = 1.0f;
}

static __inline void initializeSharedIdentityIfNeeded()
{
    if (!(static_cast<u32>(_ZGVZN2nw4math5MTX448IdentityEvE8identity) & 1) &&
        __cxa_guard_acquire(&_ZGVZN2nw4math5MTX448IdentityEvE8identity))
        setIdentity(&_ZZN2nw4math5MTX448IdentityEvE8identity);
}

static __inline void setTranslation(Matrix44 *matrix, f32 x, f32 y, f32 z)
{
    setIdentity(matrix);
    matrix->values[3] = x;
    matrix->values[7] = y;
    matrix->values[11] = z;
}

static __inline void setScale(Matrix44 *matrix, f32 x, f32 y, f32 z)
{
    setIdentity(matrix);
    matrix->values[0] = x;
    matrix->values[5] = y;
    matrix->values[10] = z;
}

} // namespace

extern "C" void effectRenderTransformedInstance(EffectInstance* effect, float horizontalOffset)
{
    if (effect == NULL)
        return;
    if (effect->enabled == 0)
        return;
    if (effect->primaryIndex < 0 && effect->secondaryIndex < 0)
        return;

    effect->horizontalOffset = horizontalOffset;

    Matrix44 view;
    Matrix44 transform;

    initializeSharedIdentityIfNeeded();
    mtx44Copy(&view, &_ZZN2nw4math5MTX448IdentityEvE8identity);
    initializeSharedIdentityIfNeeded();
    mtx44Copy(&transform, &_ZZN2nw4math5MTX448IdentityEvE8identity);

    float scaleX = 1.0f;
    float scaleY = 1.0f;
    bool scaled = false;

    efctSetSpeed(effect->speed);

    const bool rotated = effect->rotation != 0.0f;
    const float requestedScaleX = effect->scaleX;
    if (requestedScaleX != 1.0f ||
        effect->scaleY != 1.0f) {
        if (effect->scaleMode == 1) {
            scaleX = requestedScaleX;
            scaleY = 1.0f;
        } else {
            scaleX = effect->scaleMode == 2 ? 1.0f : requestedScaleX;
            scaleY = effect->scaleY;
        }
        scaled = true;
    }

    // Exact IEEE754 value from literal 0x4222f983.
    const float rotationFactor = 40.743663787841796875f;
    u32 drawFlags;

    if (effect->spatialMode != 0) {
        drawFlags = 0x2002;

        if (effect->useOrigin != 0) {
            setTranslation(&transform, 
                static_cast<float>(-static_cast<s32>(effect->originX)),
                static_cast<float>(-static_cast<s32>(effect->originY)),
                0.0f);
            nn_math_ARMv6_MTX44MultAsm(&view, &view, &transform);
        }

        const float uniform = effect->uniformScale;
        setScale(&transform, 
            scaleX * uniform, scaleY * uniform, 1.0f * uniform);
        nn_math_ARMv6_MTX44MultAsm(&view, &view, &transform);

        if (rotated) {
            FUN_002b2144(
                &transform, 0.0f, 0.0f, effect->rotation * rotationFactor);
            nn_math_ARMv6_MTX44MultAsm(&view, &view, &transform);
        }

        const s32 x = effect->originX + (effect->positionX >> 12);
        const s32 y = effect->originY + (effect->positionY >> 12);
        setTranslation(&transform, 
            static_cast<float>(x) + effect->horizontalOffset,
            static_cast<float>(-y),
            static_cast<float>(effect->originZ));
        nn_math_ARMv6_MTX44MultAsm(&view, &view, &transform);
    } else {
        drawFlags = 2;

        const s32 x = effect->originX + (effect->positionX >> 12);
        const s32 y = effect->originY + (effect->positionY >> 12);
        setTranslation(&transform, 
            static_cast<float>(x) + effect->horizontalOffset,
            static_cast<float>(y), 0.0f);
        nn_math_ARMv6_MTX44MultAsm(&view, &view, &transform);

        if (rotated) {
            FUN_002b2144(
                &transform, 0.0f, 0.0f, effect->rotation * rotationFactor);
            nn_math_ARMv6_MTX44MultAsm(&view, &view, &transform);
        }

        if (scaled) {
            setScale(&transform, scaleX, scaleY, 1.0f);
            nn_math_ARMv6_MTX44MultAsm(&view, &view, &transform);
        }

        if (effect->useOrigin != 0) {
            setTranslation(&transform, 
                static_cast<float>(-static_cast<s32>(effect->originX)),
                static_cast<float>(-static_cast<s32>(effect->originY)),
                0.0f);
            nn_math_ARMv6_MTX44MultAsm(&view, &view, &transform);
        }
    }

    cameraSetViewMatrix(g_titleScene, &view);

    const s32 secondaryIndex = effect->secondaryIndex;
    const s32 parameter = effect->drawParameter;
    if (secondaryIndex >= 0) {
        FUN_002bf380(
            drawFlags, effect->resource, secondaryIndex, 0, 0, parameter);
    } else {
        FUN_002bf288(
            drawFlags, effect->resource, effect->primaryIndex, 0, 0, parameter);
    }

    efctSetSpeed(1.0f);

    quadSetOrderedVectors(Vector4(1.0f), Vector4(1.0f), Vector4(1.0f), Vector4(1.0f), 0, 1);

    FUN_002c198c(g_titleScene);
    FUN_002c18e4(g_titleScene);
}
}
