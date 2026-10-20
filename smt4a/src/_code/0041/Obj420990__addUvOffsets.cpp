#include "classes/Obj420990.h"

/* Refreshes the source, then shifts both quads' texture coordinates by their offsets. */
void Obj420990::addUvOffsets()
{
    child->refreshOffsets();
    vertices()[0].u += rects->offsetA[0];
    vertices()[0].v += rects->offsetA[1];
    vertices()[1].u += rects->offsetA[0];
    vertices()[1].v += rects->offsetA[1];
    vertices()[2].u += rects->offsetA[0];
    vertices()[2].v += rects->offsetA[1];
    vertices()[3].u += rects->offsetA[0];
    vertices()[3].v += rects->offsetA[1];
    vertices()[4].u += rects->offsetB[0];
    vertices()[4].v += rects->offsetB[1];
    vertices()[5].u += rects->offsetB[0];
    vertices()[5].v += rects->offsetB[1];
    vertices()[6].u += rects->offsetB[0];
    vertices()[6].v += rects->offsetB[1];
    vertices()[7].u += rects->offsetB[0];
    vertices()[7].v += rects->offsetB[1];
}
