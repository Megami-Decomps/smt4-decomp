/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c2318` (_code @ 0x2c2318, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */


void FUN_002c2318(int param_1)

{
/* irregular: irregular input(s): in_cr0, in_r12; 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int unaff_r6;
  int in_r12;
  unsigned int in_cr0;
  
  temp_v1 = *(unsigned int *)(param_1 + 8) >> 0x10;
  *(int *)(unaff_r6 + 0x60) = unaff_r6 >> 2;
  coprocessor_storelong(0,in_cr0,in_r12 - 0x138);
  *(unsigned int *)(temp_v1 * 2 + 0x60) = temp_v1;
  coprocessor_load(0,in_cr0,in_r12);
  temp_v0 = temp_v1 << ((unaff_r6 >> 2) & 0xffU);
  *(unsigned int *)(temp_v0 + 0x50) = 0;
  *(unsigned int *)(temp_v0 + 0x5c) = 0;
  return;
}
