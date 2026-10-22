#include "status/StatusDown.h"
#include "shard/Shard0037.h"

extern "C" {
extern StatusDownStateA *g_statusDown;

u8 stateHolderStateIsNot4(void)
{
    return g_statusDown->track.state != 4;
}

} /* extern "C" */
