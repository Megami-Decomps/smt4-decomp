/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0051dcb8` (_code @ 0x51dcb8, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
extern int FUN_0051d730(void);


int FUN_0051dcb8(void)

{
/* irregular: irregular input(s): in_fpscr; 1 native warning(s); review required */
  int temp_v0;
  unsigned int in_fpscr;
  
  temp_v0 = FUN_0051d730();
  temp_v0 = (unsigned int)*(unsigned char *)(temp_v0 + 1) + (*(unsigned char *)(temp_v0 + 2) & 0xf) * 0x100;
  VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  return temp_v0;
}
