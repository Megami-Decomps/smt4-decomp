/* NON_MATCHING: romwright 0.5.0 decompilation of `ARM_common_memset4_6` (_code @ 0x1525cc, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void ARM_common_memset4_6(unsigned int *param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  
  temp_v0 = (param_2 & 0xff) | ((param_2 & 0xff) << 8);
  *param_1 = temp_v0 | (temp_v0 << 0x10);
  *(short *)(param_1 + 1) = (short)temp_v0;
  return;
}
