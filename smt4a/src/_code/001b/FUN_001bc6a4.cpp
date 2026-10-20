#include "common.h"

extern "C" {

void FUN_00312838(void);

/* Calls FUN_00312838 (through an ARM-to-Thumb veneer). */
void FUN_001bc6a4(void)
{
    FUN_00312838();
}

} /* extern "C" */
