#include "common.h"

extern "C" {

void mapPerFrameUpdate(void);

/* Forwards to mapPerFrameUpdate, the function that follows it. */
void FUN_0027653c(void)
{
    mapPerFrameUpdate();
}

} /* extern "C" */
