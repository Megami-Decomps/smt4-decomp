/* NON_MATCHING: romwright 0.5.0 decompilation of `ImaAdpcmSetContext` (_code @ 0x17fa10, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void ImaAdpcmSetContext(int *param_1,unsigned char *param_2)

{
  param_1[1] = (unsigned int)*param_2;
  *param_1 = (int)*(short *)(param_2 + 2);
  return;
}

} /* extern "C" */
