/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014d318` (_code @ 0x14d318, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_0014d318(int param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  
  if (param_2 >> 0x18 == 4) {
    puVar1 = (unsigned int *)(param_1 + *(int *)(param_1 + 0x2c));
    if ((param_2 & 0xffffff) < *puVar1) {
      return (int)puVar1 + puVar1[(param_2 & 0xffffff) * 2 + 2];
    }
  }
  return 0;
}
