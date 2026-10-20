/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b63b0` (_code @ 0x1b63b0, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b4030(void);
int VectorFloatToUnsigned(double, int);
int VectorUnsignedToFloat(unsigned int, int);

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001b4030. */


void FUN_001b63b0(void)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 4 native warning(s); review required */
  unsigned int in_fpscr;
  float in_s0;
  float temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = romwright_fabs_4(in_s0);
  if ((int)temp_v0 >= 0x47800000) {
    FUN_001b4030();
  }
  temp_v1 = VectorFloatToUnsigned(temp_v0,3);
  VectorUnsignedToFloat(temp_v1 & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
  return;
}

} /* extern "C" */
