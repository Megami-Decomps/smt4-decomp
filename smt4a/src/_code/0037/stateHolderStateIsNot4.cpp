#include "shard/Shard0037.h"

extern "C" {

extern StateHolder518 *g_statusDown;

u8 stateHolderStateIsNot4(void)
{
    return g_statusDown->state != 4;
}

} /* extern "C" */
