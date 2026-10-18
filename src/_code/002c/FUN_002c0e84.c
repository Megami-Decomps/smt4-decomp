/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c0e84` (_code @ 0x2c0e84, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */


void FUN_002c0e84(void)

{
/* irregular: irregular input(s): in_cr0, in_r12; 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int unaff_r4;
  int unaff_r6;
  int in_r12;
  unsigned int in_cr0;
  
  temp_v1 = *(unsigned int *)(((((unaff_r4 & 0x3ffff) << 7) & (unaff_r4 << 0x10)) >> 8) + 8) >> 0x10;
  *(int *)(unaff_r6 + 0x60) = unaff_r6 >> 2;
  coprocessor_storelong(0,in_cr0,in_r12 - 0x138);
  *(unsigned int *)(temp_v1 * 2 + 0x60) = temp_v1;
  coprocessor_load(0,in_cr0,in_r12);
  temp_v0 = temp_v1 << ((unaff_r6 >> 2) & 0xffU);
  *(unsigned int *)(temp_v0 + 0x50) = 0;
  *(unsigned int *)(temp_v0 + 0x5c) = 0;
  return;
}
