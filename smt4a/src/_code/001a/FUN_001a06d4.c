/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a06d4` (_code @ 0x1a06d4, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */


unsigned int FUN_001a06d4(void)

{
/* irregular: irregular input(s): in_s0; 3 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  float in_s0;
  unsigned int temp_v2;
  float temp_v3;
  float temp_v4;
  
  temp_v4 = 0.0f;
  if ((in_s0 == 0.0f) || ((unsigned int)romwright_fabs_4(in_s0) >> 0x17 == 0xff)) {
    return 0;
  }
  temp_v3 = (in_s0 + 2.0f) * 2048.0f;
  if (0.0f <= temp_v3) {
    temp_v1 = SBORROW4((int)temp_v3,0x46000000);
    temp_v0 = (int)temp_v3 - 0x46000000;
    if ((int)temp_v3 >= 0x46000000) {
      temp_v4 = 8191.0f;
    }
    else {
      temp_v1 = SBORROW4((int)temp_v3,0x45800000);
      temp_v0 = (int)temp_v3 - 0x45800000;
      temp_v4 = temp_v3;
    }
    if (temp_v0 < 0 == temp_v1) {
      temp_v2 = VectorFloatToUnsigned(temp_v4 - 4096.0f,3);
      return temp_v2;
    }
  }
  temp_v2 = VectorFloatToUnsigned(temp_v4 + 4096.0f,3);
  return temp_v2;
}
