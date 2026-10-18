/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024c60c` (_code @ 0x24c60c, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_0024c60c(int param_1)

{
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 0x10);
  if ((*(int *)(param_1 + 0x18) == 0) && (temp_v0 != 0)) {
    temp_v0 = temp_v0 + param_1;
  }
  return temp_v0;
}
