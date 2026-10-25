#include "battle/btlEncount.h"
#include "shard/JobWork.h"

extern "C" {

void asdMemFree(void *block);
void jobStop(u32 job, s32 arg);

extern BtlEncount *g_btlEncount;

/* Frees the encounter state and stops the job that owns it. */
void btlEncountDestroy(u32 job)
{
    BtlEncountOwner *owner = (BtlEncountOwner *)jobGetWork(job);
    BtlEncount *encount = g_btlEncount;

    if (g_btlEncount != NULL) {
        if (encount->data != NULL) {
            asdMemFree(encount->data);
            encount->data = NULL;
        }
        asdMemFree(g_btlEncount);
        g_btlEncount = NULL;
    }
    jobStop(owner->job, 0);
}

} /* extern "C" */
