#include "common.h"

extern "C" {

int nodeTreeReleaseItem(u32 item);
extern u32 g_effectColorOverride;

void nodeTreeClearItem(void)
{
    nodeTreeReleaseItem(g_effectColorOverride);
    g_effectColorOverride = 0;
}

} /* extern "C" */
