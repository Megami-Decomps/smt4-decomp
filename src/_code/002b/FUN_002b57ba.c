/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b57ba` (_code @ 0x2b57ba, 0x66 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002b57ba(unsigned char *param_1)

{
/* irregular: irregular input(s): in_cr1, in_cr4, in_cr7; 6 native warning(s); review required */
  unsigned int in_cr1;
  unsigned int in_cr4;
  unsigned int in_cr7;
  
  coprocessor_function(0,0xb,0,in_cr7,in_cr4,in_cr1);
  *param_1 = (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
