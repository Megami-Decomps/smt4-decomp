/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00379c18` (_code @ 0x379c18, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


void FUN_00379c18(int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  unsigned int in_fpscr;
  float temp_v0;
  
  if (param_2 == 0x7f) {
    temp_v0 = 65535.0f;
  }
  else if (param_2 == 0x7e) {
    temp_v0 = 24.0f;
  }
  else if (param_2 < 0x32) {
    temp_v0 = (float)VectorSignedToFloat(param_2 * 2 + 1,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v0 = temp_v0 * 0.0078125f * 0.2f;
  }
  else {
    temp_v0 = (float)VectorSignedToFloat(0x7e - param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v0 = (60.0f / temp_v0) * 0.2f;
  }
  *(float *)(param_1 + 8) = temp_v0;
  return;
}
