#include "common.h"

extern "C" {

int mapMainCallIfActive(void);
int lmapMainCallIfActive(void);

u32 FUN_002fe920(void)
{
    mapMainCallIfActive();
    lmapMainCallIfActive();
    return 1;
}

} /* extern "C" */
