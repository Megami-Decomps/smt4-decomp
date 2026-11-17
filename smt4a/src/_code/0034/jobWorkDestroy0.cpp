#include "shard/JobWork.h"
#include "shard/W6_W6Match5_EffectLineJob.h"
#include "code/Code0023_Smt4a.h"

extern "C" {

extern void asdMemFree(void *ptr);

/* Destroy callback of the effect-line job: deletes its effect object and frees the work. */
void jobWorkDestroy0(u32 job)
{
    EffectLineJobWork *work = reinterpret_cast<EffectLineJobWork *>(jobGetWork(job));

    /* objDestroyIfSet is the out-of-line "delete if set" helper, declared on its generic Object. */
    objDestroyIfSet(reinterpret_cast<Object *>(work->object));
    if (work != NULL) {
        asdMemFree(work);
    }
}

} /* extern "C" */
