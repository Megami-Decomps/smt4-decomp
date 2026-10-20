/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017fc38` (_code @ 0x17fc38, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorSignedToFloat(int, int);

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


void FUN_0017fc38(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  unsigned int in_fpscr;
  
  if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 8)) {
    VectorSignedToFloat(*(int *)(param_1 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(int *)(param_1 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  return;
}

} /* extern "C" */
