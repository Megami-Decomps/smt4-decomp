/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0050d8e4` (_code @ 0x50d8e4, 0x210 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
extern int ARM_fpclassifyf(float);
/* Supplied declaration required: FUN_001c4360. */


void FUN_0050d8e4(void)

{
/* irregular: irregular input(s): in_s0, in_s1; 3 native warning(s); review required */
  float temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  float in_s0;
  float in_s1;
  float temp_v4;
  
  temp_v1 = 0xe8000000;
  temp_v3 = (int)in_s0 * 2 + 0xe8000000U < 0xe5000000;
  if (temp_v3) {
    temp_v1 = (int)in_s1 * 2 + 0xe8000000;
  }
  temp_v0 = in_s0;
  temp_v4 = in_s1;
  if (!temp_v3 || 0xe4ffffff < temp_v1) {
    if (0xff000000 < (unsigned int)((int)in_s0 << 1) || 0xff000000 < (unsigned int)((int)in_s1 << 1)) {
      return;
    }
    if ((((unsigned int)in_s0 | (unsigned int)in_s1) & 0x7fffffff) == 0) {
      in_s1 = (float)((unsigned int)in_s1 | 0x7f800000);
      temp_v4 = in_s1;
    }
    else if (romwright_fabs_4(in_s0) == INFINITY && romwright_fabs_4(in_s1) == INFINITY) {
      temp_v0 = (float)((unsigned int)in_s0 & 0xbfffffff);
      in_s1 = (float)((unsigned int)in_s1 & 0xbfffffff);
      in_s0 = temp_v0;
      temp_v4 = in_s1;
    }
    else if (romwright_fabs_4(in_s0) == INFINITY || romwright_fabs_4(in_s1) == 0.0f) {
      temp_v0 = (float)((unsigned int)in_s0 | 0x7f800000);
      in_s1 = (float)((unsigned int)in_s1 & 0x80000000);
    }
    else if (-1 < (int)(((unsigned int)in_s1 ^ (unsigned int)in_s0) << 1)) {
      if ((int)in_s1 * 2 < 0) {
        temp_v4 = 2.3283064e-10f;
      }
      else {
        temp_v4 = 4.2949673e+09f;
      }
      in_s1 = in_s1 * temp_v4;
      temp_v0 = in_s0 * temp_v4;
      in_s0 = in_s0 * temp_v4;
      temp_v4 = in_s1;
    }
  }
  temp_v2 = ((unsigned int)romwright_fabs_4(temp_v0) >> 0x17) - ((unsigned int)romwright_fabs_4(in_s1) >> 0x17);
  if (temp_v2 >= 0x1c) {
    return;
  }
  if (-0x1b < temp_v2) {
    return;
  }
  if (((unsigned int)in_s1 & 0x80000000) == 0) {
    temp_v2 = ARM_fpclassifyf(in_s0 / temp_v4);
    if (temp_v2 == 4) {
      FUN_001c4360();
    }
    return;
  }
  return;
}
