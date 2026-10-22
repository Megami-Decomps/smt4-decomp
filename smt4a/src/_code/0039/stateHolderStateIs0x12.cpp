#include "status/StatusDown.h"
#include "shard/Shard0039.h"

extern "C" {
extern StatusDownStateA *g_statusDown;

u8 stateHolderStateIs0x12(void)
{
    return g_statusDown->track.state == 0x12;
}

} /* extern "C" */
