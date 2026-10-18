/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c53f4` (_code @ 0x2c53f4, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


void FUN_002c53f4(int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  unsigned int in_fpscr;
  
  if (((0 < param_1) && (0 < param_2)) && (param_2 < param_1)) {
    VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(param_1,(unsigned char)(in_fpscr >> 0x16) & 3);
    return;
  }
  return;
}
