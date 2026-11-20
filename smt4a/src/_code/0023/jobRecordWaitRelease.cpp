#include "common.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {

s32 jobIsValid(u32 job);
extern u32 *g_gameOverJobRecord;

/* Returns 0 while the job whose id g_gameOverJobRecord points at is valid; once it is not, frees the record and returns 1. */
u32 jobRecordWaitRelease(void)
{
    s32 valid;

    if (g_gameOverJobRecord != NULL) {
        valid = jobIsValid(*g_gameOverJobRecord);
        if (valid != 0) {
            return 0;
        }
        if (g_gameOverJobRecord != NULL) {
            asdOperatorDelete(g_gameOverJobRecord);
            g_gameOverJobRecord = NULL;
        }
    }
    return 1;
}

} /* extern "C" */
