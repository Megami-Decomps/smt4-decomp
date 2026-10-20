#include "classes/Obj420990.h"

/* Refreshes the source, then gives each quad's four vertices the corners of its UV rectangle:
 * (left, top), (left, bottom), (right, top), (right, bottom). */
void Obj420990::setUvRects()
{
    child->refreshRects();
    vertices()[0].u = rects->rectA[0];
    vertices()[0].v = rects->rectA[1];
    vertices()[1].u = rects->rectA[0];
    vertices()[1].v = rects->rectA[3];
    vertices()[2].u = rects->rectA[2];
    vertices()[2].v = rects->rectA[1];
    vertices()[3].u = rects->rectA[2];
    vertices()[3].v = rects->rectA[3];
    vertices()[4].u = rects->rectB[0];
    vertices()[4].v = rects->rectB[1];
    vertices()[5].u = rects->rectB[0];
    vertices()[5].v = rects->rectB[3];
    vertices()[6].u = rects->rectB[2];
    vertices()[6].v = rects->rectB[1];
    vertices()[7].u = rects->rectB[2];
    vertices()[7].v = rects->rectB[3];
}
