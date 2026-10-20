/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a1ea8` (_code @ 0x1a1ea8, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorUnsignedToFloat(unsigned int, int);

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */


void FUN_001a1ea8(unsigned int param_1)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  unsigned int in_fpscr;
  
  VectorUnsignedToFloat(param_1 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
  return;
}

} /* extern "C" */
