#include "shard/Shard0031.h"

extern "C" {

extern s32 jobFind(u32 job);
extern JobRef *g_staffRoll;

/* True when the referenced job exists, is found, or is not flagged at +5. */
u32 jobRefIsAlive(void)
{
    JobRef *job = g_staffRoll;

    if (job != NULL && (jobFind(job->job) != 0 || job->unk05 == 0)) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
