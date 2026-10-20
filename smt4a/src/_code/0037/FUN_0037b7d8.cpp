/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037b7d8` (_code @ 0x37b7d8, 0xc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorSignedToFloat(unsigned int, int);

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


void FUN_0037b7d8(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  unsigned int in_fpscr;
  
  VectorSignedToFloat(*(unsigned int *)(param_1 + 0x30),(unsigned char)(in_fpscr >> 0x16) & 3);
  return;
}

} /* extern "C" */
