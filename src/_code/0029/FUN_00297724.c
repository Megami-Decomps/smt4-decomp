/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00297724` (_code @ 0x297724, 0x80 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


int FUN_00297724(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  int temp_v0;
  unsigned int in_fpscr;
  
  temp_v0 = *(int *)(param_1 + 0x1c) - 1;
  *(int *)(param_1 + 0x1c) = temp_v0;
  switch(*(unsigned char *)(temp_v0 + param_1 + 0x20)) {
  case 0:
    param_1 = param_1 + temp_v0 * 4;
    temp_v0 = *(int *)(param_1 + 0x3c);
    break;
  case 1:
    return param_1 + temp_v0 * 4;
  case 2:
    param_1 = *(int *)(*(int *)(param_1 + temp_v0 * 4 + 0x3c) * 4 + 0x4c4744);
    temp_v0 = param_1;
    break;
  case 3:
    return *(int *)(param_1 + temp_v0 * 4 + 0x3c) * 4 + 0x4c4d44;
  default:
    return param_1;
  }
  VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  return param_1;
}
