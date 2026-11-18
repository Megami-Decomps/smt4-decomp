/* NON_MATCHING: same flow and frame (20 bytes), 565 rows against 566; retail keeps the skeleton in r7 and the joint index in r4 (built: r4 and r5), which renames most rows, and schedules the VFP loads, products and stores of the scaled matrices differently (row loads and stores fused into vldm/vstm, translation column through s15-s17).
 * The three scaling-rule passes are single-use static __inline helpers: retail copies `root` separately in
 * each case (cases 0 and 1 `mov fp, r1` after their own count loads, case 2 a spill to sp+8), the shape of
 * three inlined functions with their own parameter; written in place, the build differs in 955 rows. */
#include "common.h"
#include "gfx/SkeletonInstanceBuffers.h"

extern "C" {
void nn_math_ARMv6_MTX34MultAsm(SkeletonMatrix34 *out, const SkeletonMatrix34 *left, const SkeletonMatrix34 *right);
/* nw::math::MTX34::Identity() */
const SkeletonMatrix34 *FUN_001a1e28(void);
}

/* out = matrix with its three axes scaled (the translation is kept); out may be the matrix itself. */
static __forceinline void matrixMultScale(SkeletonMatrix34 *out, const SkeletonMatrix34 *matrix, const SkeletonVector3 *scale)
{
    f32 m00 = matrix->values[0] * scale->values[0];
    f32 m01 = matrix->values[1] * scale->values[1];
    f32 m02 = matrix->values[2] * scale->values[2];
    f32 m10 = matrix->values[4] * scale->values[0];
    f32 m11 = matrix->values[5] * scale->values[1];
    f32 m12 = matrix->values[6] * scale->values[2];
    f32 m20 = matrix->values[8] * scale->values[0];
    f32 m21 = matrix->values[9] * scale->values[1];
    f32 m22 = matrix->values[10] * scale->values[2];
    f32 m03 = matrix->values[3];
    f32 m13 = matrix->values[7];
    f32 m23 = matrix->values[11];
    out->values[0] = m00;
    out->values[1] = m01;
    out->values[2] = m02;
    out->values[3] = m03;
    out->values[4] = m10;
    out->values[5] = m11;
    out->values[6] = m12;
    out->values[7] = m13;
    out->values[8] = m20;
    out->values[9] = m21;
    out->values[10] = m22;
    out->values[11] = m23;
}

/* out = the joint's local matrix with its translation scaled. */
static __inline void matrixCopyScaledTranslation(SkeletonMatrix34 *out, const SkeletonMatrix34 *matrix,
    const SkeletonVector3 *scale)
{
    *out = *matrix;
    SkeletonVector3 factor = *scale;
    out->values[3] *= factor.values[0];
    out->values[7] *= factor.values[1];
    out->values[11] *= factor.values[2];
}

/* The world matrix of a joint without a parent: the root matrix times its local matrix. */
static __inline void rootJointWorld(SkeletonMatrix34 *out, const SkeletonJointPose *joint, const SkeletonMatrix34 *root)
{
    if ((~joint->flags & SKELETON_JOINT_IDENTITY_MATRIX) == 0) {
        if (root != NULL)
            *out = *root;
        else
            *out = *FUN_001a1e28();
    } else {
        if (root != NULL)
            nn_math_ARMv6_MTX34MultAsm(out, root, &joint->matrix);
        else
            *out = joint->matrix;
    }
}

/* Plain hierarchical scaling: a joint's scale also scales its children. */
static __inline void updateWorldStandard(SkeletonInstanceBuffers *skeleton, const SkeletonMatrix34 *root)
{
    s32 count = skeleton->jointCount;
    SkeletonMatrix44 *joints = skeleton->matrices;
    SkeletonMatrix34 *world = skeleton->localMatrices;
    for (s32 i = 0; i < count; i++) {
        s32 parent = skeleton->jointIds[i];
        SkeletonJointPose *joint = &skeleton->matrices[i].joint;
        if (parent < count) {
            SkeletonJointPose *parentJoint = &joints[parent].joint;
            SkeletonMatrix34 *parentWorld = &world[parent];
            SkeletonMatrix34 *out = &world[i];
            if ((~parentJoint->flags & SKELETON_JOINT_UNIT_SCALE) == 0) {
                nn_math_ARMv6_MTX34MultAsm(out, parentWorld, &joints[i].joint.matrix);
            } else {
                matrixMultScale(out, parentWorld, &parentJoint->scale);
                nn_math_ARMv6_MTX34MultAsm(out, out, &joints[i].joint.matrix);
            }
        } else {
            rootJointWorld(&world[i], &joints[i].joint, root);
        }
        joint->flags = (joint->flags & ~SKELETON_JOINT_DIRTY) | SKELETON_JOINT_WORLD_VALID;
    }
    count = skeleton->jointCount;
    for (s32 i = 0; i < count; i++) {
        SkeletonJointPose *joint = &joints[i].joint;
        if ((~joint->flags & SKELETON_JOINT_UNIT_SCALE) != 0)
            matrixMultScale(&world[i], &world[i], &joint->scale);
    }
}

/* Segment scale compensation: a flagged joint is moved, not scaled, by its parent's scale. */
static __inline void updateWorldCompensated(SkeletonInstanceBuffers *skeleton, const SkeletonMatrix34 *root)
{
    s32 count = skeleton->jointCount;
    SkeletonMatrix44 *joints = skeleton->matrices;
    SkeletonMatrix34 *world = skeleton->localMatrices;
    for (s32 i = 0; i < count; i++) {
        s32 parent = skeleton->jointIds[i];
        SkeletonJointPose *joint = &skeleton->matrices[i].joint;
        if (parent < count) {
            SkeletonJointPose *parentJoint = &joints[parent].joint;
            SkeletonJointPose *local = &joints[i].joint;
            SkeletonMatrix34 *out = &world[i];
            SkeletonMatrix34 *parentWorld = &world[parent];
            if ((~parentJoint->flags & SKELETON_JOINT_UNIT_SCALE) == 0) {
                nn_math_ARMv6_MTX34MultAsm(out, parentWorld, &local->matrix);
            } else if (local->flags & SKELETON_JOINT_SCALE_COMPENSATE) {
                matrixCopyScaledTranslation(out, &local->matrix, &parentJoint->scale);
                nn_math_ARMv6_MTX34MultAsm(out, parentWorld, out);
            } else {
                matrixMultScale(out, parentWorld, &parentJoint->scale);
                nn_math_ARMv6_MTX34MultAsm(out, out, &local->matrix);
            }
        } else {
            rootJointWorld(&world[i], &joints[i].joint, root);
        }
        joint->flags = (joint->flags & ~SKELETON_JOINT_DIRTY) | SKELETON_JOINT_WORLD_VALID;
    }
    count = skeleton->jointCount;
    for (s32 i = 0; i < count; i++) {
        SkeletonJointPose *joint = &joints[i].joint;
        if ((~joint->flags & SKELETON_JOINT_UNIT_SCALE) != 0)
            matrixMultScale(&world[i], &world[i], &joint->scale);
    }
}

/* The scales accumulate in the skeleton's vectors and are applied to the finished matrices. */
static __inline void updateWorldAccumulated(SkeletonInstanceBuffers *skeleton, const SkeletonMatrix34 *root)
{
    s32 count = skeleton->jointCount;
    SkeletonMatrix44 *joints = skeleton->matrices;
    SkeletonVector3 *scales = skeleton->vectors;
    SkeletonMatrix34 *world = skeleton->localMatrices;
    for (s32 i = 0; i < count; i++) {
        s32 parent = skeleton->jointIds[i];
        SkeletonJointPose *joint = &skeleton->matrices[i].joint;
        if (parent < count) {
            SkeletonJointPose *local = &joints[i].joint;
            SkeletonJointPose *parentJoint = &joints[parent].joint;
            // The joint keeps the inherited flags its parent has too.
            u32 flags = local->flags & ~SKELETON_JOINT_INHERITED;
            local->flags = flags | (parentJoint->flags & (flags << 4) & SKELETON_JOINT_INHERITED);
            SkeletonVector3 *scale = &scales[i];
            SkeletonVector3 *parentScale = &scales[parent];
            SkeletonMatrix34 *out = &world[i];
            SkeletonMatrix34 *parentWorld = &world[parent];
            if ((~parentJoint->flags & SKELETON_JOINT_UNIT_WORLD_SCALE) == 0) {
                nn_math_ARMv6_MTX34MultAsm(out, parentWorld, &local->matrix);
            } else {
                matrixCopyScaledTranslation(out, &local->matrix, parentScale);
                nn_math_ARMv6_MTX34MultAsm(out, parentWorld, out);
            }
            if ((~local->flags & SKELETON_JOINT_UNIT_SCALE) == 0) {
                *scale = *parentScale;
            } else {
                scale->values[0] = parentScale->values[0] * local->scale.values[0];
                scale->values[1] = parentScale->values[1] * local->scale.values[1];
                scale->values[2] = parentScale->values[2] * local->scale.values[2];
            }
        } else {
            rootJointWorld(&world[i], &joints[i].joint, root);
            if ((~joints[i].joint.flags & SKELETON_JOINT_UNIT_SCALE) == 0) {
                scales[i].values[0] = 1.0f;
                scales[i].values[1] = 1.0f;
                scales[i].values[2] = 1.0f;
            } else {
                scales[i].values[0] = joints[i].joint.scale.values[0];
                scales[i].values[1] = joints[i].joint.scale.values[1];
                scales[i].values[2] = joints[i].joint.scale.values[2];
            }
        }
        joint->flags = (joint->flags & ~SKELETON_JOINT_DIRTY) | SKELETON_JOINT_WORLD_VALID;
    }
    count = skeleton->jointCount;
    for (s32 i = 0; i < count; i++) {
        if ((~joints[i].joint.flags & SKELETON_JOINT_UNIT_WORLD_SCALE) != 0)
            matrixMultScale(&world[i], &world[i], &scales[i]);
    }
}

extern "C" {

/* Rebuilds every joint's world matrix from its parent's and its own pose, in the skeleton's scaling
 * rule. `root` (NULL: none) is the matrix of the joints without a parent. */
void skeletonUpdateWorldMatrices(SkeletonInstanceBuffers *skeleton, const SkeletonMatrix34 *root)
{
    switch (skeleton->kind) {
    case 0:
        updateWorldStandard(skeleton, root);
        break;
    case 1:
        updateWorldCompensated(skeleton, root);
        break;
    case 2:
        updateWorldAccumulated(skeleton, root);
        break;
    }
}

} /* extern "C" */
