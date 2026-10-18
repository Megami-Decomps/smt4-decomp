/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b3b34` (_code @ 0x2b3b34, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */


void FUN_002b3b34(unsigned int param_1)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  unsigned int in_fpscr;
  
  VectorUnsignedToFloat(param_1 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
  return;
}
