/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d8bf8` (_code @ 0x4d8bf8, 0x108 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0056fcc0; /* 0x56fcc0 */

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_00406768. */


void FUN_004d8bf8(int param_1)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2; 5 native warning(s); review required */
  float in_s0;
  float temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  float in_s1;
  unsigned int temp_v3;
  float in_s2;
  float temp_v4;
  float temp_v5;
  
  if (-1 < *(short *)(param_1 + 0xac)) {
    temp_v4 = 1.0f;
    temp_v5 = 0.0f;
    temp_v0 = temp_v4;
    if ((in_s0 < 1.0f) && (temp_v0 = in_s0, in_s0 <= 0.0f)) {
      temp_v0 = temp_v5;
    }
    temp_v1 = VectorFloatToUnsigned(temp_v0 * 255.0f + 0.5f,3);
    temp_v0 = temp_v4;
    if ((in_s1 < 1.0f) && (temp_v0 = in_s1, in_s1 <= 0.0f)) {
      temp_v0 = temp_v5;
    }
    temp_v3 = VectorFloatToUnsigned(temp_v0 * 255.0f + 0.5f,3);
    if (in_s2 >= 1.0f) {
      temp_v5 = temp_v4;
    }
    if ((in_s2 < 1.0f) && (temp_v5 < in_s2)) {
      temp_v5 = in_s2;
    }
    temp_v2 = VectorFloatToUnsigned(temp_v5 * 255.0f + 0.5f,3);
    FUN_00406768(*(unsigned int *)(DAT_0056fcc0 + 4),(int)*(short *)(param_1 + 0xac),
                 (temp_v1 << 0x18) | ((temp_v3 & 0xff) << 0x10) | ((temp_v2 & 0xff) << 8) | 0xff);
    return;
  }
  return;
}
