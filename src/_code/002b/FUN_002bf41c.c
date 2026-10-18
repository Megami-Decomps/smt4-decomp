/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bf41c` (_code @ 0x2bf41c, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int *DAT_004e3cf4; /* 0x4e3cf4 */

/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */
/* Supplied declaration required: FUN_002b761c. */
/* Supplied declaration required: func_0x006c190c. */
/* Supplied declaration required: func_0x006c1910. */


void FUN_002bf41c(unsigned int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: irregular input(s): in_cr0, in_r12; 13 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r11;
  int in_r12;
  unsigned int in_cr0;
  
  piVar1 = DAT_004e3cf4;
  *DAT_004e3cf4 = unaff_r4 >> 0xe;
  piVar1[1] = param_1 >> 0x1f;
  piVar1[2] = (int)piVar1;
  piVar1[3] = param_4;
  piVar1[4] = unaff_r4;
  piVar1[5] = unaff_r5;
  piVar1[6] = unaff_r6;
  piVar1[7] = unaff_r7;
  piVar1[8] = unaff_r8;
  piVar1[9] = unaff_r9;
  piVar1[10] = unaff_r11;
  piVar1[0xb] = in_r12;
  func_0x006c190c();
  func_0x006c1910();
  FUN_002b761c(unaff_r4 + 0xa8);
  temp_v0 = unaff_r5 * 4;
  *(short *)(temp_v0 + 0x2c) = (short)temp_v0;
  *(short *)(temp_v0 + 0x2c) = (short)unaff_r6;
  param_4 = param_4 >> 0x20;
  *(int *)(unaff_r6 + 0x60) = unaff_r4 << 2;
  coprocessor_storelong(0,in_cr0,in_r12 - 0x138);
  *(int *)(param_4 * 2 + 0x60) = param_4;
  coprocessor_load(0,in_cr0,in_r12);
  param_4 = param_4 << ((unaff_r4 << 2) & 0xffU);
  *(unsigned int *)(param_4 + 0x50) = 0;
  *(unsigned int *)(param_4 + 0x5c) = 0;
  return;
}
