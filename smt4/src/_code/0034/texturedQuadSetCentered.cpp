#include "gfx/TexturedQuad.h"

/* Rebuilds a centered quad from its horizontal and vertical half-extents. */
extern "C" void texturedQuadSetCentered(TexturedQuad *quad)
{
    texturedQuadSetPosition(&quad->vertices[0], -quad->parameters->halfWidth,
                             quad->parameters->halfHeight, 0.0f);
    texturedQuadSetPosition(&quad->vertices[1], -quad->parameters->halfWidth,
                             -quad->parameters->halfHeight, 0.0f);
    texturedQuadSetPosition(&quad->vertices[2], quad->parameters->halfWidth,
                             quad->parameters->halfHeight, 0.0f);
    texturedQuadSetPosition(&quad->vertices[3], quad->parameters->halfWidth,
                             -quad->parameters->halfHeight, 0.0f);
}
