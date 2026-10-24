/* NON_MATCHING: twin of the IV FUN_002a3ab0 - retail holds the matrix and base quaternion in VFP registers across the loop and passes the result halves through a stack pair; the VFP load/multiply-accumulate order differs. */
#include "common.h"

namespace {
struct Vec4 {
    f32 x, y, z, w;
};

struct SkelOwner {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 type;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ void *object;
};

/* A joint of the pose chain. */
struct SkelNode {
    /* 0x00 */ Vec4 base;
    /* 0x10 */ u8 unk10[0x30];
    /* 0x40 */ Vec4 local;
    /* 0x50 */ Vec4 rotation;
    /* 0x60 */ f32 scaleA;
    /* 0x64 */ u8 unk64[4];
    /* 0x68 */ u32 flags;                /* 4: pin the y component, 0x80: scale the local vector */
    /* 0x6c */ u8 unk6c[8];
    /* 0x74 */ f32 scaleB;
    /* 0x78 */ u8 unk78[0x14];
    /* 0x8c */ SkelNode *firstChild;
    /* 0x90 */ SkelOwner *owner;
    /* 0x94 */ u8 unk94[0x18];
    /* 0xac */ SkelNode *next;
};

/* The scratch workspace of the quaternion routines. */
struct SkelWorkspace {
    /* 0x000 */ u8 unk000[0x100];
    /* 0x100 */ Vec4 quaternion;
    /* 0x110 */ Vec4 offset;
    /* 0x120 */ u8 unk120[0x20];
    /* 0x140 */ f32 matrix[16];          /* built from the quaternion */
};

/* A row of the per-type handler table (0x44 bytes). */
struct SkelHandler {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ void (*apply)(void *object, Vec4 rotation);
    /* 0x24 */ u8 unk24[0x20];
};
}

extern "C" {
extern SkelWorkspace DAT_006471dc;
extern SkelHandler g_handlerTable[];
void FUN_001bc460(void);

/* Poses the joint chain below `root`: the workspace quaternion is root's rotation plus the given offset, and
   every child's local vector is rotated by the resulting matrix and accumulated into it before the child's
   type handler gets the result. */
void FUN_001b4eb8(SkelNode *root, Vec4 *offsetIn)
{
    SkelWorkspace *workspace = &DAT_006471dc;
    workspace->quaternion = *offsetIn;
    root->local = *offsetIn;
    workspace->offset = root->base;
    workspace->quaternion.x = workspace->quaternion.x + workspace->offset.x;
    workspace->quaternion.y = workspace->quaternion.y + workspace->offset.y;
    workspace->quaternion.z = workspace->quaternion.z + workspace->offset.z;
    workspace->quaternion.w = workspace->quaternion.w + workspace->offset.w;
    Vec4 sum = workspace->quaternion;
    workspace->quaternion = root->rotation;
    FUN_001bc460();
    f32 scale = root->scaleA * root->scaleB;
    f32 matrix[16];
    for (s32 i = 0; i < 16; i++) {
        matrix[i] = workspace->matrix[i];
    }
    for (SkelNode *node = root->firstChild; node != NULL; node = node->next) {
        workspace->quaternion = sum;
        if ((node->flags & 4) != 0) {
            workspace->quaternion.y = 5.0f;
        }
        workspace->offset = node->local;
        if ((node->flags & 0x80) != 0) {
            workspace->offset.x = workspace->offset.x * scale;
            workspace->offset.y = workspace->offset.y * scale;
            workspace->offset.z = workspace->offset.z * scale;
            workspace->offset.w = workspace->offset.w * scale;
        }
        for (s32 i = 0; i < 16; i++) {
            workspace->matrix[i] = matrix[i];
        }
        f32 x = workspace->offset.x;
        f32 y = workspace->offset.y;
        f32 z = workspace->offset.z;
        workspace->offset.x = x * matrix[0] + y * matrix[4] + z * matrix[8];
        workspace->offset.y = x * matrix[1] + y * matrix[5] + z * matrix[9];
        workspace->offset.z = x * matrix[2] + y * matrix[6] + z * matrix[10];
        workspace->offset.w = x * matrix[3] + y * matrix[7] + z * matrix[11];
        workspace->quaternion.x = workspace->quaternion.x + workspace->offset.x;
        workspace->quaternion.y = workspace->quaternion.y + workspace->offset.y;
        workspace->quaternion.z = workspace->quaternion.z + workspace->offset.z;
        workspace->quaternion.w = workspace->quaternion.w + workspace->offset.w;
        SkelOwner *owner = node->owner;
        void (*apply)(void *, Vec4) = g_handlerTable[owner->type].apply;
        if (apply != NULL) {
            apply(owner->object, workspace->quaternion);
        }
    }
}

} /* extern "C" */
