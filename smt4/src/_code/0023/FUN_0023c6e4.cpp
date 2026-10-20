#include "common.h"

extern "C" {

void FUN_003c7f08(void);

extern void *DAT_004398d4;

void FUN_0023c6e4(void)
{
    if (DAT_004398d4 != NULL) {
        FUN_003c7f08();
    }
}

} /* extern "C" */
