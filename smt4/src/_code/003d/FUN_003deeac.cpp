/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003deeac` (_code @ 0x3deeac, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorUnsignedToFloat(unsigned int, int);

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */


unsigned int FUN_003deeac(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int in_fpscr;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = (unsigned int)*(unsigned char *)(*(unsigned short *)(*(int *)(param_1 + 0x10) + 0x10) + 0x3ff7c0);
    VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  return temp_v0;
}

} /* extern "C" */
