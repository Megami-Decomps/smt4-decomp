/* NON_MATCHING: index-count lifetimes and loop strength reduction differ, causing argument homing and different inner-loop registers. */
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
extern const char DAT_0054baf8[];
void *FUN_00178b04(s32 bytes, const char *file, s32 line);
OwnedBufferPair *slotReset(OwnedBufferPair *buffers);
void slotInit(OwnedBufferPair *buffers, s32 format, s32 indexCount, s32 vertexCount);

GeometryResources *FUN_00350d90(s32 repeats, const u16 *pattern, s32 verticesPerSection, u16 flags)
{
    s32 trianglesPerSection = verticesPerSection * 2 - 2;
    s32 vertexCount = (repeats + 1) * verticesPerSection;
    s32 indicesPerSection = trianglesPerSection * 3;
    asdDebugTrace(DAT_0054baf8, 0x71);
    RepeatedGeometryResourceView *geometry = (RepeatedGeometryResourceView *)memAlloc(0x10000, 0x100, 0, 0x58, 0x10, 1);
    OwnedBufferPair *buffers = (OwnedBufferPair *)FUN_00178b04(sizeof(OwnedBufferPair), DAT_0054baf8, 0x73);
    if (buffers)
        buffers = slotReset(buffers);
    slotInit(buffers, 0x25, repeats * trianglesPerSection * 3, vertexCount);
    geometry->resources.flags = flags;
    geometry->resources.buffers = buffers;
    geometry->resources.vertexCount = vertexCount;
    geometry->drawFlags = 0xa5;
    u16 *indices = buffers->indices;
    for (s32 section = 0; section < repeats; ++section) {
        s32 triangleCount = (indicesPerSection + 2) / 3;
        u16 *sectionIndices = indices + triangleCount * section * 3;
        for (s32 i = 0; i < triangleCount * 3; ++i)
            sectionIndices[i] = pattern[i] + verticesPerSection * section;
    }
    return &geometry->resources;
}
}
