#ifndef GFX_SKELETONINSTANCEBUFFERS_H
#define GFX_SKELETONINSTANCEBUFFERS_H
#include "common.h"
#include <stddef.h>
struct SkeletonMatrix44 { f32 values[16]; };
struct SkeletonMatrix34 { f32 values[12]; };
struct SkeletonVector3 { f32 values[3]; };
struct SkeletonJointResource {
    u32 flags;
    u16 id;
    u8 unk006[0x26];
    SkeletonMatrix34 localMatrix;
    u8 unk05C[8];
};
struct SkeletonInstanceResource {
    u8 flags, kind;
    u8 unk002[0x6E];
    SkeletonJointResource *joints;
};
struct SkeletonInstanceBuffers {
    u8 flags, kind;
    u8 unk002[2];
    u16 *jointIds;
    u32 jointCount;
    SkeletonMatrix44 *matrices;
    u32 matrixCount;
    SkeletonMatrix34 *localMatrices;
    u32 localMatrixCount;
    SkeletonVector3 *vectors;
    u32 vectorCount;
};
struct SkeletonBufferRequirements {
    u8 unk000[8];
    u32 totalBytes;
    u8 unk00C[0x20];
    u32 idBytes;
    u32 unk030;
    u32 matrixBytes;
    u32 unk038;
    u32 localMatrixBytes;
    u32 unk040;
    u32 vectorBytes;
};
struct SkeletonBufferCursor { u8 *current, *end; };
struct SkeletonBufferBlock { void *data; u32 bytes; };
typedef char SkeletonInstanceBufferOffsetsCheck[
    sizeof(SkeletonJointResource) == 0x64 &&
    offsetof(SkeletonJointResource, localMatrix) == 0x2C &&
    offsetof(SkeletonInstanceResource, joints) == 0x70 &&
    offsetof(SkeletonInstanceBuffers, localMatrices) == 0x14 &&
    offsetof(SkeletonInstanceBuffers, vectors) == 0x1C &&
    offsetof(SkeletonBufferRequirements, idBytes) == 0x2C &&
    offsetof(SkeletonBufferRequirements, vectorBytes) == 0x44 ? 1 : -1];
#endif
