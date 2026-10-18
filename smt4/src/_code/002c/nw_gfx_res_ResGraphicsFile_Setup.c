/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_res_ResGraphicsFile_Setup` (_code @ 0x2c2b24, 0x25c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int uRam00000034; /* 0x34 */

/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_movefromRt (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Supplied declaration required: FUN_002c3424. */


void nw_gfx_res_ResGraphicsFile_Setup(int *param_1)

{
/* irregular: irregular input(s): in_cr0, in_cr12, in_s0, in_s1, in_s16, in_s2, in_s3, in_s4; 13 native warning(s); review required */
  int temp_v0;
  unsigned int in_cr0;
  unsigned int in_cr12;
  float in_s0;
  float in_s1;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float in_s2;
  float in_s3;
  float in_s4;
  unsigned int in_s16;
  
  if (*(int *)(*param_1 + 0x2c) < 1) {
    FUN_002c3424(*param_1);
    return;
  }
  temp_v0 = *(int *)(*param_1 + 0x30);
  if (temp_v0 != 0) {
    temp_v0 = *param_1 + 0x30 + temp_v0;
  }
  else {
    temp_v0 = 0;
  }
  if (temp_v0 != 0) {
    VectorFloatToUnsigned(in_s3 + in_s2 * in_s4,3);
    temp_v1 = *(float *)(temp_v0 + 4);
    temp_v3 = in_s0;
    temp_v2 = in_s1;
    if (temp_v1 <= in_s0) {
      temp_v3 = temp_v1;
      if (temp_v1 < temp_v2) {
        temp_v3 = in_s1;
      }
    }
    do {
      VectorFloatToUnsigned(in_s3 + temp_v3 * in_s4,3);
      temp_v2 = *(float *)(temp_v0 + 8);
      temp_v3 = in_s0;
      if ((temp_v2 <= in_s0) && (temp_v3 = temp_v2, temp_v2 < in_s1)) {
        temp_v3 = in_s1;
      }
      temp_v2 = in_s3 + temp_v3 * in_s4;
      VectorFloatToUnsigned(temp_v2,3);
      temp_v1 = *(float *)(temp_v0 + 0xc);
      if ((temp_v1 <= in_s0) && (temp_v1 < in_s1)) {
        in_s0 = in_s1;
      }
      in_s1 = in_s1 - in_s1 * in_s3;
      temp_v0 = coprocessor_movefromRt(10,5,0,in_cr12,in_cr0);
      coprocessor_function(0xc,1,0,in_cr0,in_cr0,in_cr0);
      temp_v3 = temp_v1;
      if (temp_v1 < temp_v2) {
        temp_v3 = in_s1;
      }
    } while( 1 );
  }
  uRam00000034 = in_s16;
  coprocessor_store(0,in_cr0,0xe0);
  return;
}
