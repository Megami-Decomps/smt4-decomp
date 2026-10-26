/* NON_MATCHING: placement arrays of recovered trivial element types omit retail construction loops; caller stack homing and bone-copy scheduling also differ. */
#include "gfx/SkeletonInstanceBuffers.h"
#include <new>

extern "C" {
SkeletonBufferBlock FUN_0045b4d0(SkeletonBufferCursor *cursor, u32 bytes, u32 alignment);
void nn_math_ARMv6_MTX34InverseAsm(SkeletonMatrix34 *destination, const SkeletonMatrix34 *source);
void FUN_00193c08(SkeletonInstanceResource *resource, SkeletonInstanceBuffers *instance);

SkeletonBufferBlock FUN_005074e8(SkeletonInstanceResource *resource, SkeletonInstanceBuffers *instance,
                               u8 *memory, const SkeletonBufferRequirements *requirements)
{
    SkeletonBufferCursor cursor = {memory, memory + requirements->totalBytes};
    SkeletonBufferBlock block = FUN_0045b4d0(&cursor, requirements->idBytes, 4);
    instance->jointIds = static_cast<u16 *>(block.data);
    instance->jointCount = block.bytes / sizeof(u16);
    new (instance->jointIds) u16[instance->jointCount];
    block = FUN_0045b4d0(&cursor, requirements->matrixBytes, 4);
    instance->matrices = static_cast<SkeletonMatrix44 *>(block.data);
    instance->matrixCount = block.bytes / sizeof(SkeletonMatrix44);
    new (instance->matrices) SkeletonMatrix44[instance->matrixCount];
    block = FUN_0045b4d0(&cursor, requirements->localMatrixBytes, 4);
    instance->localMatrices = static_cast<SkeletonMatrix34 *>(block.data);
    instance->localMatrixCount = block.bytes / sizeof(SkeletonMatrix34);
    new (instance->localMatrices) SkeletonMatrix34[instance->localMatrixCount];
    if (resource->kind == 2) {
        block = FUN_0045b4d0(&cursor, requirements->vectorBytes, 4);
        instance->vectors = static_cast<SkeletonVector3 *>(block.data);
        instance->vectorCount = block.bytes / sizeof(SkeletonVector3);
        new (instance->vectors) SkeletonVector3[instance->vectorCount];
    }
    bool hasSpecialJoint = false;
    u32 index = 0;
    u16 *joint = instance->jointIds;
    u16 *end = joint + instance->jointCount;
    while (joint != end) {
        SkeletonJointResource *source = &resource->joints[index];
        *joint = source->id;
        nn_math_ARMv6_MTX34InverseAsm(&instance->localMatrices[index], &source->localMatrix);
        ++joint;
        ++index;
        if (source->flags & 0x70000)
            hasSpecialJoint = true;
    }
    FUN_00193c08(resource, instance);
    instance->kind = resource->kind;
    if (hasSpecialJoint)
        instance->flags |= 1;
    else
        instance->flags &= ~1;
    SkeletonBufferBlock remaining = {cursor.current, 0};
    return remaining;
}
}
