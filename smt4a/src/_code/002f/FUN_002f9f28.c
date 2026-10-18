/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f9f28` (_code @ 0x2f9f28, 0x26 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

unsigned int FUN_002f9f28(int *param_1,unsigned int param_2,int param_3)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if ((param_3 != 0) || (temp_v0 = (**(romwright_code **)(*param_1 + 0x30))(param_1), temp_v1 = 0, temp_v0 != 0)) {
    (**(romwright_code **)(*param_1 + 0x14))(param_1,param_2);
    temp_v1 = 1;
    *(short *)(param_1 + 5) = (short)param_2;
  }
  return temp_v1;
}
