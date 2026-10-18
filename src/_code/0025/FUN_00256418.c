/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00256418` (_code @ 0x256418, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int * FUN_00256418(int param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  
  if ((-1 < param_2) && (param_2 < 0x6d)) {
    puVar1 = (unsigned int *)(*(int *)(param_1 + 0x1fc0) + param_2 * 0x288);
    if (param_3 != 0) {
      if ((*puVar1 & 1) != 0) {
        return puVar1;
      }
    }
    else if ((*puVar1 & 1) == 0) {
      return puVar1;
    }
  }
  return (unsigned int *)0x0;
}
