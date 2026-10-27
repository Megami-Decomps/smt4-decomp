#include "sound/SoundHandleOwners.h"

extern "C" void nw_snd_SoundHandle_DetachSound(SoundHandle *handle);

/* Detaches the handle's sound; armcc destructors return the object. */
SoundHandle::~SoundHandle()
{
    nw_snd_SoundHandle_DetachSound(this);
}
