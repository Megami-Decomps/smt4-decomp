/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c03ec` (_code @ 0x2c03ec, 0xac bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned char sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_4_stack;

extern unsigned int uRam00000060; /* 0x60 */

/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
#ifndef ROMWRIGHT_ZEXT_4_8_DEFINED
#define ROMWRIGHT_ZEXT_4_8_DEFINED
#define romwright_zext_4_8(value) ((unsigned long long)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_0012d23c. */
/* Supplied declaration required: FUN_002b761c. */
/* Supplied declaration required: func_0x006c190c. */
/* Supplied declaration required: func_0x006c1910. */


long long FUN_002c03ec(int param_1,int param_2,int *param_3,int param_4)

{
/* irregular: irregular input(s): in_cr0, in_r12; 10 native warning(s); review required */
  int temp_v0;
  int unaff_r4;
  int unaff_r7;
  int unaff_r11;
  int in_r12;
  unsigned int in_cr0;
  unsigned char temp_v1 [44];
  
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_0012d23c(param_2);
    return romwright_zext_4_8(temp_v1) << 0x20;
  }
  *param_3 = unaff_r4 >> 0xe;
  param_3[1] = param_4;
  param_3[2] = (int)param_3;
  param_3[3] = param_4;
  param_3[4] = unaff_r4;
  param_3[5] = param_1;
  param_3[6] = 0;
  param_3[7] = unaff_r7;
  param_3[8] = 1;
  param_3[9] = param_2;
  param_3[10] = unaff_r11;
  param_3[0xb] = in_r12;
  func_0x006c190c();
  func_0x006c1910();
  FUN_002b761c(unaff_r4 + 0xa8);
  temp_v0 = param_1 * 4;
  *(short *)(temp_v0 + 0x2c) = (short)temp_v0;
  *(unsigned short *)(temp_v0 + 0x2c) = 0;
  param_4 = param_4 >> 0x20;
  coprocessor_storelong(0,in_cr0,in_r12 - 0x138);
  uRam00000060 = unaff_r4 << 2;
  *(int *)(param_4 * 2 + 0x60) = param_4;
  coprocessor_load(0,in_cr0,in_r12);
  param_4 = param_4 << ((unaff_r4 << 2) & 0xffU);
  *(unsigned int *)(param_4 + 0x50) = 0;
  *(unsigned int *)(param_4 + 0x5c) = 0;
  return romwright_piece_4_4(param_1,param_4);
}
