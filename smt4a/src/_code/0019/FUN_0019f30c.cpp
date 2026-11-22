/* NON_MATCHING: 212 lines. Computing the four components before storing them gives retail's loads ahead of the
 * stores. Left: retail stores in each branch (no shared store block), tests the axis as nested ifs with one shared
 * z-axis block (`bgt` to it from both), and allocates the VFP registers differently. */
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

s32 nameTableLookupEntry(u8 *table, u32 name, u32 length);
u32 libc_strlen(u32 name);
extern f32 __sqrtf(f32);

/* Looks a joint up by name and converts its rotation matrix to a quaternion. Returns whether the
 * joint was found. */
u32 FUN_0019f30c(JointOwner *owner, u32 name, RotationQuaternion *rotation)
{
    u8 *base = owner->names->member70;
    u32 length = libc_strlen(name);
    s32 index = nameTableLookupEntry(base + 4, name, length);

    if (index == 0xFFFF) {
        return 0;
    }
    const JointMatrix *joint = &owner->list->joints[index];
    f32 m00 = joint->m[0][0];
    f32 m11 = joint->m[1][1];
    f32 m22 = joint->m[2][2];
    f32 trace = m00 + m11 + m22;
    f32 x, y, z, w;

    if (trace > 0.0f) {
        f32 root = __sqrtf(trace + 1.0f);
        f32 scale = 0.5f / root;

        x = (joint->m[2][1] - joint->m[1][2]) * scale;
        y = (joint->m[0][2] - joint->m[2][0]) * scale;
        z = (joint->m[1][0] - joint->m[0][1]) * scale;
        w = root * 0.5f;
    } else if (m11 > m00 && !(m22 > m11)) {
        f32 scale = __sqrtf((m11 - (m22 + m00)) + 1.0f);
        y = scale * 0.5f;
        if (scale != 0.0f) {
            scale = 0.5f / scale;
        }
        w = (joint->m[0][2] - joint->m[2][0]) * scale;
        z = (joint->m[1][2] + joint->m[2][1]) * scale;
        x = (joint->m[1][0] + joint->m[0][1]) * scale;
    } else if (!(m11 > m00) && !(m22 > m00)) {
        f32 scale = __sqrtf((m00 - (m11 + m22)) + 1.0f);
        x = scale * 0.5f;
        if (scale != 0.0f) {
            scale = 0.5f / scale;
        }
        w = (joint->m[2][1] - joint->m[1][2]) * scale;
        y = (joint->m[0][1] + joint->m[1][0]) * scale;
        z = (joint->m[0][2] + joint->m[2][0]) * scale;
    } else {
        f32 scale = __sqrtf((m22 - (m00 + m11)) + 1.0f);
        z = scale * 0.5f;
        if (scale != 0.0f) {
            scale = 0.5f / scale;
        }
        w = (joint->m[1][0] - joint->m[0][1]) * scale;
        x = (joint->m[2][0] + joint->m[0][2]) * scale;
        y = (joint->m[2][1] + joint->m[1][2]) * scale;
    }
    rotation->x = x;
    rotation->y = y;
    rotation->z = z;
    rotation->w = w;
    return 1;
}

}
