#include "shard/Shard0045.h"

extern "C" {

extern void nw_snd_SoundHandle_DetachSound(u32 handle);

u32 soundHandleDetachReturn(u32 handle)
{
    nw_snd_SoundHandle_DetachSound(handle);
    return handle;
}

} /* extern "C" */
