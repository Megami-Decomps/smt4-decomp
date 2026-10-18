/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0051ddf4` (_code @ 0x51ddf4, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
extern unsigned int *FUN_0051d95c(void);


unsigned int FUN_0051ddf4(void)

{
/* irregular: irregular input(s): in_fpscr; 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int in_fpscr;
  
  puVar1 = (unsigned int *)FUN_0051d95c();
  VectorUnsignedToFloat(*puVar1 >> 0xc,(unsigned char)(in_fpscr >> 0x16) & 3);
  return *puVar1 >> 0xc;
}
