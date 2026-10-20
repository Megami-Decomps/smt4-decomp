#include "common.h"

extern "C" {

int nn_snd_CTR_MasterManagerImpl_AuxUserCallback(u8 *manager);

extern u8 g_nnSndMasterManagerImpl;

void FUN_002a2a94(char *enabled)
{
    if (*enabled != 0) {
        nn_snd_CTR_MasterManagerImpl_AuxUserCallback(&g_nnSndMasterManagerImpl);
    }
}

} /* extern "C" */
