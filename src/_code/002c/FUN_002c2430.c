/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c2430` (_code @ 0x2c2430, 0xb4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif


/* WARNING: Control flow encountered bad instruction data */

unsigned long long FUN_002c2430(int param_1,unsigned int param_2,int param_3)

{
/* irregular: irregular input(s): in_cr0; 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int in_cr0;
  
  temp_v1 = *(unsigned int *)(param_1 + 0x8c);
  if (temp_v1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(unsigned int *)(param_3 * 2) = 0;
  temp_v0 = (temp_v1 & 0x3ffffff) >> 2;
  coprocessor_store(0,in_cr0,temp_v0);
  return romwright_piece_4_4(temp_v1 << 6,temp_v0);
}
