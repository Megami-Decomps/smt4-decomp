#include "gfx/SkeletonInstanceBuffers.h"

extern "C" {
/* Sets the unit-scale flags of every joint whose three scale components are one. */
void FUN_0018eb44(SkeletonInstanceBuffers *skeleton)
{
    SkeletonMatrix44 *matrix = skeleton->matrices;
    SkeletonMatrix44 *end = matrix + skeleton->matrixCount;
    while (matrix != end) {
        SkeletonJointPose *joint = &matrix->joint;
        const SkeletonVector3 *scale = &joint->scale;
        if ((~joint->flags & SKELETON_JOINT_UNIT_SCALE) != 0 && scale->values[0] == 1.0f &&
            scale->values[1] == 1.0f && scale->values[2] == 1.0f)
            joint->flags |= SKELETON_JOINT_UNIT_SCALE;
        ++matrix;
    }
}
}
