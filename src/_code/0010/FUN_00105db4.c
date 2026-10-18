/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00105db4` (_code @ 0x105db4, 0x14 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_00105db4(int param_1)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3; 4 native warning(s); review required */
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned int in_s3;
  
  param_1 = param_1 * 0x10;
  *(unsigned int *)(param_1 + 0x4e3b54) = in_s0;
  *(unsigned int *)(param_1 + 0x4e3b58) = in_s1;
  *(unsigned int *)(param_1 + 0x4e3b5c) = in_s2;
  *(unsigned int *)(param_1 + 0x4e3b60) = in_s3;
  return;
}
