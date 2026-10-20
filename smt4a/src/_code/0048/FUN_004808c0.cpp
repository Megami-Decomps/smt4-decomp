/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004808c0` (_code @ 0x4808c0, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorSignedToFloat(int, int);

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


int FUN_004808c0(unsigned int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 2 native warning(s); review required */
  unsigned int in_fpscr;
  float in_s0;
  float temp_v0;
  
  switch(param_1) {
  case 1:
    temp_v0 = (float)VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    in_s0 = temp_v0 * 70.4f;
    break;
  case 2:
    temp_v0 = (float)VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    in_s0 = temp_v0 * 300.8f;
    break;
  case 3:
    in_s0 = (float)VectorSignedToFloat(param_2 * 800,(unsigned char)(in_fpscr >> 0x16) & 3);
    break;
  case 4:
    temp_v0 = (float)VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    in_s0 = temp_v0 * 2120.0f;
    break;
  case 5:
    temp_v0 = (float)VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    in_s0 = temp_v0 * 5600.0f;
  }
  return (int)in_s0;
}

} /* extern "C" */
