#include "shard/S1SndThread.h"

extern "C" {

SndThread *FUN_001afa44(void);
void FUN_001bd888(SndThread *thread, void *arg);

/* Sound thread entry: runs the thread loop on the sound thread object. */
void FUN_001bd870(void *arg)
{
    FUN_001bd888(FUN_001afa44(), arg);
}

} /* extern "C" */
