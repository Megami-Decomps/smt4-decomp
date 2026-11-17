#include "shard/S2SoundThread.h"

extern "C" {

extern NnSoundThread *FUN_002ad3a4(void);
extern void FUN_001560dc(NnSoundThread *thread, void *arg);

/* Sound thread entry: runs the sound thread's loop. */
void FUN_001560c4(void *arg)
{
    FUN_001560dc(FUN_002ad3a4(), arg);
}

} /* extern "C" */
