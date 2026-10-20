/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a9698` (_code @ 0x1a9698, 0x76c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001015aa(int);
int FUN_001c4360(void);
int VectorSignedToFloat(...);

extern unsigned char DAT_0054f0fc; /* 0x54f0fc */

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern unsigned int ARM_fpclassifyf(float);
/* Supplied declaration required: FUN_001015aa. */
/* Supplied declaration required: FUN_001c4360. */
extern unsigned int FUN_001cd32c(float);


float FUN_001a9698(void)

{
/* irregular: 4 goto(s); irregular input(s): in_fpscr, in_s0, in_s1; 6 native warning(s); review required */
  int temp_v0;
  float temp_v1;
  float temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8;
  unsigned int in_fpscr;
  float in_s0;
  float in_s1;
  float temp_v9;
  unsigned int temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  
  temp_v4 = 0;
  temp_v16 = 1.0f;
  temp_v5 = (int)in_s1 * 2 + 0x2000000;
  temp_v2 = in_s1;
  if (0x7effffff >= (int)in_s0 - 0x800000U) {
    if (temp_v5 >= 0x40000000) goto LAB_001a99c8;
LAB_001a9790:
    temp_v5 = (int)in_s1 * 2 + 0x2000000;
    if (temp_v5 >= 0x2000000) {
      in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(in_s1 == 0.0f) << 0x1e);
      if (romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
        temp_v8 = romwright_fabs_4(in_s0) == 0.0f;
        temp_v7 = 1;
        if (!temp_v8) {
          temp_v7 = (unsigned int)((int)in_s0 * 2) < 0xff000001;
          temp_v8 = (int)in_s0 * 2 == 0xff000000;
        }
        if (temp_v7 && !temp_v8) {
          return in_s1;
        }
      }
      else {
        in_s1 = (float)(((unsigned int)in_s1 & 0x80000000) | 0x1f800000);
        temp_v2 = in_s1;
      }
    }
    else if (temp_v5 < 0x1000000) {
      temp_v2 = (float)((int)in_s1 - 0x800000);
    }
    else {
LAB_001a97e4:
      if (((int)romwright_fabs_4(in_s0) + 0x807fffffU < 0x3fffff) || ((int)romwright_fabs_4(in_s1) + 0x807fffffU < 0x3fffff))
      {
        return in_s1;
      }
      if (in_s0 == 1.0f) {
        return in_s1;
      }
      if (romwright_fabs_4(in_s1) == 0.0f) {
        return in_s1;
      }
      if ((unsigned int)romwright_fabs_4(in_s0) >= 0x7f800001) {
        return in_s1;
      }
      if ((unsigned int)romwright_fabs_4(in_s1) >= 0x7f800001) {
        return in_s1;
      }
      if (in_s0 == INFINITY) {
        if (((unsigned int)in_s1 & 0x80000000) != 0) {
          return in_s1;
        }
        return in_s1;
      }
      temp_v5 = (unsigned int)romwright_fabs_4(in_s1) >> 0x17;
      if (temp_v5 >= 0x7f) {
        if (temp_v5 < 0x97) {
          temp_v5 = 1 << ((0x96 - temp_v5) & 0xff);
          if (((temp_v5 - 1) & (unsigned int)in_s1) != 0) {
            temp_v4 = 0;
          }
          else if ((temp_v5 & (unsigned int)in_s1) == 0) {
            temp_v4 = 2;
          }
          else {
            temp_v4 = 1;
          }
        }
        else {
          temp_v4 = 2;
        }
      }
      else {
        temp_v4 = 0;
      }
      if (in_s0 != -INFINITY) {
        if (in_s0 != 0.0f) {
          if (in_s0 != -0.0f) {
            if (in_s0 == -1.0f) {
              return in_s1;
            }
            temp_v2 = (float)(((int)in_s1 >> 0x1f) + 1);
            if ((float)(unsigned int)((unsigned int)((int)in_s0 * 2) >= 0x7f000000) != temp_v2) {
              return temp_v2;
            }
            return temp_v2;
          }
          if (in_s1 == INFINITY) {
            return INFINITY;
          }
          if (in_s1 != -INFINITY) {
            if (((unsigned int)in_s1 & 0x80000000) == 0) {
              if (temp_v4 == 0) {
                return in_s1;
              }
              if (temp_v4 != 1) {
                return in_s1;
              }
              return in_s1;
            }
            if ((temp_v4 != 0) && (temp_v4 == 1)) {
              temp_v2 = (float)FUN_001015aa(2);
              return temp_v2;
            }
          }
        }
        else if (((unsigned int)in_s1 & 0x80000000) == 0) {
          return in_s1;
        }
        temp_v2 = (float)FUN_001015aa(2);
        return temp_v2;
      }
      if (((unsigned int)in_s1 & 0x80000000) == 0) {
        if (temp_v4 != 1) {
          return in_s1;
        }
        return in_s1;
      }
      if (temp_v4 != 1) {
        return in_s1;
      }
      return in_s1;
    }
  }
  else if (temp_v5 < 0x40000000) goto LAB_001a9790;
  if ((int)in_s0 + 0x7f800000U < 0x7f000000) {
LAB_001a96f8:
    in_s0 = romwright_fabs_4(in_s0);
    temp_v5 = (unsigned int)romwright_fabs_4(in_s1) >> 0x17;
    if (temp_v5 < 0x7f) {
      temp_v2 = (float)FUN_001015aa(1);
      return temp_v2;
    }
    if (temp_v5 < 0x97) {
      temp_v5 = 1 << ((0x96 - temp_v5) & 0xff);
      if (((temp_v5 - 1) & (unsigned int)in_s1) != 0) {
        temp_v2 = (float)FUN_001015aa(1);
        return temp_v2;
      }
      if (((unsigned int)in_s1 & temp_v5) != 0) {
        temp_v16 = -1.0f;
      }
    }
  }
  else {
    temp_v8 = romwright_fabs_4(in_s0) == 0.0f;
    temp_v7 = 1;
    if (!temp_v8) {
      temp_v7 = (unsigned int)((int)in_s0 * 2) < 0x1000001;
      temp_v8 = (int)in_s0 * 2 == 0x1000000;
    }
    if (!(!temp_v7 || temp_v8)) {
      temp_v4 = -0x1b;
      in_s0 = in_s0 * 1.3421773e+08f;
      if (((unsigned int)in_s0 & 0x80000000) != 0) goto LAB_001a96f8;
    }
    else if ((int)in_s0 - 0x800000U >= 0x7f000000) goto LAB_001a97e4;
  }
LAB_001a99c8:
  temp_v13 = 0.5f;
  if ((int)in_s0 + 0xc0801000U < 0x2001) {
    temp_v1 = in_s0 - 1.0f;
    temp_v11 = temp_v1 * -0.0028168457f +
             -(temp_v1 * temp_v1 * (0.5f - temp_v1 * (0.33333334f - temp_v1 * 0.25f))) * 23.08312f;
    temp_v9 = (float)(((int)(temp_v1 * 23.085938f + temp_v11) + 0x800U) & 0xfffff000);
    temp_v11 = (temp_v1 * 23.085938f - temp_v9) + temp_v11;
  }
  else {
    temp_v5 = ((int)in_s0 + 0x40000U) >> 0x13;
    temp_v3 = temp_v5 & 0xf;
    temp_v6 = ((temp_v5 & 0xfff) >> 4) - 0x7f;
    temp_v9 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v11 = (float)((int)in_s0 + temp_v6 * -0x800000);
    temp_v12 = temp_v9 * 0.0625f + 1.0f;
    temp_v9 = (float)(((int)(temp_v11 + temp_v12) + 0x800U) & 0xfffff000);
    temp_v14 = 1.0f / (temp_v11 + temp_v12);
    temp_v1 = (float)(((int)((temp_v11 - temp_v12) * temp_v14) + 0x800U) & 0xfffff000);
    temp_v14 = (((temp_v11 - temp_v12) - temp_v1 * temp_v9) - temp_v1 * ((temp_v12 - temp_v9) + temp_v11)) * temp_v14;
    temp_v9 = (temp_v1 + temp_v14) * (temp_v1 + temp_v14);
    temp_v11 = temp_v14 * 1.0f + (temp_v9 * 0.20008275f + 0.33333334f) * temp_v9 * (temp_v1 + temp_v14);
    temp_v9 = (float)(((int)(temp_v1 * 1.0f + temp_v11) + 0x800U) & 0xfffff000);
    temp_v11 = temp_v9 * -0.0056336913f + ((temp_v1 * 1.0f - temp_v9) + temp_v11) * 46.16624f;
    temp_v1 = (float)(((int)(temp_v9 * 46.171875f + temp_v11) + 0x800U) & 0xfffff000);
    temp_v11 = (temp_v9 * 46.171875f - temp_v1) + temp_v11;
    temp_v0 = temp_v3 * 8;
    temp_v15 = *(float *)(temp_v0 + 0x54f07c);
    temp_v14 = *(float *)(temp_v0 + 0x54f080);
    temp_v12 = (float)VectorSignedToFloat((temp_v6 + temp_v4) * 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v9 = (float)(((int)(temp_v11 + temp_v14 + temp_v1 + temp_v15 + temp_v12) + 0x800U) & 0xfffff000);
    temp_v11 = temp_v11 - ((((temp_v9 - temp_v12) - temp_v15) - temp_v1) - temp_v14);
  }
  temp_v1 = (float)(((int)temp_v2 + 0x800U) & 0xfffff000);
  temp_v11 = temp_v9 * (temp_v2 - temp_v1) + temp_v11 * (temp_v1 + (temp_v2 - temp_v1));
  temp_v2 = (float)(((int)(temp_v9 * temp_v1 + temp_v11) + 0x800U) & 0xfffff000);
  temp_v11 = (temp_v9 * temp_v1 - temp_v2) + temp_v11;
  temp_v9 = temp_v2 + temp_v11;
  temp_v5 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= temp_v9) << 0x1d);
  if (!romwright_subpiece_4_1_0(temp_v5 >> 0x1d,0)) {
    temp_v13 = -0.5f;
  }
  temp_v10 = (unsigned int)(temp_v13 + temp_v9);
  temp_v9 = (float)VectorSignedToFloat((int)temp_v10 >> 4,(unsigned char)(temp_v5 >> 0x16) & 3);
  temp_v3 = temp_v10 & 0xf;
  temp_v13 = (float)VectorSignedToFloat(temp_v10,(unsigned char)(temp_v5 >> 0x16) & 3);
  temp_v11 = (temp_v2 - temp_v13) + temp_v11;
  temp_v2 = romwright_fabs_4(temp_v9);
  if (temp_v2 < 126.0f) {
    temp_v2 = (float)FUN_001cd32c((temp_v9 + 127.0f) * 8388608.0f);
    return temp_v2;
  }
  temp_v13 = 1.5845633e+29f;
  if (192.0f > temp_v2) {
    temp_v4 = (int)temp_v9 / 2;
    temp_v2 = (float)(((int)temp_v9 - temp_v4) * 0x800000 + 0x3f800000);
    temp_v9 = (float)(temp_v4 * 0x800000 + 0x3f800000) *
             temp_v16 * (*(float *)(temp_v3 * 4 + 0x54f13c) +
                       *(float *)(temp_v3 * 4 + 0x54f17c) *
                       (temp_v11 * (temp_v11 * 1.35512055e-05f + 0.0009384123f) + 0.0433217f) * temp_v11 +
                      *(float *)(&DAT_0054f0fc + temp_v3 * 4)) * temp_v2;
    if (romwright_fabs_4(temp_v9) == INFINITY) {
      FUN_001015aa(2);
      return (float)(((unsigned int)temp_v16 & 0x80000000) | (unsigned int)romwright_fabs_4(temp_v13 * temp_v13));
    }
    if (romwright_fabs_4(temp_v9) != 0.0f) {
      temp_v2 = (float)ARM_fpclassifyf(temp_v9);
      if (temp_v2 == 5.60519e-45f) {
        temp_v2 = (float)FUN_001c4360();
      }
      return temp_v2;
    }
  }
  else if (0.0f <= temp_v9) {
    FUN_001015aa(2);
    return (float)(((unsigned int)temp_v16 & 0x80000000) | (unsigned int)romwright_fabs_4(temp_v13 * temp_v13));
  }
  FUN_001015aa(2);
  FUN_001c4360();
  return (float)(((unsigned int)temp_v16 & 0x80000000) | (unsigned int)romwright_fabs_4(temp_v2));
}

} /* extern "C" */
