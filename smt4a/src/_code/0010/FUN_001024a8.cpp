#include "common.h"

extern "C" {

void FUN_00102178(void);

/* Jumps to FUN_00102178 (through an ARM-to-Thumb veneer). */
void FUN_001024a8(void)
{
    FUN_00102178();
}

} /* extern "C" */
