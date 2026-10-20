/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014f4f8` (_code @ 0x14f4f8, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_0014f4f8(unsigned int *param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = ((*param_1 & 0xffffff) | ((unsigned int)*(unsigned char *)((int)param_1 + 3) << 0x18)) >> 8;
  if (temp_v0 == 0) {
    temp_v0 = (param_1[1] & 0xffffff) | ((unsigned int)*(unsigned char *)((int)param_1 + 7) << 0x18);
  }
  return temp_v0;
}

} /* extern "C" */
