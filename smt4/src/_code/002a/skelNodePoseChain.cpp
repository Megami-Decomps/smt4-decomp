/* NON_MATCHING: retail holds the matrix and base quaternion in VFP registers s17-s31 across the loop and passes the two result halves through a stack pair; the order of the VFP loads/multiply-accumulates differs. */
#include "common.h"
#include "shard/Resource.h"
#include "gfx/VectorScratch.h"

namespace {

/* A joint of the pose chain. */
struct SkelNode {
    /* 0x00 */ Vector4 base;
    /* 0x10 */ u8 unk10[0x30];
    /* 0x40 */ Vector4 local;
    /* 0x50 */ Vector4 rotation;
    /* 0x60 */ f32 scaleA;
    /* 0x64 */ u8 unk64[4];
    /* 0x68 */ u32 flags;                /* 4: pin the y component, 0x80: scale the local vector */
    /* 0x6c */ u8 unk6c[8];
    /* 0x74 */ f32 scaleB;
    /* 0x78 */ u8 unk78[0x14];
    /* 0x8c */ SkelNode *firstChild;
    /* 0x90 */ Resource *resource;
    /* 0x94 */ u8 unk94[0x18];
    /* 0xac */ SkelNode *next;
};

/* The scratch workspace of the quaternion routines. */

}

extern "C" {
void gfxQuaternionWorkspaceBuildMatrix(void);

/* Poses the joint chain below `root`: the workspace quaternion is root's rotation plus the given offset, and
   every child's local vector is rotated by the resulting matrix and accumulated into it before the child's
   type handler gets the result. */
void skelNodePoseChain(SkelNode *root, Vector4 *offsetIn)
{
    VectorScratch *workspace = &g_vectorScratch;
    workspace->first.vector = *offsetIn;
    root->local = *offsetIn;
    workspace->second.vector = root->base;
    workspace->first.vector.x = workspace->first.vector.x + workspace->second.vector.x;
    workspace->first.vector.y = workspace->first.vector.y + workspace->second.vector.y;
    workspace->first.vector.z = workspace->first.vector.z + workspace->second.vector.z;
    workspace->first.vector.w = workspace->first.vector.w + workspace->second.vector.w;
    Vector4 sum = workspace->first.vector;
    workspace->first.vector = root->rotation;
    gfxQuaternionWorkspaceBuildMatrix();
    f32 scale = root->scaleA * root->scaleB;
    f32 matrix[16];
    for (s32 i = 0; i < 16; i++) {
        matrix[i] = workspace->matrix.matrix.values[i];
    }
    for (SkelNode *node = root->firstChild; node != NULL; node = node->next) {
        workspace->first.vector = sum;
        if ((node->flags & 4) != 0) {
            workspace->first.vector.y = 5.0f;
        }
        workspace->second.vector = node->local;
        if ((node->flags & 0x80) != 0) {
            workspace->second.vector.x = workspace->second.vector.x * scale;
            workspace->second.vector.y = workspace->second.vector.y * scale;
            workspace->second.vector.z = workspace->second.vector.z * scale;
            workspace->second.vector.w = workspace->second.vector.w * scale;
        }
        for (s32 i = 0; i < 16; i++) {
            workspace->matrix.matrix.values[i] = matrix[i];
        }
        f32 x = workspace->second.vector.x;
        f32 y = workspace->second.vector.y;
        f32 z = workspace->second.vector.z;
        workspace->second.vector.x = x * matrix[0] + y * matrix[4] + z * matrix[8];
        workspace->second.vector.y = x * matrix[1] + y * matrix[5] + z * matrix[9];
        workspace->second.vector.z = x * matrix[2] + y * matrix[6] + z * matrix[10];
        workspace->second.vector.w = x * matrix[3] + y * matrix[7] + z * matrix[11];
        workspace->first.vector.x = workspace->first.vector.x + workspace->second.vector.x;
        workspace->first.vector.y = workspace->first.vector.y + workspace->second.vector.y;
        workspace->first.vector.z = workspace->first.vector.z + workspace->second.vector.z;
        workspace->first.vector.w = workspace->first.vector.w + workspace->second.vector.w;
        Resource *resource = node->resource;
        /* The position handler; retail passes the vector by value here. */
        void (*apply)(void *, Vector4) = reinterpret_cast<void (*)(void *, Vector4)>(g_handlerTable[resource->type].setPosition);
        if (apply != NULL) {
            apply(resource->data, workspace->first.vector);
        }
    }
}

} /* extern "C" */
