#include "shard/Shard0033.h"

extern "C" {

extern u32 g_effectColorOverride;
extern void nodeTreeReleaseItem(u32 handle);

void nodeTreeReleaseCurrent(void)
{
    nodeTreeReleaseItem(g_effectColorOverride);
    g_effectColorOverride = 0;
}

} /* extern "C" */
