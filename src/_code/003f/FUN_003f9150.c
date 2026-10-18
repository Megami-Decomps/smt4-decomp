/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f9150` (_code @ 0x3f9150, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
extern int FUN_003f8b6c(void);


int FUN_003f9150(void)

{
/* irregular: irregular input(s): in_fpscr; 1 native warning(s); review required */
  int temp_v0;
  unsigned int in_fpscr;
  
  temp_v0 = FUN_003f8b6c();
  temp_v0 = (unsigned int)*(unsigned char *)(temp_v0 + 1) + (unsigned int)*(unsigned char *)(temp_v0 + 2) * 0x100;
  VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  return temp_v0;
}
