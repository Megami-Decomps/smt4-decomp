/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bb804` (_code @ 0x2bb804, 0x88 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002c3a24. */


/* WARNING: Control flow encountered bad instruction data */

unsigned int FUN_002bb804(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned int unaff_r4;
  
  if (param_4 != 0) {
    FUN_002c3a24();
    return 0;
  }
  *(unsigned int *)(param_1 * 2) = unaff_r4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
