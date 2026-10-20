#include "shard/Shard0031.h"

extern "C" {

extern StateHolder518 *g_statusDown;

/* True unless the global object's state is 0x15 or 0x17. */
u8 objStateNotEnding(void)
{
    return g_statusDown->state != 0x15 && g_statusDown->state != 0x17;
}

} /* extern "C" */
