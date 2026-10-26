#include "nn/snd/Initialization.h"

extern "C" {

extern NnSndMasterManager g_nnosAddressSpaceManager;
void nn_os_AddressSpaceManager_Free(NnSndMasterManager *manager, u32 value);

/* Applies value to the master sound manager. */
void sndMasterManagerApply(u32 value)
{
    nn_os_AddressSpaceManager_Free(&g_nnosAddressSpaceManager, value);
}

} /* extern "C" */
