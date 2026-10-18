/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f9078` (_code @ 0x3f9078, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
extern int FUN_003f8aa8(void);


unsigned int FUN_003f9078(void)

{
/* irregular: irregular input(s): in_fpscr; 1 native warning(s); review required */
  int temp_v0;
  unsigned int in_fpscr;
  
  temp_v0 = FUN_003f8aa8();
  VectorUnsignedToFloat((unsigned int)*(unsigned short *)(temp_v0 + 2),(unsigned char)(in_fpscr >> 0x16) & 3);
  return (unsigned int)*(unsigned short *)(temp_v0 + 2);
}
