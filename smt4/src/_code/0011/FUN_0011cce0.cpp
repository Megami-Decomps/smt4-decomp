#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern MasterSoundOwner g_nnSndMasterManagerImpl;
extern void nn_snd_CTR_MasterManagerImpl_Finalize(MasterSoundOwner *manager);

/* Finalizes an initialized sound owner and invalidates its handle. */
void FUN_0011cce0(MasterSoundOwner *owner)
{
    if (owner->initialized != 0) {
        nn_snd_CTR_MasterManagerImpl_Finalize(&g_nnSndMasterManagerImpl);
        owner->handle = -1;
        owner->initialized = 0;
    }
}

} /* extern "C" */
