/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002911e0` (_code @ 0x2911e0, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
extern char FUN_00296d6c(unsigned int, unsigned int);


void FUN_002911e0(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_fpscr; 1 native warning(s); review required */
  char temp_v0;
  unsigned int in_fpscr;
  
  temp_v0 = FUN_00296d6c(0,1);
  if (temp_v0 != '\0') {
    VectorUnsignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorUnsignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    return;
  }
  VectorUnsignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorUnsignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  return;
}
