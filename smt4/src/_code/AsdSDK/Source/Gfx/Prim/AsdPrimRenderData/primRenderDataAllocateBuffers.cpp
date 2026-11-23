/* NON_MATCHING: 42 lines. The descriptors are nn::gr's BindSymbolVSInput (VertexAttributeDescription, as in
 * vertexAttributeUploadStreams) and primRenderDataVertexBytes takes only the render data. Remaining: the descriptors' frame slots
 * (retail colour +8, texture coordinates +16, positions +24; the build puts positions at +32, the same difference as
 * vertexAttributeUploadStreams), the vertex count loaded before the stream pointer store (retail stores first), and
 * the index allocations' stack arguments stored before the argument loads. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "gfx/RenderTargetState.h"
#include "gfx/VertexAttributeState.h"
#include "AsdSDK/Source/Gfx/Prim/AsdPrimRenderData.h"

extern "C" {

extern const char DAT_004094c8[];    /* source path used by the trace calls */

void *memAlloc(u32 size, u32 alignment, u32 a, u32 name, u32 b, u32 c);
void *asdMemoryAllocAligned(u32 size, u32 alignment, u32 a, u32 count, u32 b, u32 c);
void FUN_0023b9d0(void *commands, const VertexAttributeDescription *attribute, u32 address, u32 format);

/* Allocates the primitive's shared vertex buffer and fills in its attribute arrays (positions,
 * colours, byte colours, texture coordinates, indices), registering each with the command list
 * when the primitive lives in GPU memory. */
void primRenderDataAllocateBuffers(PrimRenderData *prim)
{
    VertexAttributeDescription positionDesc;
    VertexAttributeDescription colorDesc;
    VertexAttributeDescription texCoordDesc;
    s32 offset;

    if ((prim->flags & 0x100) != 0) {
        asdDebugTrace(DAT_004094c8, 314);
        prim->buffer = (u8 *)memAlloc(0x10000, 0x100, 0, primRenderDataVertexBytes(prim), 16, 1);
    } else {
        asdDebugTrace(DAT_004094c8, 311);
        prim->buffer = (u8 *)memAlloc(0x100, 0x100, 0, primRenderDataVertexBytes(prim), 16, 1);
    }
    offset = 0;
    if ((prim->flags & 1) != 0) {
        prim->positions = (f32 *)prim->buffer;
        offset = prim->vertexCount * 12;
        if ((prim->flags & 0x100) != 0) {
            positionDesc.index = 0;
            FUN_0023b9d0(prim->commands, &positionDesc, osVirtToPhysAddress(reinterpret_cast<u32>(prim->positions)), 11);
        }
    }
    if ((prim->flags & 2) != 0) {
        prim->colors = (f32 *)(prim->buffer + offset);
        offset += prim->vertexCount * 16;
        for (u32 i = 0; i < prim->vertexCount * 4; i++) {
            prim->colors[i] = 1.0f;
        }
        if ((prim->flags & 0x100) != 0) {
            colorDesc.index = 1;
            FUN_0023b9d0(prim->commands, &colorDesc, osVirtToPhysAddress(reinterpret_cast<u32>(prim->colors)), 15);
        }
    }
    if ((prim->flags & 0x20) != 0) {
        prim->byteColors = prim->buffer + offset;
        offset += prim->vertexCount * 4;
        for (u32 i = 0; i < prim->vertexCount * 4; i++) {
            prim->byteColors[i] = 0xFF;
        }
        if ((prim->flags & 0x100) != 0) {
            colorDesc.index = 1;
            FUN_0023b9d0(prim->commands, &colorDesc, osVirtToPhysAddress(reinterpret_cast<u32>(prim->byteColors)), 13);
        }
    }
    if ((prim->flags & 4) != 0) {
        prim->texCoords = prim->buffer + offset;
        if ((prim->flags & 0x100) != 0) {
            texCoordDesc.index = 2;
            FUN_0023b9d0(prim->commands, &texCoordDesc, osVirtToPhysAddress(reinterpret_cast<u32>(prim->texCoords)), 7);
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
        prim->indexPhysAddress = osVirtToPhysAddress(reinterpret_cast<u32>(prim->indices));
        prim->indexPhysCount = prim->indexCount;
        prim->indexPhysFlag = 0;
    }
}

}
