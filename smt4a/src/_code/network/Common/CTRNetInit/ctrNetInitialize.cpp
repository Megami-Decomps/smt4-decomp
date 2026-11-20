#include "common.h"

extern "C" {

u32 ctrNetInitializeSockets(s32 *result);

/* Forwards unchanged to the network init below. */
u32 ctrNetInitialize(s32 *result)
{
    return ctrNetInitializeSockets(result);
}

} /* extern "C" */
