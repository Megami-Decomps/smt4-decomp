/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b2144` (_code @ 0x2b2144, 0x3d bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002b2144(void)

{
/* irregular: irregular input(s): in_cr1, in_cr4; 5 native warning(s); review required */
  unsigned int in_cr1;
  unsigned int in_cr4;
  
  coprocessor_function(0,0xb,0,in_cr4,in_cr4,in_cr1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
