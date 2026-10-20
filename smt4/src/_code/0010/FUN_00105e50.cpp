/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00105e50` (_code @ 0x105e50, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorSignedToFloat(int, int);

extern int DAT_004e3ba0; /* 0x4e3ba0 */
extern float DAT_004e3ba4; /* 0x4e3ba4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


void FUN_00105e50(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  unsigned int in_fpscr;
  float temp_v0;
  
  temp_v0 = (float)VectorSignedToFloat(param_1 + 1,(unsigned char)(in_fpscr >> 0x16) & 3);
  DAT_004e3ba4 = 1e+06f / (59.831f / temp_v0);
  DAT_004e3ba0 = param_1;
  return;
}

} /* extern "C" */
