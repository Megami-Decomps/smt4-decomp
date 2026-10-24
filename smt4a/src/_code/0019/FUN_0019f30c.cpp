/* NON_MATCHING: float register allocation and load/store scheduling differ (retail hoists the matrix loads of every branch above the stores and unpredicated 1/root); the algorithm is the same. */
#include "gfx/QuaternionWorkspace.h"

extern "C" {

/* A joint's 3x4 row-major transform (0x30 bytes). */
typedef struct JointMatrix {
    f32 m[3][4];
} JointMatrix;

typedef struct JointList {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ JointMatrix *joints;
} JointList;

typedef struct JointNameTable {
    /* 0x00 */ u8 unk00[0x70];
    /* 0x70 */ u8 member70[1];
} JointNameTable;

typedef struct JointOwner {
    /* 0x000 */ u8 unk000[0x108];
    /* 0x108 */ JointList *list;
    /* 0x10C */ u8 unk10C[0x104];
    /* 0x210 */ JointNameTable *names;
} JointOwner;

s32 FUN_001a7a20(u8 *table, u32 name, u32 length);
u32 wstrlen(u32 name);
extern f32 __sqrtf(f32);

/* Looks a joint up by name and converts its rotation matrix to a quaternion. Returns whether the
 * joint was found. */
u32 FUN_0019f30c(JointOwner *owner, u32 name, RotationQuaternion *rotation)
{
    u8 *base = owner->names->member70;
    u32 length = wstrlen(name);
    s32 index = FUN_001a7a20(base + 4, name, length);

    if (index == 0xFFFF) {
        return 0;
    }
    const JointMatrix *joint = &owner->list->joints[index];
    f32 m00 = joint->m[0][0];
    f32 m11 = joint->m[1][1];
    f32 m22 = joint->m[2][2];
    f32 trace = m00 + m11 + m22;

    if (trace > 0.0f) {
        f32 root = __sqrtf(trace + 1.0f);
        f32 scale = 0.5f / root;

        rotation->x = (joint->m[2][1] - joint->m[1][2]) * scale;
        rotation->y = (joint->m[0][2] - joint->m[2][0]) * scale;
        rotation->z = (joint->m[1][0] - joint->m[0][1]) * scale;
        rotation->w = root * 0.5f;
    } else {
        if (m11 > m00) {
            if (!(m22 > m11)) {
                f32 scale = __sqrtf((m11 - (m22 + m00)) + 1.0f);
                f32 half = scale * 0.5f;
                if (scale != 0.0f) {
                    scale = 0.5f / scale;
                }

                rotation->y = half;
                rotation->w = (joint->m[0][2] - joint->m[2][0]) * scale;
                rotation->z = (joint->m[1][2] + joint->m[2][1]) * scale;
                rotation->x = (joint->m[1][0] + joint->m[0][1]) * scale;
                return 1;
            }
        } else if (!(m22 > m00)) {
            f32 scale = __sqrtf((m00 - (m11 + m22)) + 1.0f);
            f32 half = scale * 0.5f;
            if (scale != 0.0f) {
                scale = 0.5f / scale;
            }

            rotation->x = half;
            rotation->w = (joint->m[2][1] - joint->m[1][2]) * scale;
            rotation->y = (joint->m[0][1] + joint->m[1][0]) * scale;
            rotation->z = (joint->m[0][2] + joint->m[2][0]) * scale;
            return 1;
        }
        f32 scale = __sqrtf((m22 - (m00 + m11)) + 1.0f);
        f32 half = scale * 0.5f;
        if (scale != 0.0f) {
            scale = 0.5f / scale;
        }

        rotation->z = half;
        rotation->w = (joint->m[1][0] - joint->m[0][1]) * scale;
        rotation->x = (joint->m[2][0] + joint->m[0][2]) * scale;
        rotation->y = (joint->m[2][1] + joint->m[1][2]) * scale;
    }
    return 1;
}

}
