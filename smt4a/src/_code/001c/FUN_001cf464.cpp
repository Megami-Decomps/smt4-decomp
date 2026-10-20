/* NON_MATCHING: register allocation and case-block order differ (retail hoists the stream address and a zero into registers across the loop); the jump table is a
 * __switch$$ relocation in the build and raw case addresses in retail. */
#include "shard/S2GfxParticleShape.h"

extern "C" {

#define GL_FLOAT 0x1406

extern u8 g_particleShapeVertexStream; /* the stream-size accumulator AddVertexStreamSize works on */

extern u32 nw_gfx_ParticleShape_AddVertexStreamSize(u8 *stream, u32 components, u32 count);

/* Sizes the vertex streams of a particle shape's attribute list into `calc`: each used attribute
 * adds a stream of 3, 1 or 2 floats by its component type, then the total is appended 32-byte aligned. */
void FUN_001cf464(SizeCalculator *calc, ParticleAttributeList *list)
{
    u32 streamSize = 0;
    u32 vertexCount = list->vertexCount;
    RelativeOffset *attribute = (RelativeOffset *)relativeOffsetTarget(&list->attributes[0]);
    RelativeOffset *end = attribute + list->attributeCount;
    u32 alignment;

    for (; attribute != end; attribute++) {
        if (((ParticleAttribute *)relativeOffsetTarget(attribute))->kind == 0x40000000) {
            continue;
        }
        switch (((ParticleAttribute *)relativeOffsetTarget(attribute))->componentType) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 8:
            streamSize = nw_gfx_ParticleShape_AddVertexStreamSize(&g_particleShapeVertexStream, 3, vertexCount);
            break;
        case 4:
        case 7:
            streamSize = nw_gfx_ParticleShape_AddVertexStreamSize(&g_particleShapeVertexStream, 1, vertexCount);
            break;
        case 5:
        case 6:
            streamSize = nw_gfx_ParticleShape_AddVertexStreamSize(&g_particleShapeVertexStream, 2, vertexCount);
            break;
        }
    }

    alignment = calc->alignment;
    calc->alignment = 32;
    if (calc->maxAlignment < 32) {
        calc->maxAlignment = 32;
    }
    calc->alignment = alignment;
    calc->size = ((calc->size + 31) & ~31u) + streamSize;
    if (calc->maxAlignment < alignment) {
        calc->maxAlignment = alignment;
    }
}

} /* extern "C" */
