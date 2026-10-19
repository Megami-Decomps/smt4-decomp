/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001024a8` (_code @ 0x1024a8, 0x4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


/* Retail branches to the ARM->Thumb veneer FUN_00102178; the decompiler followed it to a bad-data halt. */
void FUN_00102178(void);

void FUN_001024a8(void)

{
  FUN_00102178();
}
