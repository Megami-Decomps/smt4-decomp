/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001bc6a4` (_code @ 0x1bc6a4, 0x4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* Retail branches to the ARM->Thumb veneer FUN_00312838, not to its Thumb target FUN_00101b5a. */
void FUN_00312838(void);


void FUN_001bc6a4(void)

{
  FUN_00312838();
  return;
}

} /* extern "C" */
