/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002313d4` (_code @ 0x2313d4, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


void FUN_002313d4(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  unsigned int in_fpscr;
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v0 = VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  *param_1 = temp_v0;
  param_1[1] = temp_v1;
  return;
}
