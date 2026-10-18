/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002beed0` (_code @ 0x2beed0, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */
/* Supplied declaration required: FUN_002c4938. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002beed0(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned short param_6)

{
/* irregular: irregular input(s): in_cr5, in_s0; 4 native warning(s); review required */
  unsigned int in_cr5;
  unsigned int in_s0;
  
  FUN_002c4938(param_1,0x8c);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[8] = in_s0;
  *(unsigned short *)(param_1 + 0xe) = param_6;
  param_1[9] = 0x3f800000;
  param_1[0xb] = 0x3f800000;
  coprocessor_storelong(0,in_cr5,param_1 + 0x48);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
