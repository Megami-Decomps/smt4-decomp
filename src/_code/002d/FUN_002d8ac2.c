/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d8ac2` (_code @ 0x2d8ac2, 0x5 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002d8ac2(void)

{
/* irregular: irregular input(s): in_cr0, in_cr12, in_cr14; 6 native warning(s); review required */
  unsigned int in_cr0;
  unsigned int in_cr12;
  unsigned int in_cr14;
  
  coprocessor_function(3,8,1,in_cr14,in_cr12,in_cr0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
