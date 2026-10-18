/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c4938` (_code @ 0x2c4938, 0x41 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


/* WARNING: Control flow encountered bad instruction data */

void FUN_002c4938(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int unaff_r4;
  
  if (param_2 >= 0x20) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1 = param_1 + 4;
  }
  *(unsigned int *)((param_2 - 0x20) + (int)param_1) = unaff_r4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
