#include "common.h"

extern "C" {

void nn_snd_CTR_MasterManager_GetAuxCallback(u8 *manager, u32 a, u32 b, u32 c);
extern u8 g_nnSndMasterManager[];

/* Forwards its three arguments to GetAuxCallback on the master manager at 0x643380. */
void FUN_00189e18(u32 a, u32 b, u32 c)
{
    nn_snd_CTR_MasterManager_GetAuxCallback(g_nnSndMasterManager, a, b, c);
}

} /* extern "C" */
