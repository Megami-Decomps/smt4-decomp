/* NON_MATCHING: the copy now indexes by whole triangle groups as retail does; remaining: retail computes the group count
   after the count guard (ours hoists it before), multiplies stride * i in the mla, and picks other registers. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {

extern const char g_effGeometrySourceFileName[]; /* "c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Gfx\\Effect\\effGeometry.cpp": __FILE__ */

/* A primitive slot: 0x4C bytes, its index buffer at 0x48. */
typedef struct GeomSlot {
    u8 unk00[0x48];
    u16 *indices; /* 0x48 */
} GeomSlot;

typedef struct GeomObject {
    /* 0x00 */ u16 kind;
    /* 0x02 */ u16 vertexCount;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ GeomSlot *slot;
    /* 0x0C */ u8 unk0C[0x48];
    /* 0x54 */ u32 flags;
} GeomObject;

void *asdMemoryAllocTraced(u32 size, const char *file, s32 line);
GeomSlot *slotReset(void *memory);

/* Creates a geometry object holding `count` copies of an index list; copy i is offset by i * vertexStride. */
GeomObject *effGeomCreateRepeatedIndexList(s32 count, s32 triangles, s32 vertexStride, const u16 *source, u16 kind)
{
    s32 vertexCount = count * vertexStride;
    s32 indexCount = count * triangles * 3;
    s32 indicesPerTriangleList = triangles * 3;
    asdDebugTrace(g_effGeometrySourceFileName, 113);
    GeomObject *object = (GeomObject *)memAlloc(0x10000, 0x100, 0, 0x58, 0x10, 1);
    void *memory = asdMemoryAllocTraced(0x4C, g_effGeometrySourceFileName, 115);
    GeomSlot *slot = memory != NULL ? slotReset(memory) : NULL;
    slotInit(slot, 0x25, indexCount, vertexCount);
    object->kind = kind;
    object->slot = slot;
    object->vertexCount = vertexCount;
    object->flags = 0xA5;
    u16 *indices = slot->indices;
    for (s32 i = 0; i < count; i++) {
        s32 groups = (indicesPerTriangleList + 2) / 3;
        for (s32 k = 0; k < groups * 3; k++) {
            indices[groups * i * 3 + k] = source[k] + i * vertexStride;
        }
    }
    return object;
}

} /* extern "C" */
