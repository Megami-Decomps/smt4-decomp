/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00289508` (_code @ 0x289508, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c09bc(void);


void FUN_00289508(void)

{
/* irregular: irregular input(s): in_s16, in_s17 */
  int temp_v0;
  unsigned int in_s16;
  unsigned int in_s17;
  
  temp_v0 = FUN_002c09bc();
  *(unsigned int *)(temp_v0 + 0x24b94) = in_s17;
  *(unsigned int *)(temp_v0 + 0x24b84) = 0;
  *(unsigned int *)(temp_v0 + 0x24b98) = in_s16;
  *(unsigned int *)(temp_v0 + 0x24b88) = 0;
  *(unsigned int *)(temp_v0 + 0x24b8c) = 0;
  *(unsigned int *)(temp_v0 + 0x24b90) = 0;
  return;
}
