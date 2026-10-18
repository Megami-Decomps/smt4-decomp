/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001aeecc` (_code @ 0x1aeecc, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_001aeecc(unsigned int *param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = ((*param_1 & 0xffffff) | ((unsigned int)*(unsigned char *)((int)param_1 + 3) << 0x18)) >> 8;
  if (temp_v0 == 0) {
    temp_v0 = (param_1[1] & 0xffffff) | ((unsigned int)*(unsigned char *)((int)param_1 + 7) << 0x18);
  }
  return temp_v0;
}
