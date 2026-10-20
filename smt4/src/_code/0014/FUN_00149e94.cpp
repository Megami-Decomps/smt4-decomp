/* NON_MATCHING: register allocation (retail keeps a zero in r8 for the null pointers and loads each stream's relative pointer twice) */
#include "shard/S1NwGfx.h"

extern "C" {

u32 nw_gfx_ParticleShape_AddVertexStreamSize(u32 type, u32 components, u32 vertexCount);

/* Layout size of a shape's vertex streams: the size reported for the last stream (float components). */
void FUN_00149e94(SizeCalculator *calc, ShapeStreamList *list)
{
    u32 vertexCount = list->vertexCount;
    u32 size = 0;
    const RelativePointer *it = (const RelativePointer *)list->streams.get();
    const RelativePointer *end = it + list->count;

    for (; it != end; it++) {
        const ShapeStream *stream = (const ShapeStream *)it->get();
        if (((const ShapeStream *)it->get())->flags != 0x40000000) {
            switch (stream->type) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 8:
                size = nw_gfx_ParticleShape_AddVertexStreamSize(0x1406, 3, vertexCount);
                break;
            case 4:
            case 7:
                size = nw_gfx_ParticleShape_AddVertexStreamSize(0x1406, 1, vertexCount);
                break;
            case 5:
            case 6:
                size = nw_gfx_ParticleShape_AddVertexStreamSize(0x1406, 2, vertexCount);
                break;
            }
        }
    }

    u32 prev = calc->alignment;
    calc->alignment = 32;
    calc->maxAlignment = calc->maxAlignment >= 32 ? calc->maxAlignment : 32;
    calc->alignment = prev;
    calc->size = ((calc->size + 31) & ~31u) + size;
    calc->maxAlignment = prev <= calc->maxAlignment ? calc->maxAlignment : prev;
}

} /* extern "C" */
