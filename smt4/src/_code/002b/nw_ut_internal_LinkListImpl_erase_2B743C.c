/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_ut_internal_LinkListImpl_erase_2B743C` (_code @ 0x2b743c, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void nw_ut_internal_LinkListImpl_erase_2B743C(int *param_1,int *param_2)

{
  int temp_v0;
  int *piVar2;
  
  temp_v0 = *param_2;
  piVar2 = (int *)param_2[1];
  *(int **)(temp_v0 + 4) = piVar2;
  *piVar2 = temp_v0;
  *param_1 = *param_1 - 1;
  *param_2 = 0;
  param_2[1] = 0;
  return;
}
