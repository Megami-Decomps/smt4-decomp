/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003eb334` (_code @ 0x3eb334, 0x184 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002a464e. */


void FUN_003eb334(void)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 4 native warning(s); review required */
  int temp_v0;
  unsigned int in_fpscr;
  float in_s0;
  
  temp_v0 = 0;
  if ((int)in_s0 - 0x800000U >= 0x7f000000) {
    if (0xff000000 < (unsigned int)((int)in_s0 << 1)) {
      return;
    }
    if (in_s0 == INFINITY) {
      return;
    }
    if (in_s0 < 0.0f) {
      FUN_002a464e(1);
      return;
    }
    in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(in_s0 == 0.0f) << 0x1e);
    if (romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
      FUN_002a464e(2);
      return;
    }
    temp_v0 = -0x17;
    in_s0 = in_s0 * 8388608.0f;
  }
  temp_v0 = temp_v0 + ((((int)in_s0 + 0x80000) >> 0x17) - 0x7f);
  if (temp_v0 == 0 && ((int)in_s0 * 0x200 + 0x10000000U) >> 0x1d == 0) {
    return;
  }
  VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  return;
}
