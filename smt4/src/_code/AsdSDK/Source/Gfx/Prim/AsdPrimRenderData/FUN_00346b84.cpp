/* NON_MATCHING: retail builds the three attribute descriptors with separate stores and does not reload r1 around the trace call; built copies them from a constant and reloads (230 rows vs 231); the buffer layout is the same. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

/* One vertex attribute description handed to the command builder (8 bytes). */
typedef struct AttrDesc {
    u8 format;
    u8 components;
    u8 kind;
    u8 flag;
    u32 stride;
} AttrDesc;

/* A primitive's render data: which attribute arrays it has (flags) and where they live in one
 * shared buffer (only the fields used here, by their offsets). */
typedef struct PrimRenderData {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u32 flags;           /* 1 positions, 2 float colours, 4 texture coords, 0x20 byte colours, 0x100 GPU buffer */
    /* 0x008 */ u8 unk008[4];
    /* 0x00C */ u32 vertexCount;
    /* 0x010 */ u8 unk010[8];
    /* 0x018 */ u32 indexCount;
    /* 0x01C */ u8 unk01C[0x10];
    /* 0x02C */ u8 *buffer;
    /* 0x030 */ f32 *positions;
    /* 0x034 */ f32 *colors;
    /* 0x038 */ u8 *byteColors;
    /* 0x03C */ u8 *texCoords;
    /* 0x040 */ u8 unk040[8];
    /* 0x048 */ u16 *indices;
    /* 0x04C */ u8 commands[0x790];
    /* 0x7DC */ u32 indexPhysAddress;
    /* 0x7E0 */ u32 indexPhysCount;
    /* 0x7E4 */ u8 indexPhysFlag;
} PrimRenderData;

extern const char DAT_004094c8[];    /* source path used by the trace calls */

u32 FUN_0034711c(PrimRenderData *prim, s32 line);
void *memAlloc(u32 size, u32 alignment, u32 a, u32 name, u32 b, u32 c);
void *asdMemoryAllocAligned(u32 size, u32 alignment, u32 a, u32 count, u32 b, u32 c);
u32 osVirtToPhysAddress(void *address);
void FUN_0023b9d0(void *commands, AttrDesc *attribute, u32 physAddress, s32 id);

/* Allocates the primitive's shared vertex buffer and fills in its attribute arrays (positions,
 * colours, byte colours, texture coordinates, indices), registering each with the command list
 * when the primitive lives in GPU memory. */
void FUN_00346b84(PrimRenderData *prim)
{
    AttrDesc positionDesc = {0, 1, 0xFF, 0xFF, 0};
    AttrDesc texCoordDesc = {0, 1, 0xFF, 0xFF, 0};
    AttrDesc colorDesc = {0, 1, 0xFF, 0xFF, 0};
    s32 offset;

    if ((prim->flags & 0x100) != 0) {
        asdDebugTrace(DAT_004094c8, 314);
        prim->buffer = (u8 *)memAlloc(0x10000, 0x100, 0, FUN_0034711c(prim, 314), 16, 1);
    } else {
        asdDebugTrace(DAT_004094c8, 311);
        prim->buffer = (u8 *)memAlloc(0x100, 0x100, 0, FUN_0034711c(prim, 311), 16, 1);
    }
    offset = 0;
    if ((prim->flags & 1) != 0) {
        prim->positions = (f32 *)prim->buffer;
        offset = prim->vertexCount * 12;
        if ((prim->flags & 0x100) != 0) {
            positionDesc.kind = 0;
            FUN_0023b9d0(prim->commands, &positionDesc, osVirtToPhysAddress(prim->positions), 11);
        }
    }
    if ((prim->flags & 2) != 0) {
        prim->colors = (f32 *)(prim->buffer + offset);
        offset += prim->vertexCount * 16;
        for (u32 i = 0; i < prim->vertexCount * 4; i++) {
            prim->colors[i] = 1.0f;
        }
        if ((prim->flags & 0x100) != 0) {
            colorDesc.kind = 1;
            FUN_0023b9d0(prim->commands, &colorDesc, osVirtToPhysAddress(prim->colors), 15);
        }
    }
    if ((prim->flags & 0x20) != 0) {
        prim->byteColors = prim->buffer + offset;
        offset += prim->vertexCount * 4;
        for (u32 i = 0; i < prim->vertexCount * 4; i++) {
            prim->byteColors[i] = 0xFF;
        }
        if ((prim->flags & 0x100) != 0) {
            colorDesc.kind = 1;
            FUN_0023b9d0(prim->commands, &colorDesc, osVirtToPhysAddress(prim->byteColors), 13);
        }
    }
    if ((prim->flags & 4) != 0) {
        prim->texCoords = prim->buffer + offset;
        if ((prim->flags & 0x100) != 0) {
            texCoordDesc.kind = 2;
            FUN_0023b9d0(prim->commands, &texCoordDesc, osVirtToPhysAddress(prim->texCoords), 7);
        }
    }
    if ((prim->flags & 0x100) != 0) {
        asdDebugTrace(DAT_004094c8, 386);
        prim->indices = (u16 *)asdMemoryAllocAligned(0x10000, 0x100, 0, prim->indexCount * 2, 16, 1);
    } else {
        asdDebugTrace(DAT_004094c8, 383);
        prim->indices = (u16 *)asdMemoryAllocAligned(0x100, 0x100, 0, prim->indexCount * 2, 16, 1);
    }
    for (u32 i = 0; i < prim->indexCount; i++) {
        prim->indices[i] = 0;
    }
    if ((prim->flags & 0x100) != 0) {
        prim->indexPhysAddress = osVirtToPhysAddress(prim->indices);
        prim->indexPhysCount = prim->indexCount;
        prim->indexPhysFlag = 0;
    }
}

}
