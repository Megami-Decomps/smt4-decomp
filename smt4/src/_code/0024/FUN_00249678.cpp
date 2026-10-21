/* NON_MATCHING: global address and first component loads are scheduled in a different order from retail. */
#include "shard/W6_W6Match5_ComponentIntegration.h"

extern "C" ComponentIntegrationState DAT_004ea81c;

// Integrate all four components by their stored deltas.
extern "C" void FUN_00249678(void)
{
    IntegrationVector4 *values = &DAT_004ea81c.values;
    const IntegrationVector4 *delta = &DAT_004ea81c.delta;
    values->x += delta->x;
    values->y += delta->y;
    values->z += delta->z;
    values->w += delta->w;
}
