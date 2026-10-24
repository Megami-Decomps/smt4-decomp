#include "nn/snd/Initialization.h"

extern "C" {

extern NnSndMasterManager g_nnSndMasterManager;
void FUN_00128f20(NnSndMasterManager *manager, u32 value);

/* Applies value to the master sound manager. */
void sndMasterManagerApply(u32 value)
{
    FUN_00128f20(&g_nnSndMasterManager, value);
}

} /* extern "C" */
