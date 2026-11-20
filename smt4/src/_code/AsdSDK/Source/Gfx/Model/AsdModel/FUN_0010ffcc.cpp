#include "common.h"

extern "C" {

extern void srvInitialize(void);
extern u32 FUN_0010ffdc(void);

/* Runs srvInitialize, then registers the callbacks (FUN_0010ffdc). */
u32 FUN_0010ffcc(void)
{
    srvInitialize();
    return FUN_0010ffdc();
}

} /* extern "C" */
