/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bf288` (_code @ 0x2bf288, 0xf8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: func_0x0177870e. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002bf288(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 3 native warning(s); review required */
  func_0x0177870e((unsigned int)(param_3 >> 0xd) >> 8,param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
