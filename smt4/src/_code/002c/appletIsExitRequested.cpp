#include "shard/Sys44e380.h"

extern "C" {

u8 appletIsExitRequested(void)
{
    return g_nnAppletState.unk06;
}

} /* extern "C" */
