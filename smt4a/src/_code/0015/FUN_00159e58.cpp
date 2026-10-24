#include "common.h"

extern "C" {
extern u8 g_nnSndMasterManager[];
void FUN_0016f35c(void *manager, u32 value);

/* Passes the value to the nn::snd master manager. */
void FUN_00159e58(u32 value)
{
    FUN_0016f35c(g_nnSndMasterManager, value);
}
}
