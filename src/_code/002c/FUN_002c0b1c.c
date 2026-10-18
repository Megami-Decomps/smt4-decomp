/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c0b1c` (_code @ 0x2c0b1c, 0x26 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002c0b1c(int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_cr0, in_cr3, in_cr7; 6 native warning(s); review required */
  unsigned int in_cr0;
  unsigned int in_cr3;
  unsigned int in_cr7;
  
  coprocessor_function(0,0xb,0,in_cr7,in_cr0,in_cr3);
  *(unsigned int *)(param_1 * 2 + 0x7c) = param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
