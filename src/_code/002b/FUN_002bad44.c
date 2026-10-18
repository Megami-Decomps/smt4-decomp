/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bad44` (_code @ 0x2bad44, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


/* WARNING: Control flow encountered bad instruction data */

void FUN_002bad44(unsigned int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int unaff_r6;
  
  *(unsigned int *)(param_2 + 0x44) = unaff_r6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
