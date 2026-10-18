/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c1ffc` (_code @ 0x2c1ffc, 0xac bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */
/* Supplied declaration required: FUN_002b761c. */


void FUN_002c1ffc(int param_1,int param_2,unsigned int param_3,int param_4)

{
/* irregular: irregular input(s): in_cr0, in_r12, in_s0, in_s1, in_s2, in_s3; 8 native warning(s); review required */
  int unaff_r6;
  int in_r12;
  unsigned int in_cr0;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned int in_s3;
  
  *(unsigned int *)(param_1 + 0x28) = in_s0;
  *(unsigned int *)(param_1 + 0x2c) = in_s1;
  *(unsigned int *)(param_1 + 0x30) = in_s2;
  *(unsigned int *)(param_1 + 0x34) = in_s3;
  FUN_002b761c(param_1 + 0xa8);
  param_2 = param_2 * 4;
  *(short *)(param_2 + 0x2c) = (short)param_2;
  *(short *)(param_2 + 0x2c) = (short)unaff_r6;
  param_4 = param_4 >> 0x20;
  *(int *)(unaff_r6 + 0x60) = param_1 << 2;
  coprocessor_storelong(0,in_cr0,in_r12 - 0x138);
  *(int *)(param_4 * 2 + 0x60) = param_4;
  coprocessor_load(0,in_cr0,in_r12);
  param_4 = param_4 << ((param_1 << 2) & 0xffU);
  *(unsigned int *)(param_4 + 0x50) = 0;
  *(unsigned int *)(param_4 + 0x5c) = 0;
  return;
}
