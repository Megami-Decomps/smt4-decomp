/* NON_MATCHING: stream sizes now built through per-stream flag temporaries and the fill loops bound with `vertexCount * 4` (the unrolled loops lose their odd-count prologue): 166 of 166 rows, differing only in register numbering of the first two stream temporaries and in where vertexCount is loaded relative to the pointer stores. Debug-trace calls (file, lines 271 and 312) match. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Gfx/Prim/AsdPrimRenderData.h"

extern "C" {

void *memAlloc(u32 heap, u32 alignment, u32 flags, u32 bytes, u32 auxiliaryAlignment, u32 enabled);
void *asdMemoryAllocAligned(u32 heap, u32 alignment, u32 flags, u32 bytes, u32 auxiliaryAlignment, u32 enabled);

/* Allocates the primitive's vertex streams and index list and initialises them: white float colors,
 * white byte colors and zero indices. */
void FUN_00412854(PrimRenderData *prim)
{
    u32 offset;
    u32 i;

    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Prim\\AsdPrimRenderData.cpp", 271);
    u32 positionBytes = prim->flags & PRIM_STREAM_POSITION;
    if (positionBytes != 0) {
        positionBytes = prim->vertexCount * 12;
    }
    u32 streamBytes = prim->flags & PRIM_STREAM_COLOR_F32;
    if (streamBytes != 0) {
        streamBytes = prim->vertexCount << 4;
    }
    streamBytes += positionBytes;
    u32 bytes = streamBytes;
    streamBytes = prim->flags & PRIM_STREAM_COLOR_U8;
    if (streamBytes != 0) {
        streamBytes = prim->vertexCount << 2;
    }
    bytes += streamBytes;
    streamBytes = prim->flags & PRIM_STREAM_UV;
    if (streamBytes != 0) {
        streamBytes = prim->vertexCount << 3;
    }
    bytes += streamBytes;
    streamBytes = prim->flags & PRIM_STREAM_NORMAL;
    if (streamBytes != 0) {
        streamBytes = prim->vertexCount * 12;
    }
    bytes += streamBytes;
    streamBytes = prim->flags & PRIM_STREAM_TANGENT;
    if (streamBytes != 0) {
        streamBytes = prim->vertexCount * 12;
    }
    bytes += streamBytes;
    prim->buffer = (u8 *)memAlloc(0x10000, 0x100, 0, bytes, 0x10, 1);
    offset = 0;
    if ((prim->flags & PRIM_STREAM_POSITION) != 0) {
        prim->positions = (f32 *)prim->buffer;
        offset = prim->vertexCount * 12;
    }
    if ((prim->flags & PRIM_STREAM_COLOR_F32) != 0) {
        prim->colors = (f32 *)(prim->buffer + offset);
        offset += prim->vertexCount * 16;
        for (i = 0; i < prim->vertexCount * 4; i++) {
            prim->colors[i] = 1.0f;
        }
    }
    if ((prim->flags & PRIM_STREAM_COLOR_U8) != 0) {
        prim->byteColors = prim->buffer + offset;
        offset += prim->vertexCount * 4;
        for (i = 0; i < prim->vertexCount * 4; i++) {
            prim->byteColors[i] = 0xFF;
        }
    }
    if ((prim->flags & PRIM_STREAM_UV) != 0) {
        prim->texCoords = prim->buffer + offset;
    }
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Prim\\AsdPrimRenderData.cpp", 312);
    prim->indices = (u16 *)asdMemoryAllocAligned(0x10000, 0x100, 0, prim->indexCount << 1, 0x10, 1);
    for (i = 0; i < prim->indexCount; i++) {
        prim->indices[i] = 0;
    }
}

} /* extern "C" */
