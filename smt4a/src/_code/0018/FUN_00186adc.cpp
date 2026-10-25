/* NON_MATCHING: retail copies MTX34 member-wise in VFP; source aggregate copies use integer LDM/STM and a larger frame. */
#include "gfx/ResourceBounds.h"

using nw::math::MTX33;
using nw::math::VEC3;

extern "C" {
DispatchResource *resourceGetRelativeElement(ResourceBoundsOwner *owner, u32 index, u32 kind);
void nn_math_ARMv6_VEC3TransformAsm_2A87B4(VEC3 *output, const MTX33 *matrix, const VEC3 *input);
void FUN_001aa350(MTX33 *output, const MTX33 *first, const MTX33 *second);
void FUN_001a6fbc(OrientedBounds *bounds);

/* Resolve a resource box, transform its center and orientation, and build its normalized axes. */
u8 FUN_00186adc(OrientedBounds *output, ResourceBoundsOwner *owner, u32 index, u32 kind)
{
    ResourceWorldTransform world;
    DispatchResource *resource = resourceGetRelativeElement(owner, index, kind);
    const ResourceBounds *bounds = static_cast<const ResourceBounds *>(resource->payload.get());
    if (bounds == NULL) {
        return 0;
    }
    VEC3 center = bounds->center;
    MTX33 localRotation = bounds->rotation;
    VEC3 size = bounds->size;
    world = owner->content->transform->world;
    MTX33 worldRotation;
    matrix33FromTransform(&worldRotation, world.matrix);
    nn_math_ARMv6_VEC3TransformAsm_2A87B4(&center, &worldRotation, &center);
    VEC3 worldCenter;
    worldCenter.x = world.matrix.m[0][3] + center.x;
    worldCenter.y = world.matrix.m[1][3] + center.y;
    worldCenter.z = world.matrix.m[2][3] + center.z;
    MTX33 rotation;
    FUN_001aa350(&rotation, &worldRotation, &localRotation);
    output->center.x = worldCenter.x;
    output->center.y = worldCenter.y;
    output->center.z = worldCenter.z;
    output->rotation = rotation;
    output->halfExtents.x = size.x * 0.5f;
    output->halfExtents.y = size.y * 0.5f;
    output->halfExtents.z = size.z * 0.5f;
    FUN_001a6fbc(output);
    return 1;
}
}
