/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f5084` (_code @ 0x2f5084, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int nw_ut_FloatColor_ToPicaU32(int);


void FUN_002f5084(int param_1)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2; 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  
  temp_v0 = *(int *)(param_1 + 8);
  *(unsigned int *)(temp_v0 + 0xb8) = in_s0;
  *(unsigned int *)(temp_v0 + 0xbc) = in_s1;
  *(unsigned int *)(temp_v0 + 0xc0) = in_s2;
  *(unsigned int *)(temp_v0 + 0xc4) = 0x3f800000;
  temp_v1 = nw_ut_FloatColor_ToPicaU32(*(int *)(param_1 + 8) + 0xb8);
  *(unsigned int *)(*(int *)(param_1 + 8) + 200) = temp_v1;
  return;
}
