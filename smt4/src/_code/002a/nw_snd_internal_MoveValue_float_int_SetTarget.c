/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_MoveValue_float_int_SetTarget` (_code @ 0x2a2008, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


void nw_snd_internal_MoveValue_float_int_SetTarget(float *param_1,float param_2)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 3 native warning(s); review required */
  unsigned int in_fpscr;
  float in_s0;
  float temp_v0;
  float temp_v1;
  float temp_v2;
  
  temp_v0 = param_1[1];
  if ((int)param_1[3] < (int)param_1[2]) {
    temp_v1 = (float)VectorSignedToFloat(param_1[3],(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v2 = (float)VectorSignedToFloat(param_1[2],(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v0 = ((temp_v0 - *param_1) * temp_v1) / temp_v2 + *param_1;
  }
  *param_1 = temp_v0;
  param_1[1] = in_s0;
  param_1[2] = param_2;
  param_1[3] = 0.0f;
  return;
}
