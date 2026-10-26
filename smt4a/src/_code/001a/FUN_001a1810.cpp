#include "shard/S2SoundThread.h"

extern "C" {

extern SoundThread *FUN_001afa44(void);
extern void FUN_001a1828(SoundThread *thread, void *arg);

/* Sound thread entry: runs the sound thread's loop. */
void FUN_001a1810(void *arg)
{
    FUN_001a1828(FUN_001afa44(), arg);
}

} /* extern "C" */
