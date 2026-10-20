#include "shard/Shard0039.h"

extern "C" {

extern StateHolder518 *g_statusDown;

u8 stateHolderStateIs0xD(void)
{
    return g_statusDown->state == 0xD;
}

} /* extern "C" */
