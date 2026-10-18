/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ac444` (_code @ 0x2ac444, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


/* WARNING: Control flow encountered bad instruction data */

unsigned int * FUN_002ac444(unsigned int *param_1,int *param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  *param_1 = 0;
  param_1[1] = 0;
  temp_v0 = 0x44535743;
  if (*param_2 == 0x44535743) {
    temp_v0 = param_2[2];
  }
  if (*param_2 != 0x44535743 || temp_v0 != 0x1000000) {
    return param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
