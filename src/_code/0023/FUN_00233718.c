/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00233718` (_code @ 0x233718, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_00233718(int param_1)

{
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 4) < *(int *)(param_1 + 8)) {
    temp_v0 = *(int *)(param_1 + 4);
  }
  return temp_v0;
}
