/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c37b4` (_code @ 0x2c37b4, 0x70 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_004e39e0; /* 0x4e39e0 */
extern unsigned int DAT_004e3a64; /* 0x4e3a64 */
extern unsigned char DAT_004e3a68; /* 0x4e3a68 */
extern unsigned int *DAT_004e3b4c; /* 0x4e3b4c */
extern unsigned char *DAT_004e3b50; /* 0x4e3b50 */

/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif


unsigned long long FUN_002c37b4(int param_1)

{
/* irregular: irregular input(s): in_cr0; 5 native warning(s); review required */
  int temp_v0;
  unsigned int unaff_r4;
  int unaff_r6;
  int unaff_r7;
  unsigned int in_cr0;
  
  if (param_1 == 0) {
    DAT_004e3b50 = &DAT_004e3a68;
    DAT_004e3b4c = &DAT_004e39e0;
  }
  else {
    if (param_1 == 1) {
      temp_v0 = unaff_r7 >> 2;
      *(unsigned char **)(temp_v0 + 0xc) = &DAT_004e3a68;
      *(unsigned char **)(temp_v0 + 0x10) = &DAT_004e3a68;
      *(unsigned char **)(temp_v0 + 0x14) = &DAT_004e3a68;
      *(unsigned char **)(temp_v0 + 0x18) = &DAT_004e3a68;
      *(unsigned char **)(temp_v0 + 0x1c) = &DAT_004e3a68;
      return romwright_piece_4_4(&DAT_004e3a68,temp_v0);
    }
    if (param_1 == 2) {
      if (DAT_004e3a64 != 0) {
        DAT_004e3b50 = &DAT_004e3a68;
      }
      coprocessor_store(0,in_cr0,DAT_004e3a64 >> 8);
      return romwright_piece_4_4(unaff_r4,DAT_004e3a64 >> 8);
    }
  }
  temp_v0 = unaff_r6 * 0x20;
  *(unsigned char **)(temp_v0 + 8) = &DAT_004e3a68;
  *(unsigned char **)(temp_v0 + 0xc) = &DAT_004e3a68;
  *(unsigned char **)(temp_v0 + 0x10) = &DAT_004e3a68;
  *(unsigned char **)(temp_v0 + 0x14) = &DAT_004e3a68;
  *(unsigned char **)(temp_v0 + 0x18) = &DAT_004e3a68;
  *(unsigned char **)(temp_v0 + 0x1c) = &DAT_004e3a68;
  return romwright_piece_4_4(&DAT_004e3a68,temp_v0);
}
