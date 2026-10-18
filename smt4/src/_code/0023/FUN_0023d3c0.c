/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023d3c0` (_code @ 0x23d3c0, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_0023d3c0(int param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  puVar1 = (unsigned int *)(**(romwright_code **)(**(int **)(param_1 + 600) + 0x10))();
  if ((puVar1 != (unsigned int *)0x0) && ((*puVar1 & 0x20000000) == 0)) {
    puVar1 = (unsigned int *)0x0;
  }
  temp_v0 = param_2[1];
  temp_v1 = param_2[2];
  puVar1[2] = *param_2;
  puVar1[3] = temp_v0;
  puVar1[4] = temp_v1;
  return;
}
