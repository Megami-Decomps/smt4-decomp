/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00518a50` (_code @ 0x518a50, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0051ca30. */


unsigned int FUN_00518a50(unsigned int *param_1)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  unsigned int in_fpscr;
  
  FUN_0051ca30();
  VectorUnsignedToFloat(*param_1 >> 0xc,(unsigned char)(in_fpscr >> 0x16) & 3);
  return *param_1 >> 0xc;
}
