/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_ut_internal_LinkListImpl_insert` (_code @ 0x2bf59c, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int * nw_ut_internal_LinkListImpl_insert(int *param_1,int param_2,int *param_3)

{
  unsigned int *puVar1;
  
  puVar1 = *(unsigned int **)(param_2 + 4);
  *param_3 = param_2;
  param_3[1] = (int)puVar1;
  *(int **)(param_2 + 4) = param_3;
  *puVar1 = (unsigned int)param_3;
  *param_1 = *param_1 + 1;
  return param_3;
}
