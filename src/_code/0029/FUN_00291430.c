/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00291430` (_code @ 0x291430, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00291484. */


void FUN_00291430(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  unsigned int in_fpscr;
  
  if (param_1 == 0) {
    VectorUnsignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorUnsignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    return;
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      return;
    }
    FUN_00291484();
    return;
  }
  VectorUnsignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorUnsignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  return;
}
