#include "common.h"
#include "shard/X14_EngineUnits.h"

extern "C" {

/* Returns the result work's word at 0x7538, or 0 without a result screen. */
u32 FUN_0031e6d4(void)
{
    return g_engineCleanupOwner.instance != NULL ? g_engineCleanupOwner.instance->unk7538 : 0;
}

} /* extern "C" */
