/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004663e4` (_code @ 0x4663e4, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */


void FUN_004663e4(unsigned int param_1)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  unsigned int in_fpscr;
  
  VectorUnsignedToFloat(param_1,(unsigned char)(in_fpscr >> 0x16) & 3);
  return;
}
