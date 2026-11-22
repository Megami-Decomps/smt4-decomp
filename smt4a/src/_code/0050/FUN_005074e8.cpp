/* NON_MATCHING: 109 vs 107 rows (82 diff lines): PartBuildResult non-trivial destructor and element placement-new loops restore the 4 retail construction loops; caller stack homing (push {r0-r3}, 52-byte frame) and bone-copy scheduling still differ. */
#include "gfx/SkeletonInstanceBuffers.h"
#include <new>

/* Return value matching moriModelUnitAttachPart's PartBuildResult (non-trivial destructor forces sret). */
struct PartBuildResult {
    ~PartBuildResult() {}
    void *memory;
    u32 result;
};

struct PlacementU16 {
    PlacementU16() {}
    u16 value;
};
struct PlacementMat44 {
    PlacementMat44() {}
    SkeletonMatrix44 value;
};
struct PlacementMat34 {
    PlacementMat34() {}
    SkeletonMatrix34 value;
};
struct PlacementVec3 {
    PlacementVec3() {}
    SkeletonVector3 value;
};

extern "C" {
SkeletonBufferBlock FUN_0045b4d0(SkeletonBufferCursor *cursor, u32 bytes, u32 alignment);
void nn_math_ARMv6_MTX34InverseAsm(SkeletonMatrix34 *destination, const SkeletonMatrix34 *source);
void FUN_00193c08(SkeletonInstanceResource *resource, SkeletonInstanceBuffers *instance);

PartBuildResult FUN_005074e8(SkeletonInstanceResource *resource, SkeletonInstanceBuffers *instance,
                             u8 *memory, const SkeletonBufferRequirements *requirements)
{
    SkeletonBufferCursor cursor = {memory, memory + requirements->totalBytes};
    SkeletonBufferBlock block = FUN_0045b4d0(&cursor, requirements->idBytes, 4);
    instance->jointIds = (u16 *)block.data;
    instance->jointCount = block.bytes / sizeof(u16);
    for (u32 i = 0; i < instance->jointCount; ++i) {
        new (&instance->jointIds[i]) PlacementU16;
    }
    block = FUN_0045b4d0(&cursor, requirements->matrixBytes, 4);
    instance->matrices = (SkeletonMatrix44 *)block.data;
    instance->matrixCount = block.bytes / sizeof(SkeletonMatrix44);
    for (u32 i = 0; i < instance->matrixCount; ++i) {
        new (&instance->matrices[i]) PlacementMat44;
    }
    block = FUN_0045b4d0(&cursor, requirements->localMatrixBytes, 4);
    instance->localMatrices = (SkeletonMatrix34 *)block.data;
    instance->localMatrixCount = block.bytes / sizeof(SkeletonMatrix34);
    for (u32 i = 0; i < instance->localMatrixCount; ++i) {
        new (&instance->localMatrices[i]) PlacementMat34;
    }
    if (resource->kind == 2) {
        block = FUN_0045b4d0(&cursor, requirements->vectorBytes, 4);
        instance->vectors = (SkeletonVector3 *)block.data;
        instance->vectorCount = block.bytes / sizeof(SkeletonVector3);
        for (u32 i = 0; i < instance->vectorCount; ++i) {
            new (&instance->vectors[i]) PlacementVec3;
        }
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
        if (source->flags & 0x70000) {
            hasSpecialJoint = true;
        }
    }
    FUN_00193c08(resource, instance);
    instance->kind = resource->kind;
    if (hasSpecialJoint) {
        instance->flags |= 1;
    } else {
        instance->flags &= ~1;
    }
    PartBuildResult remaining;
    remaining.memory = cursor.current;
    remaining.result = 0;
    return remaining;
}
} /* extern "C" */
