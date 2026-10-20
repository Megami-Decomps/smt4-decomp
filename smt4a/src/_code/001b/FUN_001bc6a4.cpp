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
