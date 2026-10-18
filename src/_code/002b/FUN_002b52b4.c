/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b52b4` (_code @ 0x2b52b4, 0x67 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004218c8; /* 0x4218c8 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002b52b4(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  param_1[1] = param_2;
  param_1[2] = param_3;
  *param_1 = (unsigned int)&DAT_004218c8;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  *(unsigned char *)(param_1 + 0xb) = 1;
  *(unsigned char *)(param_1 + 0xc) = 1;
  param_1[0xe] = 3;
  param_1[0xd] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
