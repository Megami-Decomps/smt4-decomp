/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bef88` (_code @ 0x2bef88, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


/* WARNING: Control flow encountered bad instruction data */

void FUN_002bef88(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  
  piVar1 = (int *)(param_1 + param_2 * 0x20 + 0x11ec);
  *piVar1 = *piVar1 - 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
