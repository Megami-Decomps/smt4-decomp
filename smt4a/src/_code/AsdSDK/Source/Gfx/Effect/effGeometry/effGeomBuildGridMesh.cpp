/* NON_MATCHING: allocations, calls and loops match; armcc keeps vertexCount, the tag and the buffers in other registers and computes the section's (indicesPerSection+2)/3 before the repeats guard (retail after it). */
#include "shard/W6_W6Match2_GeometryResources.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"

/* Draw flags are beyond the common GeometryResources prefix. */
struct RepeatedGeometryResourceView {
    GeometryResources resources;
    u8 unk10[0x44];
    u32 drawFlags;
};

extern "C" {
extern const char g_effGeometrySourceFileName[];
void *asdMemoryAllocTraced(s32 bytes, const char *file, s32 line);
OwnedBufferPair *slotReset(OwnedBufferPair *buffers);
void slotInit(OwnedBufferPair *buffers, s32 format, s32 indexCount, s32 vertexCount);

GeometryResources *effGeomBuildGridMesh(s32 repeats, const u16 *pattern, s32 verticesPerSection, u16 flags)
{
    s32 trianglesPerSection = (verticesPerSection - 1) * 2;
    s32 vertexCount = (repeats + 1) * verticesPerSection;
    s32 indicesPerSection = trianglesPerSection * 3;
    s32 indexCount = repeats * trianglesPerSection * 3;
    asdDebugTrace(g_effGeometrySourceFileName, 0x71);
    RepeatedGeometryResourceView *geometry = (RepeatedGeometryResourceView *)memAlloc(0x10000, 0x100, 0, 0x58, 0x10, 1);
    OwnedBufferPair *memory = (OwnedBufferPair *)asdMemoryAllocTraced(sizeof(OwnedBufferPair), g_effGeometrySourceFileName, 0x73);
    OwnedBufferPair *buffers = memory != NULL ? slotReset(memory) : NULL;
    slotInit(buffers, 0x25, indexCount, vertexCount);
    geometry->resources.flags = flags;
    geometry->resources.buffers = buffers;
    geometry->resources.vertexCount = vertexCount;
    geometry->drawFlags = 0xa5;
    u16 *indices = buffers->indices;
    for (s32 section = 0; section < repeats; ++section) {
        s32 triangleCount = (indicesPerSection + 2) / 3;
        for (s32 i = 0; i < triangleCount * 3; ++i)
            indices[triangleCount * section * 3 + i] = (u16)(pattern[i] + (u16)verticesPerSection * (u16)section);
    }
    return &geometry->resources;
}
}
