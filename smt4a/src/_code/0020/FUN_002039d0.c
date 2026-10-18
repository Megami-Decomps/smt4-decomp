/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002039d0` (_code @ 0x2039d0, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00184964. */


void FUN_002039d0(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  unsigned int in_fpscr;
  
  if (param_1 == 0) {
    temp_v1 = FUN_00184964(0,param_2);
    VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorUnsignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    return;
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      return;
    }
    temp_v0 = FUN_00184964(0,1);
    if (temp_v0 != '\0') {
      temp_v1 = FUN_00184964(0,param_2);
      VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorUnsignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
      return;
    }
  }
  temp_v1 = FUN_00184964(0,param_2);
  VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorUnsignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  return;
}
