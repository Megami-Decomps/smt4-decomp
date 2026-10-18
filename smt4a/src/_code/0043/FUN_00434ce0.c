/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00434ce0` (_code @ 0x434ce0, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_00434ce0(int param_1)

{
  *(unsigned int *)(param_1 + 8) = 0;
  *(int *)param_1 = param_1;
  *(unsigned int *)(param_1 + 0xc) = 0;
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(unsigned int *)(param_1 + 0x18) = 0;
  *(int *)(param_1 + 4) = param_1;
  return;
}
