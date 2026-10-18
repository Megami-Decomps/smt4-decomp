/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026389c` (_code @ 0x26389c, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_002c2be8(void);


void FUN_0026389c(int param_1,int param_2)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3; 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned int in_s3;
  
  if (param_1 < 0) {
    return;
  }
  temp_v1 = *(int *)(*(int *)(param_2 * 0x284 + param_1 * 4 + 0x4d9fec) + 8);
  *(unsigned int *)(temp_v1 + 0xcc) = in_s0;
  *(unsigned int *)(temp_v1 + 0xd0) = in_s1;
  *(unsigned int *)(temp_v1 + 0xd4) = in_s2;
  *(unsigned int *)(temp_v1 + 0xd8) = in_s3;
  temp_v0 = FUN_002c2be8();
  *(unsigned int *)(temp_v1 + 0x100) = temp_v0;
  return;
}
