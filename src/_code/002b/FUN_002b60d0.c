/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b60d0` (_code @ 0x2b60d0, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x002b58fa) */

void FUN_002b60d0(unsigned char *param_1)

{
/* irregular: irregular input(s): in_cr1, in_cr4, in_cr7, in_stack_00000000; 8 native warning(s); review required */
  unsigned int in_cr1;
  unsigned int in_cr4;
  unsigned int in_cr7;
  unsigned char *in_stack_00000000;
  
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 3;
  param_1[6] = 0xf;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 3;
  param_1[0xf] = 0xf;
  coprocessor_function(0,0xb,0,in_cr7,in_cr4,in_cr1);
  *in_stack_00000000 = (char)in_stack_00000000;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
