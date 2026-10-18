/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d87bc` (_code @ 0x4d87bc, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_004d87bc(int *param_1,int param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if (*param_1 != 0) {
    temp_v0 = *(int *)(*param_1 + 4);
    temp_v1 = *(unsigned int *)(temp_v0 + 4);
    if (param_2 == 0) {
      temp_v1 = temp_v1 & 0xfffffffe;
    }
    else {
      temp_v1 = temp_v1 | 1;
    }
    *(unsigned int *)(temp_v0 + 4) = temp_v1;
  }
  return;
}
