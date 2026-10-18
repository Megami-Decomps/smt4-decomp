/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bad80` (_code @ 0x2bad80, 0x31c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


/* WARNING: Control flow encountered bad instruction data */

void FUN_002bad80(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
