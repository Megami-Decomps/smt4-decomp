/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b47bc` (_code @ 0x2b47bc, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


/* WARNING: Control flow encountered bad instruction data */

void FUN_002b47bc(int param_1,int param_2,unsigned int *param_3)

{
/* irregular: 2 native warning(s); review required */
  if (param_3 != (unsigned int *)0x0) {
    *param_3 = *(unsigned int *)(param_1 + param_2 * 0x10 + *(int *)(param_1 + 0x14) + 4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
