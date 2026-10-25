#include "common.h"

extern "C" {

void asdOperatorDelete(void *object);
s32 jobStop(u32 job, s32 flag);
extern u32 *DAT_0057f678;

/* Stops the job whose id DAT_0057f678 points at, then frees the record and clears the pointer. */
void jobDestroyGlobal(u32 job)
{
    jobStop(*DAT_0057f678, 0);
    if (DAT_0057f678 != NULL) {
        asdOperatorDelete(DAT_0057f678);
        DAT_0057f678 = NULL;
    }
}

} /* extern "C" */
