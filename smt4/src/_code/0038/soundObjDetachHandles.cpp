#include "common.h"
#include "shard/S3SoundHeapObj.h"

extern "C" {

void nw_snd_SoundHandle_DetachSound(SoundHeapObjHandle *handle);
SoundHeapObj *_ZN13SoundHeapBaseD1Ev(SoundHeapObj *obj);

/* Detaches the object's two sound handles, then forwards to _ZN13SoundHeapBaseD1Ev, the function that
 * follows it. */
SoundHeapObj *soundObjDetachHandles(SoundHeapObj *obj)
{
    nw_snd_SoundHandle_DetachSound(&obj->handleB);
    nw_snd_SoundHandle_DetachSound(&obj->handleA);
    return _ZN13SoundHeapBaseD1Ev(obj);
}

} /* extern "C" */
