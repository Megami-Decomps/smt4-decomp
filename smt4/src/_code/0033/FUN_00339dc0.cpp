#include "common.h"

extern "C" {

void modelSetResetSlots(void *object);
void modelManagerReleaseSlots(void *object);

extern void *DAT_00435d18;

void FUN_00339dc0(void)
{
    modelManagerReleaseSlots(DAT_00435d18);
    modelSetResetSlots(DAT_00435d18);
}

} /* extern "C" */
