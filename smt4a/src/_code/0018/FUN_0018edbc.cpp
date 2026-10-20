/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018edbc` (_code @ 0x18edbc, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorFloatToUnsigned(double, int);

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */


unsigned int FUN_0018edbc(void)

{
/* irregular: irregular input(s): in_s0; 2 native warning(s); review required */
  float in_s0;
  unsigned int temp_v0;
  float temp_v1;
  
  temp_v1 = 1.0f;
  if ((in_s0 <= 1.0f) && (temp_v1 = in_s0, in_s0 < 0.0f)) {
    temp_v1 = 0.0f;
  }
  temp_v0 = VectorFloatToUnsigned(temp_v1 * 255.0f + 0.5f,3);
  return temp_v0 & 0xff;
}

} /* extern "C" */
