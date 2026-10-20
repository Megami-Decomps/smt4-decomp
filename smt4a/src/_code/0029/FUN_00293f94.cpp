/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00293f94` (_code @ 0x293f94, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorSignedToFloat(int, int);

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


void FUN_00293f94(void)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  unsigned int in_fpscr;
  float in_s0;
  
  for (; (int)in_s0 >= 0x43b40000; in_s0 = in_s0 - 360.0f) {
  }
  temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= in_s0) << 0x1d);
  temp_v1 = (unsigned char)(temp_v0 >> 0x18);
  while (!(unsigned char)(temp_v1 >> 5)) {
    in_s0 = in_s0 + 360.0f;
    temp_v0 = (temp_v0 & 0xfffffff) | ((unsigned int)(0.0f <= in_s0) << 0x1d);
    temp_v1 = (unsigned char)(temp_v0 >> 0x18);
  }
  VectorSignedToFloat((int)((in_s0 + 5.625f) / 11.25f),(unsigned char)(temp_v0 >> 0x16) & 3);
  return;
}

} /* extern "C" */
