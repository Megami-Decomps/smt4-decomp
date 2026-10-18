/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c39a4` (_code @ 0x2c39a4, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int FUN_002c39a4(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int unaff_r4;
  
  software_interrupt(0x25);
  *(unsigned int *)(*(int *)(param_1 + 0x528) >> 0x20) = param_2;
  return unaff_r4;
}
