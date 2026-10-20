/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034266c` (_code @ 0x34266c, 0x288 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorSignedToFloat(unsigned int, int);

/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
extern int FUN_002bf4f8(unsigned int, unsigned int);


void FUN_0034266c(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int in_fpscr;
  unsigned int temp_v3;
  unsigned int temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  
  temp_v8 = 1.0f;
  temp_v5 = *(float *)(param_1 + 0x124) + 1.0f;
  *(float *)(param_1 + 0x124) = temp_v5;
  if ((int)temp_v5 >= 0x41f00000) {
    *(float *)(param_1 + 0x124) = temp_v5 - 30.0f;
  }
  temp_v5 = *(float *)(param_1 + 0x128) + 12.0f;
  *(float *)(param_1 + 0x128) = temp_v5;
  if ((int)temp_v5 >= 0x43b40001) {
    *(float *)(param_1 + 0x128) = temp_v5 - 360.0f;
  }
  temp_v5 = *(float *)(param_1 + 0xe8);
  temp_v6 = *(float *)(param_1 + 0xec);
  if (*(char *)(param_1 + 0xe5) != '\0') {
    if (temp_v5 < temp_v6) {
      *(float *)(param_1 + 0xe8) = temp_v5 + 1.0f;
      if (temp_v6 <= temp_v5 + 1.0f) {
        *(unsigned int *)(param_1 + 0xe8) = 0;
      }
    }
  }
  else if (temp_v5 < temp_v6) {
    temp_v5 = temp_v5 + 1.0f;
    *(float *)(param_1 + 0xe8) = temp_v5;
    temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v5 < temp_v6) << 0x1f);
    temp_v3 = temp_v4 | ((unsigned int)((temp_v5 != temp_v5) || (temp_v6 != temp_v6)) << 0x1c);
    if ((unsigned char)(temp_v4 >> 0x1f) == ((unsigned char)(temp_v3 >> 0x1c) & 1)) {
      *(unsigned char *)(param_1 + 0xe5) = 1;
      temp_v1 = 0;
      *(unsigned int *)(param_1 + 0xf4) = 0x43c80000;
      *(unsigned int *)(param_1 + 0xf0) = 0x43c80000;
      temp_v0 = 0;
      do {
        temp_v2 = temp_v1 + 1;
        temp_v0 = temp_v0 + 2;
        *(unsigned int *)(param_1 + temp_v1 * 4 + 0x100) = 0x3f800000;
        temp_v1 = temp_v1 + 2;
        *(unsigned int *)(param_1 + temp_v2 * 4 + 0x100) = 0x3f800000;
      } while (temp_v0 < 8);
      *(unsigned int *)(param_1 + 0xe8) = 0;
      *(unsigned int *)(param_1 + 0xec) = 0x42200000;
      return;
    }
    temp_v7 = *(float *)(param_1 + 0xf4) / temp_v6 + *(float *)(param_1 + 0xf0);
    *(float *)(param_1 + 0xf0) = temp_v7;
    if (*(int *)(param_1 + 0xfc) != 0) {
      temp_v0 = FUN_002bf4f8(0x14,0x37);
      if (*(int *)(param_1 + 0xfc) < 8) {
        temp_v6 = *(float *)(param_1 + 0xf4) - *(float *)(param_1 + 0xf0);
        temp_v5 = (float)VectorSignedToFloat((*(unsigned short *)(temp_v0 + 4) & 0xffff7fff) *
                                           *(int *)(param_1 + 0xfc),(unsigned char)(temp_v3 >> 0x16) & 3);
        temp_v5 = *(float *)(param_1 + 0xd8) - temp_v5;
        temp_v4 = (temp_v3 & 0xfffffff) | ((unsigned int)(temp_v5 < temp_v6) << 0x1f);
        if (romwright_subpiece_4_1_0(temp_v4 >> 0x1f,0) == ((temp_v5 != temp_v5) || (temp_v6 != temp_v6))) {
          do {
            temp_v1 = *(int *)(param_1 + 0xfc) + 1;
            *(int *)(param_1 + 0xfc) = temp_v1;
            if (temp_v1 >= 8) break;
            temp_v5 = (float)VectorSignedToFloat((*(unsigned short *)(temp_v0 + 4) & 0xffff7fff) * temp_v1,
                                               (unsigned char)(temp_v4 >> 0x16) & 3);
            temp_v5 = *(float *)(param_1 + 0xd8) - temp_v5;
            temp_v4 = (temp_v4 & 0xfffffff) | ((unsigned int)(temp_v5 < temp_v6) << 0x1f);
          } while (romwright_subpiece_4_1_0(temp_v4 >> 0x1f,0) == ((temp_v5 != temp_v5) || (temp_v6 != temp_v6)));
        }
      }
    }
    else if (*(float *)(param_1 + 0xf4) - temp_v7 <= *(float *)(param_1 + 0xd8)) {
      *(unsigned int *)(param_1 + 0xfc) = 1;
      *(float *)(param_1 + 0xf8) = 1.0f / ((temp_v6 - temp_v5) * 0.125f);
    }
    temp_v0 = *(int *)(param_1 + 0xfc);
    if (*(char *)(param_1 + 0xe4) != '\0') {
      if (0 < temp_v0) {
        temp_v1 = 0;
        do {
          temp_v2 = param_1 + temp_v1 * 4;
          temp_v1 = temp_v1 + 1;
          temp_v5 = *(float *)(temp_v2 + 0x100) + *(float *)(param_1 + 0xf8);
          *(float *)(temp_v2 + 0x100) = temp_v5;
          if ((int)temp_v5 >= 0x3f800001) {
            temp_v5 = temp_v8;
          }
          temp_v0 = temp_v0 - 1;
          *(float *)(temp_v2 + 0x100) = temp_v5;
        } while (temp_v0 != 0);
        return;
      }
    }
    else if (0 < temp_v0) {
      temp_v1 = 0;
      do {
        temp_v2 = param_1 + (7 - temp_v1) * 4;
        temp_v1 = temp_v1 + 1;
        temp_v5 = *(float *)(temp_v2 + 0x100) + *(float *)(param_1 + 0xf8);
        *(float *)(temp_v2 + 0x100) = temp_v5;
        if ((int)temp_v5 >= 0x3f800001) {
          temp_v5 = temp_v8;
        }
        temp_v0 = temp_v0 - 1;
        *(float *)(temp_v2 + 0x100) = temp_v5;
      } while (temp_v0 != 0);
      return;
    }
  }
  return;
}

} /* extern "C" */
