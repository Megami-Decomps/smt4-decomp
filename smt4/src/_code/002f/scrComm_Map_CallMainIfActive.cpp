#include "common.h"

extern "C" {

int mapMainCallIfActive(void);
int lmapMainCallIfActive(void);

u32 scrComm_Map_CallMainIfActive(void)
{
    mapMainCallIfActive();
    lmapMainCallIfActive();
    return 1;
}

} /* extern "C" */
