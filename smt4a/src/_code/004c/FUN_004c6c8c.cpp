/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c6c8c` (_code @ 0x4c6c8c, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorSignedToFloat(unsigned int, int);

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


int FUN_004c6c8c(unsigned int param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_fpscr, in_s0, in_s3; 4 native warning(s); review required */
  unsigned int in_fpscr;
  float in_s0;
  float temp_v0;
  float in_s3;
  
  temp_v0 = (float)VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  return (int)((temp_v0 + in_s0) * in_s3) + param_2 + param_3;
}

} /* extern "C" */
