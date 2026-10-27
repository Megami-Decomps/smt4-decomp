/* NON_MATCHING: stream sizes now built through per-stream flag temporaries and the fill loops bound with `vertexCount * 4` (the unrolled loops lose their odd-count prologue): 166 of 166 rows, differing only in register numbering of the first two stream temporaries and in where vertexCount is loaded relative to the pointer stores. Debug-trace calls (file, lines 271 and 312) match. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"

/* Which vertex streams a primitive carries (AsdPrimRenderData.flags). */
#define PRIM_STREAM_POSITION 0x01   /* 3 floats per vertex */
#define PRIM_STREAM_COLOR_F32 0x02  /* 4 floats per vertex */
#define PRIM_STREAM_UV 0x04         /* 2 floats per vertex */
#define PRIM_STREAM_NORMAL 0x08     /* 3 floats per vertex */
#define PRIM_STREAM_TANGENT 0x10    /* 3 floats per vertex */
#define PRIM_STREAM_COLOR_U8 0x20   /* 4 bytes per vertex */

/* A primitive's vertex data: one allocation holding the streams back to back, plus an index list. */
struct AsdPrimRenderData {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 flags;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ u32 vertexCount;
    /* 0x10 */ u8 unk10[8];
    /* 0x18 */ u32 indexCount;
    /* 0x1C */ u8 unk1C[0x10];
    /* 0x2C */ u8 *storage;
    /* 0x30 */ f32 *positions;
    /* 0x34 */ f32 *colorsF32;
    /* 0x38 */ u8 *colorsU8;
    /* 0x3C */ u8 *uvs;
    /* 0x40 */ u8 unk40[8];
    /* 0x48 */ u16 *indices;
};

extern "C" {

void *memAlloc(u32 heap, u32 alignment, u32 flags, u32 bytes, u32 auxiliaryAlignment, u32 enabled);
void *asdMemoryAllocAligned(u32 heap, u32 alignment, u32 flags, u32 bytes, u32 auxiliaryAlignment, u32 enabled);

/* Allocates the primitive's vertex streams and index list and initialises them: white float colors,
 * white byte colors and zero indices. */
void FUN_00412854(AsdPrimRenderData *prim)
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
    prim->storage = (u8 *)memAlloc(0x10000, 0x100, 0, bytes, 0x10, 1);
    offset = 0;
    if ((prim->flags & PRIM_STREAM_POSITION) != 0) {
        prim->positions = (f32 *)prim->storage;
        offset = prim->vertexCount * 12;
    }
    if ((prim->flags & PRIM_STREAM_COLOR_F32) != 0) {
        prim->colorsF32 = (f32 *)(prim->storage + offset);
        offset += prim->vertexCount * 16;
        for (i = 0; i < prim->vertexCount * 4; i++) {
            prim->colorsF32[i] = 1.0f;
        }
    }
    if ((prim->flags & PRIM_STREAM_COLOR_U8) != 0) {
        prim->colorsU8 = prim->storage + offset;
        offset += prim->vertexCount * 4;
        for (i = 0; i < prim->vertexCount * 4; i++) {
            prim->colorsU8[i] = 0xFF;
        }
    }
    if ((prim->flags & PRIM_STREAM_UV) != 0) {
        prim->uvs = prim->storage + offset;
    }
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Prim\\AsdPrimRenderData.cpp", 312);
    prim->indices = (u16 *)asdMemoryAllocAligned(0x10000, 0x100, 0, prim->indexCount << 1, 0x10, 1);
    for (i = 0; i < prim->indexCount; i++) {
        prim->indices[i] = 0;
    }
}

} /* extern "C" */
