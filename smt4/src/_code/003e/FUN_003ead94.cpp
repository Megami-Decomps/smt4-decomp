/* NON_MATCHING: retail copies a saved zero to r0 on pool exhaustion before branching out;
 * armcc branches directly because the allocation result is already NULL. */
#include "sound/PooledSoundInstance.h"

extern "C" void *nw_snd_internal_PoolImpl_AllocImpl(void *pool);

/* Allocates a fixed-size instance from the owner's pool and initializes its playback defaults. */
extern "C" PooledSoundInstance *FUN_003ead94(u8 *ownerInterface, u32 requestedBytes)
{
    PooledSoundOwner *owner = (PooledSoundOwner *)(ownerInterface - offsetof(PooledSoundOwner, secondaryInterface));
    if (requestedBytes != sizeof(PooledSoundInstance)) {
        return NULL;
    }
    PooledSoundInstance *instance = (PooledSoundInstance *)nw_snd_internal_PoolImpl_AllocImpl(&owner->freeList);
    if (instance == NULL) {
        return NULL;
    }
    instance->unk18 = 0;
    instance->unk1C = 0;
    instance->unk20 = 0;
    instance->scale = 0.5f;
    instance->enabled = 1;
    instance->unk29 = 0;
    return instance;
}
