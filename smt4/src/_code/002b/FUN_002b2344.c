/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b2344` (_code @ 0x2b2344, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


/* WARNING: Control flow encountered bad instruction data */

void FUN_002b2344(int param_1,unsigned int param_2,unsigned short param_3)

{
/* irregular: 3 native warning(s); review required */
  int unaff_r6;
  
  if (param_1 == 0) {
    return;
  }
  *(unsigned short *)(unaff_r6 + 0x32) = param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
