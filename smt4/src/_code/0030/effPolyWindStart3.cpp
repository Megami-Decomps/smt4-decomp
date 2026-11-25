#include "AsdSDK/Source/Gfx/Effect/PolyWindStart.h"

extern "C" u8 DAT_00472560[4];

/* Restarts the wind polygon effect with unused segments and default colors. */
extern "C" void effPolyWindStart3(PolyObject *object)
{
    u32 index;
    const PolyWindBlock &block = *(const PolyWindBlock *)object->state;
    const PolyWindParams &params = *(const PolyWindParams *)object->work;
    const u32 segmentCount = params.segments;
    PolyWindStartSegment<0x2C> *segment = (PolyWindStartSegment<0x2C> *)block.data;
    for (index = 0; index < segmentCount; ++index, ++segment) {
        effGeomSetPointColor((EffGeomPointHandle *)block.geom, (u16)index, DAT_00472560);
        segment->id = -1;
    }
}
