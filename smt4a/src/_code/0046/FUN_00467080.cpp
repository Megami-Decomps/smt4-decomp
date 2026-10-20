#include "common.h"
#include "shard/S3SoundHeapObj.h"

extern "C" {

void nw_snd_SoundHandle_DetachSound(SoundHeapObjHandle *handle);
SoundHeapObj *FUN_004670a4(SoundHeapObj *obj);

/* Detaches the object's two sound handles, then forwards to FUN_004670a4, the function that
 * follows it. */
SoundHeapObj *FUN_00467080(SoundHeapObj *obj)
{
    nw_snd_SoundHandle_DetachSound(&obj->handleB);
    nw_snd_SoundHandle_DetachSound(&obj->handleA);
    return FUN_004670a4(obj);
}

} /* extern "C" */
