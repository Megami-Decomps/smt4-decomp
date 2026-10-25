#include "common.h"

extern "C" {

void modelSetResetSlots(void *object);
void FUN_0027de24(void *object);

extern void *DAT_00435d18;

void FUN_00339dc0(void)
{
    FUN_0027de24(DAT_00435d18);
    modelSetResetSlots(DAT_00435d18);
}

} /* extern "C" */
