/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011b880` (_code @ 0x11b880, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_0011b880(unsigned int param_1,unsigned int *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)*param_2;
  (**(romwright_code **)(*piVar1 + 8))(piVar1);
  if (piVar1 != (int *)0x0) {
    (**(romwright_code **)(*piVar1 + 4))(piVar1);
  }
  return;
}

} /* extern "C" */
