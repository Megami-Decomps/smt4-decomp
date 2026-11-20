#include "common.h"

extern "C" {

void asdOperatorDelete(void *object);
s32 jobStop(u32 job, s32 flag);
extern u32 *g_gameOverJobRecord;

/* Stops the job whose id g_gameOverJobRecord points at, then frees the record and clears the pointer. */
void jobDestroyGlobal(u32 job)
{
    jobStop(*g_gameOverJobRecord, 0);
    if (g_gameOverJobRecord != NULL) {
        asdOperatorDelete(g_gameOverJobRecord);
        g_gameOverJobRecord = NULL;
    }
}

} /* extern "C" */
