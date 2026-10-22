#include "common.h"

extern "C" {

void asdModelRenderLightPass(void);

/* Calls asdModelRenderLightPass and returns 0. */
u32 asdModelRenderLightPassCallback(void)
{
    asdModelRenderLightPass();
    return 0;
}

} /* extern "C" */
