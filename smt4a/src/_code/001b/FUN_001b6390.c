/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b6390` (_code @ 0x1b6390, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_001b6390(int param_1)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  int temp_v0;
  unsigned int in_s0;
  
  *(unsigned int *)(param_1 + 100) = in_s0;
  temp_v0 = *(int *)(param_1 + 0x68);
  *(unsigned int *)(temp_v0 + 0x68) = in_s0;
  *(unsigned short *)(temp_v0 + 0x6c) = *(unsigned short *)(temp_v0 + 0x6c) | 1;
  return;
}
