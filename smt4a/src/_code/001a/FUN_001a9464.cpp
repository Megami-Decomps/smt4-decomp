/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a9464` (_code @ 0x1a9464, 0x1e4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001015aa(int);
int FUN_001c4360(void);
int VectorFloatToUnsigned(double, int);
int VectorSignedToFloat(...);

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
extern int ARM_fpclassifyf(float);
/* Supplied declaration required: FUN_001015aa. */
/* Supplied declaration required: FUN_001c4360. */


void FUN_001a9464(void)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 6 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int in_fpscr;
  float in_s0;
  unsigned int temp_v3;
  float temp_v4;
  
  temp_v0 = 0;
  if ((int)in_s0 * 2 + 0x99000000U >= 0x1e500001) {
    if ((~(unsigned int)in_s0 & 0x7fffffff) >> 0x17 == 0) {
      return;
    }
    if ((unsigned int)((int)in_s0 * 2) < 0x67000000) {
      return;
    }
    if (0x85a00000 < (unsigned int)((int)in_s0 << 1)) {
      FUN_001015aa(2);
      if (((unsigned int)in_s0 & 0x80000000) == 0) {
        return;
      }
      FUN_001c4360();
      return;
    }
    temp_v0 = 1;
  }
  if (((unsigned int)in_s0 & 0x80000000) == 0) {
    temp_v4 = 0.5f;
  }
  else {
    temp_v4 = -0.5f;
  }
  temp_v3 = (unsigned int)(temp_v4 + in_s0 * 5.77078f);
  temp_v2 = temp_v3 & 3;
  temp_v4 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v4 = (in_s0 - temp_v4 * 0.17327881f) - temp_v4 * 7.986546e-06f;
  temp_v1 = (int)temp_v3 >> 2;
  if (!temp_v0) {
    temp_v4 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorFloatToUnsigned(temp_v4 * 8388608.0f + 1.0653532e+09f,3);
    return;
  }
  temp_v4 = (float)((temp_v1 - temp_v1 / 2) * 0x800000 + 0x3f800000) *
          (float)((temp_v1 / 2) * 0x800000 + 0x3f800000) *
          (*(float *)(temp_v2 * 4 + 0x54f01c) +
           *(float *)(temp_v2 * 4 + 0x54f02c) *
           (temp_v4 * (temp_v4 * (temp_v4 * 0.04168231f + 0.16672924f) + 0.49999997f) + 0.99999994f) * temp_v4 +
          *(float *)(temp_v2 * 4 + 0x54f00c));
  if (temp_v4 == 0.0f) {
    FUN_001015aa(2);
    FUN_001c4360();
    return;
  }
  if (temp_v4 == INFINITY) {
    FUN_001015aa(2);
    return;
  }
  temp_v1 = ARM_fpclassifyf(temp_v4);
  if (temp_v1 == 4) {
    FUN_001c4360();
  }
  return;
}

} /* extern "C" */
