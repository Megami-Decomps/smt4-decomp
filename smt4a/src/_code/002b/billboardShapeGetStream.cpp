#include "gfx/BillboardShape.h"

extern "C" {

/* Points `out` at the stream of the shape that `attribute` selects (the last matching bit wins) and gives it the
 * shape's stride. */
void billboardShapeGetStream(BillboardShape *shape, u32 attribute, BillboardStream *out)
{
    if ((attribute & BILLBOARD_ATTRIBUTE_POSITION) != 0) {
        out->data = shape->positions;
    }
    if ((attribute & BILLBOARD_ATTRIBUTE_COLOR) != 0) {
        out->data = shape->colors;
    }
    if ((attribute & BILLBOARD_ATTRIBUTE_SIZE) != 0) {
        out->data = shape->sizes;
    }
    if ((attribute & BILLBOARD_ATTRIBUTE_TEXCOORD) != 0) {
        out->data = shape->texCoords;
    }
    if ((attribute & BILLBOARD_ATTRIBUTE_ROTATION) != 0) {
        out->data = shape->rotations;
    }
    if ((attribute & BILLBOARD_ATTRIBUTE_TEXCOORD_ALT) != 0) {
        out->data = shape->texCoordsAlt;
    }
    out->stride = shape->stride;
}

} /* extern "C" */
