/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00432d44` (_code @ 0x432d44, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f651c(unsigned int, int);
int VectorUnsignedToFloat(unsigned int, int);

/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002f651c. */


void FUN_00432d44(unsigned int param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  unsigned int in_fpscr;
  unsigned int temp_v2;
  float in_s0;
  
  temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(in_s0 < 0.0f) << 0x1f) | ((unsigned int)(in_s0 == 0.0f) << 0x1e);
  temp_v2 = temp_v0 | ((unsigned int)(in_s0 != in_s0) << 0x1c);
  temp_v1 = (unsigned char)(temp_v0 >> 0x18);
  if (!(unsigned char)((temp_v1 >> 6) & 1) && temp_v1 >> 7 == ((unsigned char)(temp_v2 >> 0x1c) & 1)) {
    FUN_002f651c(param_1,0x10000);
    VectorUnsignedToFloat(param_1,(unsigned char)(temp_v2 >> 0x16) & 3);
  }
  return;
}

} /* extern "C" */
