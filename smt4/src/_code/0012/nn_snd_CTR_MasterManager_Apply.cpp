#include "common.h"

extern "C" {
extern u8 g_nnSndMasterManagerImpl;
void FUN_0013ac30(void *manager);
}

extern "C" void nn_snd_CTR_MasterManager_Apply(void)
{
    FUN_0013ac30(&g_nnSndMasterManagerImpl);
}
