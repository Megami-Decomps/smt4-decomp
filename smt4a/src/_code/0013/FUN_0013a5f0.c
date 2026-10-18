/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013a5f0` (_code @ 0x13a5f0, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0013a5f0(int param_1)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3; 4 native warning(s); review required */
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned int in_s3;
  
  param_1 = param_1 * 0x10;
  *(unsigned int *)(param_1 + 0x63fefc) = in_s0;
  *(unsigned int *)(param_1 + 0x63ff00) = in_s1;
  *(unsigned int *)(param_1 + 0x63ff04) = in_s2;
  *(unsigned int *)(param_1 + 0x63ff08) = in_s3;
  return;
}
