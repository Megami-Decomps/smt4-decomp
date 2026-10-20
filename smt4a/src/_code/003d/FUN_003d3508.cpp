/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d3508` (_code @ 0x3d3508, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorSignedToFloat(int, int);

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


int FUN_003d3508(int param_1)

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
    param_1 = *(int *)(*(int *)(param_1 + temp_v0 * 4 + 0x3c) * 4 + 0x61889c);
    temp_v0 = param_1;
    break;
  case 3:
    return *(int *)(param_1 + temp_v0 * 4 + 0x3c) * 4 + 0x618e9c;
  default:
    return param_1;
  }
  VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  return param_1;
}

} /* extern "C" */
