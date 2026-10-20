/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013a630` (_code @ 0x13a630, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorSignedToFloat(int, int);

extern int DAT_0063ff48; /* 0x63ff48 */
extern float DAT_0063ff4c; /* 0x63ff4c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


void FUN_0013a630(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  unsigned int in_fpscr;
  float temp_v0;
  
  temp_v0 = (float)VectorSignedToFloat(param_1 + 1,(unsigned char)(in_fpscr >> 0x16) & 3);
  DAT_0063ff4c = 1e+06f / (59.831f / temp_v0);
  DAT_0063ff48 = param_1;
  return;
}

} /* extern "C" */
