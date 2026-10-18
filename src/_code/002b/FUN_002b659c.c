/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b659c` (_code @ 0x2b659c, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002b659c(int param_1,unsigned char param_2,unsigned char param_3,unsigned char param_4)

{
/* irregular: irregular input(s): in_cr1, in_cr4, in_cr7; 7 native warning(s); review required */
  unsigned char *unaff_r4;
  unsigned int in_cr1;
  unsigned int in_cr4;
  unsigned int in_cr7;
  
  *(unsigned char *)(param_1 + 4) = param_2;
  *(unsigned char *)(param_1 + 5) = param_4;
  *(unsigned char *)(param_1 + 6) = 0xf;
  *(unsigned char *)(param_1 + 7) = param_2;
  *(unsigned char *)(param_1 + 8) = param_2;
  *(unsigned char *)(param_1 + 9) = param_3;
  *(unsigned char *)(param_1 + 10) = param_2;
  *(unsigned char *)(param_1 + 0xb) = param_2;
  *(unsigned char *)(param_1 + 0xc) = param_2;
  *(unsigned char *)(param_1 + 0xd) = param_2;
  *(unsigned char *)(param_1 + 0xe) = param_4;
  *(unsigned char *)(param_1 + 0xf) = 0xf;
  coprocessor_function(0,0xb,0,in_cr7,in_cr4,in_cr1);
  *unaff_r4 = (char)unaff_r4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
