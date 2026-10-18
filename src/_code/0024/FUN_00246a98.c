/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00246a98` (_code @ 0x246a98, 0x14 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002bf710. */


void FUN_00246a98(unsigned int param_1)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  unsigned int in_fpscr;
  
  VectorUnsignedToFloat(param_1,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002bf710();
  return;
}
