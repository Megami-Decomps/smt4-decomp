/* NON_MATCHING: vertex-pointer reload scheduling and pair-copy addressing differ. */
#include "shard/CenteredQuad.h"

// Write the four centered rectangle positions while preserving the other vertex attributes.
extern "C" void FUN_0034b884(CenteredQuad *quad)
{
    quad->vertices[0].position = CenteredQuadPosition(
        -quad->dimensions->halfWidth, quad->dimensions->halfHeight, 0.0f);
    quad->vertices[1].position = CenteredQuadPosition(
        -quad->dimensions->halfWidth, -quad->dimensions->halfHeight, 0.0f);
    quad->vertices[2].position = CenteredQuadPosition(
        quad->dimensions->halfWidth, quad->dimensions->halfHeight, 0.0f);
    quad->vertices[3].position = CenteredQuadPosition(
        quad->dimensions->halfWidth, -quad->dimensions->halfHeight, 0.0f);
}
