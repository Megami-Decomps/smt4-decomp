#include "shard/Shard0039.h"

extern "C" {

extern StateHolder518 *g_statusDown;

u8 stateHolderStateIs0x12(void)
{
    return g_statusDown->state == 0x12;
}

} /* extern "C" */
