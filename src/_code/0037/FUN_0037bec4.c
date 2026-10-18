/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037bec4` (_code @ 0x37bec4, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_003e68fc(int *);


void FUN_0037bec4(unsigned int *param_1,int *param_2)

{
  int temp_v0;
  
  if ((*param_2 == 0x4d545343) && (param_2[2] + 0xfe000000U < 0x10001)) {
    *param_1 = (unsigned int)param_2;
    temp_v0 = FUN_003e68fc(param_2);
    param_1[1] = (int)param_2 + temp_v0 + 8;
  }
  return;
}
