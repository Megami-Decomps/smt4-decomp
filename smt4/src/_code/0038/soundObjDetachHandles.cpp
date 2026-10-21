#include "common.h"
#include "shard/S3SoundHeapObj.h"

extern "C" {

void nw_snd_SoundHandle_DetachSound(SoundHeapObjHandle *handle);
SoundHeapObj *FUN_003809a0(SoundHeapObj *obj);

/* Detaches the object's two sound handles, then forwards to FUN_003809a0, the function that
 * follows it. */
SoundHeapObj *soundObjDetachHandles(SoundHeapObj *obj)
{
    nw_snd_SoundHandle_DetachSound(&obj->handleB);
    nw_snd_SoundHandle_DetachSound(&obj->handleA);
    return FUN_003809a0(obj);
}

} /* extern "C" */
