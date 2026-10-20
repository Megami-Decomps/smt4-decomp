/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f8f24` (_code @ 0x3f8f24, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorUnsignedToFloat(int, int);

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
extern int FUN_003f8940(void);


int FUN_003f8f24(void)

{
/* irregular: irregular input(s): in_fpscr; 1 native warning(s); review required */
  int temp_v0;
  unsigned int in_fpscr;
  
  temp_v0 = FUN_003f8940();
  temp_v0 = (unsigned int)*(unsigned char *)(temp_v0 + 1) + (unsigned int)*(unsigned char *)(temp_v0 + 2) * 0x100;
  VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  return temp_v0;
}

} /* extern "C" */
