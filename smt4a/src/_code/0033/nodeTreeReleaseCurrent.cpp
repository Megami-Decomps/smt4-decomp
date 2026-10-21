#include "shard/Shard0033.h"

extern "C" {

extern u32 DAT_00570ab4;
extern void nodeTreeReleaseItem(u32 handle);

void nodeTreeReleaseCurrent(void)
{
    nodeTreeReleaseItem(DAT_00570ab4);
    DAT_00570ab4 = 0;
}

} /* extern "C" */
