/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b777c` (_code @ 0x2b777c, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


/* WARNING: Control flow encountered bad instruction data */

void FUN_002b777c(int *param_1,int *param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  
  temp_v0 = *param_2;
  piVar2 = (int *)param_2[1];
  *(int **)(temp_v0 + 4) = piVar2;
  *piVar2 = temp_v0;
  *param_1 = *param_1 - 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
