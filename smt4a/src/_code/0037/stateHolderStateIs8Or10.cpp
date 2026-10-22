#include "status/StatusDown.h"
#include "shard/Shard0037.h"

extern "C" {
extern StatusDownStateA *g_statusDown;

/* True when the global object is in state 8 or 10. */
u32 stateHolderStateIs8Or10(void)
{
    if (g_statusDown == NULL || (g_statusDown->track.state != 8 && g_statusDown->track.state != 10)) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
