/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bfcb4` (_code @ 0x2bfcb4, 0x148 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_004e39e0; /* 0x4e39e0 */
extern unsigned char DAT_004e3a68; /* 0x4e3a68 */
extern int DAT_004e3aa0; /* 0x4e3aa0 */
extern unsigned char DAT_004e3ae0; /* 0x4e3ae0 */
extern int DAT_004e3b18; /* 0x4e3b18 */
extern unsigned char DAT_004e3be0; /* 0x4e3be0 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */
/* Supplied declaration required: FUN_002b761c. */
/* Supplied declaration required: func_0x006c190c. */
/* Supplied declaration required: func_0x006c1910. */


unsigned long long FUN_002bfcb4(int *param_1,int param_2)

{
/* irregular: irregular input(s): in_cr0, in_r12; 10 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  int unaff_r4;
  unsigned char *puVar3;
  int unaff_r6;
  int unaff_r9;
  int unaff_r11;
  int in_r12;
  unsigned int in_cr0;
  
  puVar3 = (unsigned char *)0x0;
  if (param_1 < (int *)0x2) {
    puVar3 = &DAT_004e3a68;
  }
  else if (param_1 == (int *)0x2) {
    puVar3 = &DAT_004e3ae0;
  }
  temp_v0 = DAT_004e3aa0;
  if (((param_1 < (int *)0x2) || (temp_v0 = DAT_004e3b18, param_1 == (int *)0x2)) && (temp_v0 == 0x500))
  {
    return romwright_piece_4_4(&DAT_004e39e0,param_2 >> 7);
  }
  puVar2 = &DAT_004e3be0;
  *param_1 = unaff_r4 >> 0xe;
  param_1[1] = (int)&DAT_004e39e0;
  param_1[2] = (int)param_1;
  param_1[3] = (int)&DAT_004e3be0;
  param_1[4] = unaff_r4;
  param_1[5] = (int)puVar3;
  param_1[6] = unaff_r6;
  param_1[7] = param_2;
  param_1[8] = 0;
  param_1[9] = unaff_r9;
  param_1[10] = unaff_r11;
  param_1[0xb] = in_r12;
  func_0x006c190c();
  func_0x006c1910();
  FUN_002b761c(unaff_r4 + 0xa8);
  temp_v0 = (int)puVar3 * 4;
  *(short *)(temp_v0 + 0x2c) = (short)temp_v0;
  *(short *)(temp_v0 + 0x2c) = (short)unaff_r6;
  temp_v0 = (int)puVar2 >> 0x20;
  *(int *)(unaff_r6 + 0x60) = unaff_r4 << 2;
  coprocessor_storelong(0,in_cr0,in_r12 - 0x138);
  *(int *)(temp_v0 * 2 + 0x60) = temp_v0;
  coprocessor_load(0,in_cr0,in_r12);
  temp_v0 = temp_v0 << ((unaff_r4 << 2) & 0xffU);
  *(unsigned int *)(temp_v0 + 0x50) = 0;
  *(unsigned int *)(temp_v0 + 0x5c) = 0;
  return romwright_piece_4_4(puVar3,temp_v0);
}
