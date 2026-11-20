#include "nn/snd/Initialization.h"

extern "C" {

extern NnSndMasterManager g_nnSndMasterManager;
void nn_snd_CTR_MasterManager_Apply(NnSndMasterManager *manager, u32 value);

/* Applies value to the master sound manager. */
void sndMasterManagerApply(u32 value)
{
    nn_snd_CTR_MasterManager_Apply(&g_nnSndMasterManager, value);
}

} /* extern "C" */
