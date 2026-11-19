#include "shard/S2SoundThread.h"

extern "C" {

extern NnSoundThread *FUN_001afa44(void);
extern void guardedByteSetValue(NnSoundThread *thread, void *arg);

/* Sound thread entry: runs the sound thread's loop. */
void FUN_001a1810(void *arg)
{
    guardedByteSetValue(FUN_001afa44(), arg);
}

} /* extern "C" */
