#include "common.h"

extern "C" {

void FUN_001b5be8(u8 *manager, u32 value);
extern u8 g_nnSndMasterManager[];

/* Forwards `value` to FUN_001b5be8 with the master manager at 0x643380. */
void FUN_001af958(u32 value)
{
    FUN_001b5be8(g_nnSndMasterManager, value);
}

} /* extern "C" */
