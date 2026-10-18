/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ff8ac` (_code @ 0x4ff8ac, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */


unsigned int FUN_004ff8ac(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int in_fpscr;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = (unsigned int)*(unsigned char *)(*(unsigned short *)(*(int *)(param_1 + 0x10) + 0x10) + 0x527248);
    VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  return temp_v0;
}
