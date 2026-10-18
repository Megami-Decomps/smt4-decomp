/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bf4f8` (_code @ 0x2bf4f8, 0xb bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


/* WARNING: Control flow encountered bad instruction data */

void FUN_002bf4f8(unsigned int param_1,unsigned int param_2,unsigned int *param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned int unaff_r5;
  unsigned int unaff_r6;
  
  *param_3 = param_1;
  param_3[1] = param_2;
  param_3[2] = param_4;
  param_3[3] = param_2;
  param_3[4] = unaff_r5;
  param_3[5] = unaff_r6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
