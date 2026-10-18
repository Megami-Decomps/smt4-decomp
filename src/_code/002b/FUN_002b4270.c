/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b4270` (_code @ 0x2b4270, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


/* WARNING: Control flow encountered bad instruction data */

void FUN_002b4270(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned char *param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = param_1[1];
  param_1[1] = 0x20;
  temp_v1 = param_1[2];
  if (temp_v1 < 0x20) {
    temp_v1 = 0x20;
  }
  param_1[2] = temp_v1;
  param_1[1] = temp_v0;
  *param_4 = (char)*param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
