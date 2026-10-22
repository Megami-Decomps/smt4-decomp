#include "common.h"

extern "C" {

void mapPerFrameUpdate(void);

/* Forwards to mapPerFrameUpdate, the function that follows it. */
void mapUpdatePerFrame(void)
{
    mapPerFrameUpdate();
}

} /* extern "C" */
