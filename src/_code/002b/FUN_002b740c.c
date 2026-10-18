/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b740c` (_code @ 0x2b740c, 0x5e bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_movefromRt (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002b740c(void)

{
/* irregular: irregular input(s): in_cr0, in_cr1, in_fpscr, in_s0; 10 native warning(s); review required */
  unsigned int in_fpscr;
  unsigned int in_cr0;
  unsigned int in_cr1;
  float in_s0;
  float temp_v0;
  unsigned int temp_v1;
  
  for (temp_v0 = romwright_fabs_4(in_s0); (int)temp_v0 >= 0x47800000; temp_v0 = temp_v0 - 65536.0f) {
  }
  temp_v1 = VectorFloatToUnsigned(temp_v0,3);
  VectorSignedToFloat(temp_v1 & 0xffff,(unsigned char)((in_fpscr & 0xfffffff) >> 0x16) & 3);
  coprocessor_movefromRt(10,3,0,in_cr0,in_cr0);
  coprocessor_function(10,0xf,0,in_cr0,in_cr1,in_cr0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
