#include "status/StatusDown.h"
#include "shard/Shard0039.h"

extern "C" {
extern StatusDownStateA *g_statusDown;

u16 stateHolderGetCurrentEntry(void)
{
    return g_statusDown->table59C[g_statusDown->unk654];
}

} /* extern "C" */
