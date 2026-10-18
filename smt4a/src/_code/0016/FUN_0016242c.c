/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016242c` (_code @ 0x16242c, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_001a1ea8. */


void FUN_0016242c(void)

{
/* irregular: irregular input(s): in_s2, in_s3; 4 native warning(s); review required */
  unsigned int temp_v0;
  float in_s2;
  float in_s3;
  
  if (((in_s2 != 0.0f) && (0.0f < in_s3)) && (in_s3 < in_s2)) {
    temp_v0 = VectorFloatToUnsigned((in_s3 * 16384.0f) / in_s2 + 49152.0f,3);
    FUN_001a1ea8(temp_v0 & 0xffff);
  }
  return;
}
