#include "shard/Shard003C.h"

extern "C" {

extern void mapRefreshResourcesForStory(void);

/* Script command: runs mapRefreshResourcesForStory. */
u32 FUN_003c1014(void)
{
    mapRefreshResourcesForStory();
    return 1;
}

} /* extern "C" */
