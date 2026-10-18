/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bd808` (_code @ 0x2bd808, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


/* WARNING: Control flow encountered bad instruction data */

void FUN_002bd808(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = *param_2;
  *param_1 = temp_v0;
  *param_2 = temp_v0;
  param_2[1] = (unsigned int)(param_1 + 0x2d);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
