#include "shard/W6_W6Match5_ComponentIntegration.h"

extern "C" ComponentIntegrationState g_vectorScratch;

// Integrate all four components by their stored deltas.
extern "C" void FUN_00249678(void)
{
    const IntegrationVector4 *delta = &g_vectorScratch.delta;
    IntegrationVector4 *values = &g_vectorScratch.values;
    values->x += delta->x;
    values->y += delta->y;
    values->z += delta->z;
    values->w += delta->w;
}
