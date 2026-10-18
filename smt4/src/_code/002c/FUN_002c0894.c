/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c0894` (_code @ 0x2c0894, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


/* WARNING: Control flow encountered bad instruction data */

void FUN_002c0894(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *param_1;
  *param_1 = temp_v0 - 1;
  if (temp_v0 - 1 != 0) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
