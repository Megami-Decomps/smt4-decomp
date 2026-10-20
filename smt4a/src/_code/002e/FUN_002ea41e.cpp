/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ea41e` (_code @ 0x2ea41e, 0xe bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {


void FUN_002ea41e(unsigned int *param_1,int param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = *(unsigned int *)(param_2 + 0x38);
  temp_v0 = *(unsigned int *)(param_2 + 0x40);
  param_1[1] = *(unsigned int *)(param_2 + 0x3c);
  *param_1 = temp_v1;
  param_1[2] = temp_v0;
  return;
}

} /* extern "C" */
