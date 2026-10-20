#include "common.h"

extern "C" {

int nn_snd_CTR_MasterManager_GetAuxCallback(u8 *manager, u32 a, u32 b, u32 c);

extern u8 g_nnSndMasterManager;

void FUN_0013a69c(u32 a, u32 b, u32 c)
{
    nn_snd_CTR_MasterManager_GetAuxCallback(&g_nnSndMasterManager, a, b, c);
}

} /* extern "C" */
