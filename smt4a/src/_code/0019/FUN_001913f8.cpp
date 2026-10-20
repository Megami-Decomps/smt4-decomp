/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001913f8` (_code @ 0x1913f8, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorUnsignedToFloat(unsigned int, int);

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
extern unsigned int lcgRandomHigh16(void);


void FUN_001913f8(void)

{
/* irregular: irregular input(s): in_fpscr; 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int in_fpscr;
  
  temp_v0 = lcgRandomHigh16();
  VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  return;
}

} /* extern "C" */
