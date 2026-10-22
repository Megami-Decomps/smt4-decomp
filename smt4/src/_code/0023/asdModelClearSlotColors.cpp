#include "common.h"

extern "C" {

void objModelSlotClearColor(void);

extern void *DAT_004398d4;

void asdModelClearSlotColors(void)
{
    if (DAT_004398d4 != NULL) {
        objModelSlotClearColor();
    }
}

} /* extern "C" */
