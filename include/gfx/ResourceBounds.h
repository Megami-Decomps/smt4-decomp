#ifndef GFX_RESOURCEBOUNDS_H
#define GFX_RESOURCEBOUNDS_H

#include "gfx/ResourceDispatch.h"
#include "nw/math/MTX33.h"
#include <stddef.h>

extern "C" void nn_math_ARMv6_MTX34CopyAsm(nw::math::MTX34 *output, const nw::math::MTX34 *input);

struct ResourceWorldTransform {
    nw::math::MTX34 matrix;
    nw::math::VEC3 scale;
    u32 flags;

    ResourceWorldTransform()
    {
        nn_math_ARMv6_MTX34CopyAsm(&matrix, &nw::math::MTX34::Identity());
        scale.x = 1.0f;
        scale.y = 1.0f;
        scale.z = 1.0f;
        flags = 0x801;
    }
};
struct ResourceBounds {
    u32 unk00;
    nw::math::VEC3 center; // 0x04
    nw::math::MTX33 rotation; // 0x10
    nw::math::VEC3 size; // 0x34
};
struct OrientedBounds {
    nw::math::VEC3 center; // 0x00
    nw::math::MTX33 rotation; // 0x0c
    nw::math::VEC3 halfExtents; // 0x30
    nw::math::VEC3 scaledAxes[3]; // 0x3c
    nw::math::VEC3 unitAxes[3]; // 0x60
};
struct ResourceBoundsTransformNode {
    u8 unk00[0xbc];
    ResourceWorldTransform world; // 0xbc
};
struct ResourceBoundsContent {
    u8 unk00[0x2c];
    ResourceBoundsTransformNode *transform;
};
struct ResourceBoundsOwner {
    u8 unk00[8];
    ResourceBoundsContent *content;
};
typedef char ResourceBoundsOffsets[
    sizeof(ResourceWorldTransform) == 0x40 && sizeof(ResourceBounds) == 0x40 &&
    offsetof(ResourceBounds, rotation) == 0x10 &&
    offsetof(ResourceBounds, size) == 0x34 &&
    offsetof(OrientedBounds, halfExtents) == 0x30 &&
    offsetof(OrientedBounds, unitAxes) == 0x60 && sizeof(OrientedBounds) == 0x84 &&
    offsetof(ResourceBoundsTransformNode, world) == 0xbc &&
    offsetof(ResourceBoundsContent, transform) == 0x2c ? 1 : -1];

#endif
