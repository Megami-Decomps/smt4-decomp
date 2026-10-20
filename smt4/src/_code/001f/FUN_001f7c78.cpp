/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f7c78` (_code @ 0x1f7c78, 0xc8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorSignedToFloat(unsigned int, int);

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */


void FUN_001f7c78(void)

{
/* irregular: irregular input(s): in_fpscr, in_s0, in_s1; 5 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int in_fpscr;
  unsigned int temp_v3;
  float in_s0;
  unsigned int temp_v4;
  float in_s1;
  unsigned int temp_v5;
  
  temp_v3 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= in_s0) << 0x1d);
  if ((!romwright_subpiece_4_1_0(temp_v3 >> 0x1d,0)) ||
     (temp_v3 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f < in_s1) << 0x1f) |
              ((unsigned int)(in_s1 == 0.0f) << 0x1e), temp_v0 = (unsigned char)(temp_v3 >> 0x18),
     !(unsigned char)((temp_v0 >> 6) & 1) && (unsigned char)(temp_v0 >> 7) == (in_s1 != in_s1))) {
    in_s0 = in_s0 + 360.0f;
    in_s1 = in_s1 + 360.0f;
  }
  temp_v4 = (unsigned int)in_s0;
  temp_v5 = (unsigned int)in_s1;
  temp_v1 = (int)(((long long)(int)temp_v4 * -0x49f49f49 + ((unsigned long long)temp_v4 << 0x20)) >> 0x20);
  temp_v2 = (int)(((long long)(int)temp_v5 * -0x49f49f49 + ((unsigned long long)temp_v5 << 0x20)) >> 0x20);
  VectorSignedToFloat(temp_v4 + ((temp_v1 >> 8) - (temp_v1 >> 0x1f)) * -0x168,(unsigned char)(temp_v3 >> 0x16) & 3);
  VectorSignedToFloat(temp_v5 + ((temp_v2 >> 8) - (temp_v2 >> 0x1f)) * -0x168,(unsigned char)(temp_v3 >> 0x16) & 3);
  return;
}

} /* extern "C" */
