#include "common.h"

extern "C" {

extern void srvInitialize(void);
extern u32 asdModelWorkInitialize(void);

/* Runs srvInitialize, then registers the callbacks (asdModelWorkInitialize). */
u32 FUN_0010ffcc(void)
{
    srvInitialize();
    return asdModelWorkInitialize();
}

} /* extern "C" */
