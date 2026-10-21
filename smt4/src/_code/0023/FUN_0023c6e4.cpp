#include "common.h"

extern "C" {

void objModelSlotClearColor(void);

extern void *DAT_004398d4;

void FUN_0023c6e4(void)
{
    if (DAT_004398d4 != NULL) {
        objModelSlotClearColor();
    }
}

} /* extern "C" */
