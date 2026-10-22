#include "status/StatusDown.h"
#include "shard/Shard0039.h"

extern "C" {
extern StatusDownStateA *g_statusDown;

u8 stateHolderStateIs0xD(void)
{
    return g_statusDown->track.state == 0xD;
}

} /* extern "C" */
