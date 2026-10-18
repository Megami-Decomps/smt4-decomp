/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f8e4c` (_code @ 0x3f8e4c, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
extern int FUN_003f887c(void);


unsigned int FUN_003f8e4c(void)

{
/* irregular: irregular input(s): in_fpscr; 1 native warning(s); review required */
  int temp_v0;
  unsigned int in_fpscr;
  
  temp_v0 = FUN_003f887c();
  VectorUnsignedToFloat((unsigned int)*(unsigned short *)(temp_v0 + 2),(unsigned char)(in_fpscr >> 0x16) & 3);
  return (unsigned int)*(unsigned short *)(temp_v0 + 2);
}
