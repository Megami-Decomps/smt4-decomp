/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bd954` (_code @ 0x2bd954, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int uRam00000002; /* 0x2 */

extern unsigned int FUN_002c4938(unsigned int *, unsigned int);


/* WARNING: Control flow encountered bad instruction data */

void FUN_002bd954(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned short param_5)

{
/* irregular: irregular input(s): in_s0; 2 native warning(s); review required */
  unsigned int in_s0;
  
  uRam00000002 = FUN_002c4938(param_1,0x8c);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0xffffffff;
  param_1[8] = in_s0;
  *(unsigned short *)(param_1 + 0xe) = param_5;
  param_1[9] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[0xb] = 0x3f800000;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
