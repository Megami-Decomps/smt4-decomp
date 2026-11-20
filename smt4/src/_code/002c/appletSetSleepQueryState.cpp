#include "shard/Sys44e380.h"

extern "C" {

void appletSetSleepQueryState(u8 value)
{
    g_nnAppletState.unk0B = value;
}

} /* extern "C" */
