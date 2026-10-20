/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00102c80` (_code @ 0x102c80, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_00102c80(void)

{
  int *piVar1;
  
  for (piVar1 = (int *)0x56707c; piVar1 != (int *)0x5673a4; piVar1 = piVar1 + 1) {
    (*(romwright_code *)(*piVar1 + (int)piVar1))();
  }
  return;
}

} /* extern "C" */
