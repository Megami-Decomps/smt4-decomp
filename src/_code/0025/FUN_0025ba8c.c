/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025ba8c` (_code @ 0x25ba8c, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_002c2a1c(int);


void FUN_0025ba8c(int *param_1)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3; 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned int in_s3;
  
  temp_v0 = *param_1;
  *(unsigned int *)(temp_v0 + 0xec) = in_s0;
  *(unsigned int *)(temp_v0 + 0xf0) = in_s1;
  *(unsigned int *)(temp_v0 + 0xf4) = in_s2;
  *(unsigned int *)(temp_v0 + 0xf8) = in_s3;
  temp_v1 = FUN_002c2a1c(*param_1 + 0xec);
  *(unsigned int *)(*param_1 + 0x108) = temp_v1;
  return;
}
