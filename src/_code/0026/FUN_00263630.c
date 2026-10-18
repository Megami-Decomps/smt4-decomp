/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00263630` (_code @ 0x263630, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_002c2a1c(void);


void FUN_00263630(int param_1,int param_2)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2; 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  
  temp_v1 = *(int *)(*(int *)(param_2 * 0x284 + param_1 * 4 + 0x4d9ae4) + 8);
  *(unsigned int *)(temp_v1 + 0xb8) = in_s0;
  *(unsigned int *)(temp_v1 + 0xbc) = in_s1;
  *(unsigned int *)(temp_v1 + 0xc0) = in_s2;
  *(unsigned int *)(temp_v1 + 0xc4) = 0x3f800000;
  temp_v0 = FUN_002c2a1c();
  *(unsigned int *)(temp_v1 + 200) = temp_v0;
  return;
}
