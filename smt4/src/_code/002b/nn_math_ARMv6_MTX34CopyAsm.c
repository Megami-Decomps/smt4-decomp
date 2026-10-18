/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_math_ARMv6_MTX34CopyAsm` (_code @ 0x2bfedc, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */


/* WARNING: Control flow encountered bad instruction data */

void nn_math_ARMv6_MTX34CopyAsm(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: irregular input(s): in_cr15; 4 native warning(s); review required */
  unsigned int in_cr15;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  if (param_2 == param_1) {
    return;
  }
  temp_v0 = param_2[1];
  temp_v1 = param_2[2];
  temp_v2 = param_2[3];
  temp_v3 = param_2[4];
  temp_v4 = param_2[5];
  *param_1 = *param_2;
  param_1[1] = temp_v0;
  param_1[2] = temp_v1;
  param_1[3] = temp_v2;
  param_1[4] = temp_v3;
  param_1[5] = temp_v4;
  coprocessor_store(0xf,in_cr15,(int)param_1 + 0x12);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
