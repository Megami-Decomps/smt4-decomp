#include "romwright_types.h"

extern "C" {


/* Retail branches to the ARM->Thumb veneer FUN_00102178; the decompiler followed it to a bad-data halt. */
void FUN_00102178(void);

void FUN_001024a8(void)

{
  FUN_00102178();
}

} /* extern "C" */
