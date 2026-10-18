/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00223da0` (_code @ 0x223da0, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_0029aef0(unsigned int);


void FUN_00223da0(unsigned int *param_1)

{
  unsigned int temp_v0;
  
  param_1 = (unsigned int *)*param_1;
  if (param_1 != (unsigned int *)0x0) {
    temp_v0 = FUN_0029aef0(*param_1);
    param_1[0x2519] = temp_v0;
  }
  return;
}
