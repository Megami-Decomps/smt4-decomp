/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e4d98` (_code @ 0x3e4d98, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_003e4d98(int param_1)

{
  unsigned short temp_v0;
  unsigned int temp_v1;
  
  if ((((param_1 == 0) || ((*(unsigned int *)(param_1 + 0x130) & 1) == 0)) ||
      (temp_v0 = *(unsigned short *)(param_1 + 0x60), (temp_v0 & 2) != 0)) ||
     ((((temp_v0 & 0x400) != 0 || (temp_v0 & 4) != 0 || ((temp_v0 & 0x40) != 0 || (temp_v0 & 0x80) != 0)) ||
      ((temp_v0 & 0x100) != 0)))) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = 1;
  }
  return temp_v1;
}
