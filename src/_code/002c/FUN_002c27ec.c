/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c27ec` (_code @ 0x2c27ec, 0x108 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coprocessor_movefromRt (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002c27ec(void)

{
/* irregular: irregular input(s): in_cr0, in_cr12, in_cr2, in_cr4; 9 native warning(s); review required */
  int temp_v0;
  unsigned int in_cr0;
  unsigned int in_cr2;
  unsigned int in_cr4;
  unsigned int in_cr12;
  
  temp_v0 = coprocessor_movefromRt(10,5,0,in_cr12,in_cr0);
  coprocessor_function(0xc,1,0,in_cr0,in_cr0,in_cr0);
  coprocessor_movefromRt(10,5,0,in_cr4,in_cr0);
  coprocessor_function(10,0xf,0,in_cr2,in_cr0,in_cr2);
  coprocessor_movefromRt(10,5,0,in_cr12,in_cr0);
  coprocessor_load(0,in_cr2,temp_v0 + 0x3fc);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
