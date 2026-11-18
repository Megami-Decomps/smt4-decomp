#ifndef GFX_SKELETONINSTANCEBUFFERS_H
#define GFX_SKELETONINSTANCEBUFFERS_H
#include "common.h"
#include <stddef.h>
struct SkeletonMatrix34 { f32 values[12]; };
struct SkeletonVector3 { f32 values[3]; };
/* Flags of a joint's pose (SkeletonJointPose::flags). */
enum {
    SKELETON_JOINT_DIRTY = 0x2,               /* the local transform changed */
    SKELETON_JOINT_WORLD_VALID = 0x4,         /* the world matrix is up to date */
    SKELETON_JOINT_SCALE_COMPENSATE = 0x400000, /* the parent's scale only moves the joint */
    SKELETON_JOINT_UNIT_SCALE = 0x2800000,    /* all set: the joint's own scale is one */
    SKELETON_JOINT_IDENTITY_MATRIX = 0xC000000, /* all set: the local matrix is the identity */
    SKELETON_JOINT_UNIT_WORLD_SCALE = 0x28000000, /* all set: the accumulated scale is one */
    SKELETON_JOINT_INHERITED = 0xE8000000     /* a joint's flags << 4, masked by its parent's */
};
/* A joint's pose: its flags, scale and local matrix. */
struct SkeletonJointPose {
    /* 0x00 */ u32 flags;
    /* 0x04 */ SkeletonVector3 scale;
    /* 0x10 */ SkeletonMatrix34 matrix;
};
/* One 0x40-byte element of SkeletonInstanceBuffers::matrices. */
struct SkeletonMatrix44 {
    union {
        f32 values[16];
        SkeletonJointPose joint;
    };
};
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
    sizeof(SkeletonMatrix44) == 0x40 && offsetof(SkeletonJointPose, matrix) == 0x10 &&
    sizeof(SkeletonJointResource) == 0x64 &&
    offsetof(SkeletonJointResource, localMatrix) == 0x2C &&
    offsetof(SkeletonInstanceResource, joints) == 0x70 &&
    offsetof(SkeletonInstanceBuffers, localMatrices) == 0x14 &&
    offsetof(SkeletonInstanceBuffers, vectors) == 0x1C &&
    offsetof(SkeletonBufferRequirements, idBytes) == 0x2C &&
    offsetof(SkeletonBufferRequirements, vectorBytes) == 0x44 ? 1 : -1];
#endif
