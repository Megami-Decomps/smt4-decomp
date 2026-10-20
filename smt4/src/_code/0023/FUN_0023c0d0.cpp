/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023c0d0` (_code @ 0x23c0d0, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


unsigned int FUN_0023c0d0(int *param_1,int param_2,int param_3,int param_4)

{
  unsigned int temp_v0;
  
  if ((*(unsigned int *)(*param_1 + 0x44a8) & 4) != 0) {
    temp_v0 = 0;
  }
  else {
    param_2 = param_2 + param_3 * 10;
    param_4 = (unsigned int)*(unsigned short *)(param_2 + 0x9d4) + param_4;
    if (-1 < param_4) {
      *(short *)(param_2 + 0x9d4) = (short)param_4;
    }
    temp_v0 = 0;
    if (-1 >= param_4) {
      *(unsigned short *)(param_2 + 0x9d4) = 0;
      temp_v0 = 1;
    }
  }
  return temp_v0;
}

} /* extern "C" */
