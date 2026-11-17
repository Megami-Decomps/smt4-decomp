#include "shard/X14_EngineUnits.h"

extern "C" {

void cleanupProcessUpdate(void *scene);

void engineReleaseCleanupHandle(void)
{
    cleanupProcessUpdate(g_engineCleanupOwner.scene);
}

} /* extern "C" */
