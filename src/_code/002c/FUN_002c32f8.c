/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c32f8` (_code @ 0x2c32f8, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif


unsigned long long
FUN_002c32f8(unsigned short *param_1,unsigned int param_2,unsigned short param_3,unsigned int param_4,
            unsigned short param_5,unsigned int param_6,unsigned short param_7,unsigned int param_8,
            unsigned short param_9,unsigned int param_10,unsigned short param_11)

{
/* irregular: irregular input(s): in_cr0; 3 native warning(s); review required */
  unsigned int unaff_r4;
  unsigned int in_cr0;
  
  *param_1 = param_3;
  param_1[1] = param_5;
  param_1[2] = param_7;
  param_1[3] = param_9;
  param_1[4] = param_11;
  *(unsigned int *)(param_1 + 6) = param_2;
  *(unsigned int *)(param_1 + 8) = param_4;
  coprocessor_store(0,in_cr0,param_1 + 10);
  return romwright_piece_4_4(unaff_r4,param_1 + 10);
}
