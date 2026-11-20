#include "shard/Sys44e380.h"

extern "C" {

void appletSetUnlockFlag(u8 value)
{
    g_nnAppletState.unk0C = value;
}

} /* extern "C" */
