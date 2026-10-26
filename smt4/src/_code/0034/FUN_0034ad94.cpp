/* NON_MATCHING: logic and by-value vector ABI match; VFP load order of the three vector accumulations, the negated-vector copy (retail uses VLDM/VSTM) and the node pointer reload scheduling differ. */
#include "common.h"
#include "nw/math/MTX34.h"
#include "classes/Obj557b18.h"

/* Three floats; passed to functions by value in VFP registers. */
struct EffectVec3 {
    f32 x, y, z;

    EffectVec3() {}
    EffectVec3(f32 vx, f32 vy, f32 vz) : x(vx), y(vy), z(vz) {}

    EffectVec3 &operator+=(const EffectVec3 &other)
    {
        x = x + other.x;
        y = y + other.y;
        z = z + other.z;
        return *this;
    }

    EffectVec3 operator-() const { return EffectVec3(-x, -y, -z); }
    EffectVec3 operator*(f32 factor) const { return EffectVec3(x * factor, y * factor, z * factor); }
};

struct EffectPlacement {
    u32 x, y, z;
};

struct EffectModelOwner;

struct EffectNode {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ EffectModelOwner *owner;
};

struct EffectPart {
    u8 unk00[0x1F6];
    /* 0x1F6 */ u8 visible;
};

struct EffectModelOwner {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ EffectPart *part;
};

/* A short-lived effect that drifts and scales a model until its frame counter runs out. */
struct DriftEffect {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ EffectNode *node;
    /* 0x08 */ s32 framesLeft;
    /* 0x0C */ EffectVec3 origin;
    /* 0x18 */ EffectVec3 position;
    /* 0x24 */ EffectVec3 scale;
    /* 0x30 */ u8 unk30[0xC];
    /* 0x3C */ EffectVec3 velocity;
    /* 0x48 */ EffectVec3 acceleration;
    /* 0x54 */ EffectVec3 scaleVelocity;
    /* 0x60 */ nw::math::MTX34 matrix;
    /* 0x90 */ EffectPlacement finalTranslation;
    /* 0x9C */ EffectVec3 finalRotation;
    /* 0xA8 */ EffectPlacement finalPosition;
};

extern "C" {
void nn_math_ARMv6_MTX34MultAsm(nw::math::MTX34 *dest, const nw::math::MTX34 *a, const nw::math::MTX34 *b);
void matrixTranslateColumn(nw::math::MTX34 *result, const EffectVec3 *translation, const nw::math::MTX34 *matrix);
void nodeSetTranslation(EffectModelOwner *owner, u32 kind, const EffectPlacement *translation);
void FUN_0028c618(EffectModelOwner *owner, u32 kind, EffectVec3 rotation);
void modelSetPosition(EffectModelOwner *owner, u32 kind, const EffectPlacement *position);
void FUN_002929d8(nw::math::MTX34 *result, u32 kind, EffectVec3 scale);
void nodeCopyMatrixMarkDirty(EffectModelOwner *owner, const nw::math::MTX34 *matrix);

// Advance the effect one frame; on its last frame snap the model to its final placement.
void FUN_0034ad94(DriftEffect *effect)
{
    effect->framesLeft--;
    if (effect->framesLeft == 0) {
        EffectNode *node = effect->node;
        node->flags |= 2;
        node->owner->part->visible = 0;
        nodeSetTranslation(effect->node->owner, 0, &effect->finalTranslation);
        FUN_0028c618(effect->node->owner, 0, effect->finalRotation);
        modelSetPosition(effect->node->owner, 0, &effect->finalPosition);
    } else {
        effect->velocity += effect->acceleration;
        effect->position += effect->velocity;
        effect->scale += effect->scaleVelocity;
        EffectVec3 offset = -effect->origin;
        nn_math_ARMv6_MTX34CopyAsm(&effect->matrix, &nw::math::MTX34::Identity());
        matrixTranslateColumn(&effect->matrix, &offset, &effect->matrix);
        nw::math::MTX34 scaleMatrix;
        FUN_002929d8(&scaleMatrix, 1, effect->scale * 0.7111111f);
        nn_math_ARMv6_MTX34MultAsm(&effect->matrix, &scaleMatrix, &effect->matrix);
        matrixTranslateColumn(&effect->matrix, &effect->origin, &effect->matrix);
        matrixTranslateColumn(&effect->matrix, &effect->position, &effect->matrix);
        nodeCopyMatrixMarkDirty(effect->node->owner, &effect->matrix);
    }
}

}
