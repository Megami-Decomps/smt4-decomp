/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025beb8` (_code @ 0x25beb8, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_0025beb8(int param_1)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2; 3 native warning(s); review required */
  int temp_v0;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  
  temp_v0 = *(int *)(param_1 + 0x2c);
  *(unsigned int *)(temp_v0 + 0x7c) = in_s0;
  *(unsigned int *)(temp_v0 + 0x80) = in_s1;
  *(unsigned int *)(temp_v0 + 0x84) = in_s2;
  *(unsigned int *)(temp_v0 + 0x88) = *(unsigned int *)(temp_v0 + 0x88) | 0x800;
  return;
}
