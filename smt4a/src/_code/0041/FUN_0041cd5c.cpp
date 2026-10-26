/* NON_MATCHING: retail loads and negates the half extents one scalar at a time (ldrd/strd for the positive pair); armcc merges neighbouring pairs into vldmia/vstmia. */
#include "shard/CenteredQuad.h"

/* Writes one vertex's position, leaving its other attributes. */
static __inline void centeredQuadSetPosition(CenteredQuadVertex *vertex, f32 x, f32 y, f32 z)
{
    vertex->position = CenteredQuadPosition(x, y, z);
}

// Write the four centered rectangle positions while preserving the other vertex attributes.
extern "C" void FUN_0041cd5c(CenteredQuad *quad)
{
    centeredQuadSetPosition(&quad->vertices[0], -quad->dimensions->halfWidth, quad->dimensions->halfHeight, 0.0f);
    centeredQuadSetPosition(&quad->vertices[1], -quad->dimensions->halfWidth, -quad->dimensions->halfHeight, 0.0f);
    centeredQuadSetPosition(&quad->vertices[2], quad->dimensions->halfWidth, quad->dimensions->halfHeight, 0.0f);
    centeredQuadSetPosition(&quad->vertices[3], quad->dimensions->halfWidth, -quad->dimensions->halfHeight, 0.0f);
}
