#include "shard/W6_W6Match5_ComponentIntegration.h"
#include "gfx/VectorScratch.h"

// Integrate all four components by their stored deltas.
extern "C" void FUN_002f8794(void)
{
    const IntegrationVector4 *delta = &g_vectorScratch.second.integration;
    IntegrationVector4 *values = &g_vectorScratch.first.integration;
    values->x += delta->x;
    values->y += delta->y;
    values->z += delta->z;
    values->w += delta->w;
}
