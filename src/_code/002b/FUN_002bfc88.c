/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bfc88` (_code @ 0x2bfc88, 0xc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */
/* Supplied declaration required: FUN_002b761c. */
/* Supplied declaration required: func_0x006c190c. */
/* Supplied declaration required: func_0x006c1910. */


void FUN_002bfc88(int param_1,int param_2,int *param_3,int param_4)

{
/* irregular: irregular input(s): in_cr0, in_r12; 12 native warning(s); review required */
  int temp_v0;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r11;
  int in_r12;
  unsigned int in_cr0;
  
  *(int *)(param_1 * 2) = param_2;
  *param_3 = param_1 >> 0xe;
  param_3[1] = param_2;
  param_3[2] = (int)param_3;
  param_3[3] = param_4;
  param_3[4] = param_1;
  param_3[5] = unaff_r5;
  param_3[6] = unaff_r6;
  param_3[7] = unaff_r7;
  param_3[8] = unaff_r8;
  param_3[9] = unaff_r9;
  param_3[10] = unaff_r11;
  param_3[0xb] = in_r12;
  func_0x006c190c();
  func_0x006c1910();
  FUN_002b761c(param_1 + 0xa8);
  temp_v0 = unaff_r5 * 4;
  *(short *)(temp_v0 + 0x2c) = (short)temp_v0;
  *(short *)(temp_v0 + 0x2c) = (short)unaff_r6;
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
