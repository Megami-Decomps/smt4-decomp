/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f8f54` (_code @ 0x3f8f54, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorUnsignedToFloat(unsigned int, int);

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
extern unsigned int *FUN_003f89f8(void);


unsigned int FUN_003f8f54(void)

{
/* irregular: irregular input(s): in_fpscr; 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int in_fpscr;
  
  puVar1 = (unsigned int *)FUN_003f89f8();
  VectorUnsignedToFloat(*puVar1 >> 0xc,(unsigned char)(in_fpscr >> 0x16) & 3);
  return *puVar1 >> 0xc;
}

} /* extern "C" */
