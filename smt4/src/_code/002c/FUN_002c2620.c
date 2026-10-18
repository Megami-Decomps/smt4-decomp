/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c2620` (_code @ 0x2c2620, 0x108 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coprocessor_movefromRt (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */


void FUN_002c2620(void)

{
/* irregular: irregular input(s): in_cr0, in_cr12, in_s0, in_s1, in_s2, in_s3, in_s4, in_s5; 7 native warning(s); review required */
  int temp_v0;
  unsigned int in_cr0;
  unsigned int in_cr12;
  float in_s0;
  float in_s1;
  float in_s2;
  float temp_v1;
  float temp_v2;
  float in_s3;
  float in_s4;
  float in_s5;
  
  do {
    in_s1 = in_s1 - in_s1 * in_s3;
    temp_v0 = coprocessor_movefromRt(10,5,0,in_cr12,in_cr0);
    coprocessor_function(0xc,1,0,in_cr0,in_cr0,in_cr0);
    if (in_s2 < in_s5) {
      in_s2 = in_s1;
    }
    VectorFloatToUnsigned(in_s3 + in_s2 * in_s4,3);
    temp_v1 = *(float *)(temp_v0 + 8);
    temp_v2 = in_s0;
    if ((temp_v1 <= in_s0) && (temp_v2 = temp_v1, temp_v1 < in_s1)) {
      temp_v2 = in_s1;
    }
    in_s5 = in_s3 + temp_v2 * in_s4;
    VectorFloatToUnsigned(in_s5,3);
    in_s2 = *(float *)(temp_v0 + 0xc);
    if ((in_s2 <= in_s0) && (in_s2 < in_s1)) {
      in_s0 = in_s1;
    }
  } while( 1 );
}
