#include "status/StatusDown.h"
#include "shard/Shard003A.h"

extern "C" {
extern StatusDownStateA *g_statusDown;

/* True when there is no object or its state is 0. */
u8 stateHolderIsMissingOrState0(void)
{
    return g_statusDown == NULL || g_statusDown->track.state == 0;
}

} /* extern "C" */
