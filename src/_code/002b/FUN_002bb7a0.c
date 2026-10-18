/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bb7a0` (_code @ 0x2bb7a0, 0x8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0044e38c; /* 0x44e38c */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002bb7a0(unsigned char param_1)

{
/* irregular: 2 native warning(s); review required */
  DAT_0044e38c = param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
