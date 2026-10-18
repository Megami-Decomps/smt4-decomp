/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c34a4` (_code @ 0x2c34a4, 0xc4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif


unsigned long long
FUN_002c34a4(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_cr0; 3 native warning(s); review required */
  unsigned int unaff_r4;
  unsigned int in_cr0;
  
  *param_1 = param_4;
  coprocessor_store(0,in_cr0,(unsigned int)param_1 >> 8);
  return romwright_piece_4_4(unaff_r4,(unsigned int)param_1 >> 8);
}
