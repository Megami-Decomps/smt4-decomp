#include "common.h"

extern "C" {

void asdOperatorDelete(void);
s32 jobIsValid(u32 job);
extern u32 *DAT_0057f678;

/* Returns 0 while the job whose id DAT_0057f678 points at is valid; once it is not, frees the record and returns 1. */
u32 FUN_00239194(void)
{
    s32 valid;

    if (DAT_0057f678 != NULL) {
        valid = jobIsValid(*DAT_0057f678);
        if (valid != 0) {
            return 0;
        }
        if (DAT_0057f678 != NULL) {
            asdOperatorDelete();
            DAT_0057f678 = NULL;
        }
    }
    return 1;
}

} /* extern "C" */
