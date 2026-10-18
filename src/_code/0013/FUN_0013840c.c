/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013840c` (_code @ 0x13840c, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_0013840c(int *param_1,int *param_2)

{
  int temp_v0;
  
  *param_2 = 0;
  if (*param_1 == 4) {
    *param_2 = param_1[6];
    temp_v0 = param_1[3];
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}
