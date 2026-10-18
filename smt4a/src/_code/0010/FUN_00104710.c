/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00104710` (_code @ 0x104710, 0x12 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00558620; /* 0x558620 */


void FUN_00104710(unsigned int *param_1,int param_2)

{
  unsigned int temp_v0;
  
  *param_1 = (unsigned int)&DAT_00558620;
  *(unsigned char *)(param_1 + 1) = 0;
  temp_v0 = *(unsigned int *)(param_2 + 8);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = temp_v0;
  return;
}
