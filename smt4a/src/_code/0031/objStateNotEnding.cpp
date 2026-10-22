#include "status/StatusDown.h"
#include "shard/Shard0031.h"

extern "C" {
extern StatusDownStateA *g_statusDown;

/* True unless the global object's state is 0x15 or 0x17. */
u8 objStateNotEnding(void)
{
    return g_statusDown->track.state != 0x15 && g_statusDown->track.state != 0x17;
}

} /* extern "C" */
