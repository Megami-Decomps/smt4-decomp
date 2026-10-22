/* NON_MATCHING: retail keeps each flag/mask pair as `tst; tstne` with conditionally executed loads and `blne`, computing the size in r0 first; armcc here branches around each call and fuses the first test into `and; tst`. */
#include "common.h"

/* A dynamic mesh: per-attribute vertex arrays and an index array, enabled by flags. */
struct DynamicMesh {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 flags;       /* 0x100: has buffers; attribute bits 0x1/0x2/0x20/0x4/0x80 */
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ s32 vertexCount;
    /* 0x10 */ u8 unk10[8];
    /* 0x18 */ s32 indexCount;
    /* 0x1C */ u8 unk1c[0x14];
    /* 0x30 */ void *positions; /* 12 bytes per vertex */
    /* 0x34 */ void *colors;    /* 16 bytes per vertex */
    /* 0x38 */ void *packed;    /* 4 bytes per vertex */
    /* 0x3C */ void *texCoords; /* 8 bytes per vertex */
    /* 0x40 */ u8 unk40[8];
    /* 0x48 */ u16 *indices;
};

extern "C" {

void FUN_002c2424(void *data, u32 size);

/* Flush the attribute arrays selected by mask (and present in the mesh) to memory. */
void FUN_00347198(DynamicMesh *mesh, u32 mask)
{
    if ((mesh->flags & 0x100) == 0) {
        return;
    }
    if ((mesh->flags & 0x1) && (mask & 0x1)) {
        FUN_002c2424(mesh->positions, mesh->vertexCount * 12);
    }
    if ((mesh->flags & 0x2) && (mask & 0x2)) {
        FUN_002c2424(mesh->colors, mesh->vertexCount * 16);
    }
    if ((mesh->flags & 0x20) && (mask & 0x20)) {
        FUN_002c2424(mesh->packed, mesh->vertexCount * 4);
    }
    if ((mesh->flags & 0x4) && (mask & 0x4)) {
        FUN_002c2424(mesh->texCoords, mesh->vertexCount * 8);
    }
    if ((mesh->flags & 0x80) && (mask & 0x80)) {
        FUN_002c2424(mesh->indices, mesh->indexCount * 2);
    }
}

} /* extern "C" */
