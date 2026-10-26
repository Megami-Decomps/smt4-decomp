#include "shard/S2SoundThread.h"

extern "C" {

extern SoundThread *FUN_002ad3a4(void);
extern void guardedByteSetValue(SoundThread *thread, void *arg);

/* Sound thread entry: runs the sound thread's loop. */
void FUN_00147004(void *arg)
{
    guardedByteSetValue(FUN_002ad3a4(), arg);
}

} /* extern "C" */
