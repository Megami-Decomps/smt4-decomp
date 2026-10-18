/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b5c2c` (_code @ 0x2b5c2c, 0x10 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


/* WARNING: Control flow encountered bad instruction data */

void FUN_002b5c2c(unsigned char *param_1,unsigned char param_2)

{
/* irregular: 2 native warning(s); review required */
  *(unsigned short *)(param_1 + 2) = 0;
  *param_1 = param_2;
  *(unsigned char **)param_1 = param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
