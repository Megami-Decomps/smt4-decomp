#include "shard/JobWork.h"
#include "shard/W6_W6Match5_EffectLineJob.h"
#include "code/Code001a_Smt4.h"

extern "C" {

int asdMemFree(void *ptr);

/* Destroy callback of the effect-line job: deletes its effect object and frees the work. */
void jobWorkFreeWork(u32 job)
{
    EffectLineJobWork *work = reinterpret_cast<EffectLineJobWork *>(jobGetWork(job));

    /* FUN_001ab998 is the out-of-line "delete if set" helper, declared on its generic Object. */
    FUN_001ab998(reinterpret_cast<Object *>(work->object));
    if (work != NULL) {
        asdMemFree(work);
        return;
    }
}

} /* extern "C" */
