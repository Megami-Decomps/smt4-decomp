/* NON_MATCHING: global address and first component loads are scheduled in a different order from retail. */
#include "shard/W6_W6Match5_ComponentIntegration.h"

extern "C" ComponentIntegrationState DAT_006471dc;

// Integrate all four components by their stored deltas.
extern "C" void FUN_002f8794(void)
{
    IntegrationVector4 *values = &DAT_006471dc.values;
    const IntegrationVector4 *delta = &DAT_006471dc.delta;
    values->x += delta->x;
    values->y += delta->y;
    values->z += delta->z;
    values->w += delta->w;
}
