/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033a7f8` (_code @ 0x33a7f8, 0x45c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_0019d934; /* 0x19d934 */
extern unsigned int DAT_0043427c; /* 0x43427c */

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
extern int FUN_0027d9e8(int, unsigned int);
/* Supplied declaration required: FUN_0027da30. */
extern int FUN_0027e928(unsigned int);
/* Supplied declaration required: FUN_002b7bca. */
/* Supplied declaration required: FUN_002c4938. */


/* WARNING: Type propagation algorithm not settling */

unsigned int FUN_0033a7f8(int param_1,float *param_2,unsigned int param_3)

{
/* irregular: 3 goto(s); irregular input(s): in_fpscr; 8 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  float temp_v6;
  unsigned int temp_v7;
  float temp_v8;
  unsigned int in_fpscr;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  unsigned long long temp_v14;
  float temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned long long temp_v18;
  int aiStack_104 [57];
  
  temp_v3 = 0;
  temp_v16 = 0;
  if (*(int *)(param_1 + 0x1fbc) != 0) {
    do {
      temp_v1 = 0;
      temp_v5 = *(int *)(param_1 + 0x1fbc);
      do {
        if (*(short *)(temp_v5 + temp_v1 * 0x18 + 2) == temp_v3) {
          temp_v1 = temp_v1 * 0x18;
LAB_0033a884:
          temp_v5 = temp_v5 + temp_v1;
          if ((temp_v5 != 0) &&
             (in_fpscr = (in_fpscr & 0xfffffff) |
                         ((unsigned int)(*(float *)(temp_v5 + 0xc) == *param_2) << 0x1e),
             romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0))) {
            temp_v6 = *(float *)(temp_v5 + 0xc);
            temp_v8 = *(float *)(temp_v5 + 0x10);
            param_2[5] = *(float *)(temp_v5 + 0x14);
            param_2[3] = temp_v6;
            param_2[4] = temp_v8;
            return 1;
          }
          break;
        }
        if (*(short *)(temp_v5 + temp_v1 * 0x18 + 0x1a) == temp_v3) {
          temp_v1 = temp_v1 * 0x18 + 0x18;
          goto LAB_0033a884;
        }
        temp_v1 = temp_v1 + 2;
      } while (temp_v1 < 0x32);
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x32);
  }
  temp_v3 = param_1;
  temp_v17 = temp_v16;
  FUN_0027da30(param_1,(int)*(short *)((int)param_2 + 0x62));
  temp_v3 = FUN_0027d9e8(param_1,*(unsigned int *)(temp_v3 + 0xc));
  if (temp_v3 == 0) {
    return 0;
  }
  temp_v6 = param_2[0x10];
  temp_v15 = 2.5f;
  temp_v2 = (unsigned int)*(unsigned short *)(*(int *)(temp_v3 + 0x10) + 0x24);
  temp_v10 = (float)VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v8 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(temp_v3 + 0x10) + 0x20),
                                     (unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v9 = (float)VectorUnsignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v18 = CONCAT44(temp_v17,temp_v6 * temp_v8);
  temp_v14 = CONCAT44(temp_v10 * temp_v6 + temp_v6 * 2.5f,temp_v16);
  temp_v6 = (temp_v9 - temp_v8) * temp_v6;
  FUN_002c4938(aiStack_104 + 1,200);
  temp_v2 = 0;
  temp_v3 = 0;
  do {
    temp_v1 = *(int *)(param_1 + 0x1e98) + temp_v3 * 0x114 + 0x450;
    temp_v7 = *(unsigned int *)(temp_v1 + 0x50);
    if (((((temp_v7 & 1) != 0 && (temp_v7 & 2) != 0) && (temp_v7 & 0x80) != 0) && ((temp_v7 & 0x10) == 0))
       && (*(short *)(temp_v1 + 0x62) != *(short *)((int)param_2 + 0x62))) {
      aiStack_104[temp_v2 + 1] = temp_v1;
      temp_v2 = temp_v2 + 1;
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x32);
  FUN_002b7bca(aiStack_104 + 1,temp_v2,4,&LAB_0019d934);
  if ((param_3 & 0x10000) != 0) {
    temp_v10 = -20.0f;
    temp_v9 = 20.0f;
    if (temp_v2 != 0xffffffff) {
      temp_v10 = 20.0f;
    }
    temp_v7 = 0;
    if (temp_v2 != 0xffffffff) {
      do {
        if (temp_v7 == temp_v2) {
          temp_v5 = aiStack_104[temp_v7];
          temp_v3 = param_1;
          FUN_0027da30(param_1,(int)*(short *)(temp_v5 + 0x62));
          temp_v1 = 0;
          do {
            temp_v4 = *(int *)(param_1 + temp_v1 * 4 + 0x2134);
            if ((temp_v4 != 0) && (*(int *)(temp_v4 + 4) == *(int *)(temp_v3 + 0xc))) {
              temp_v3 = *(int *)(param_1 + temp_v1 * 4 + 0x2134);
              goto LAB_0033aa48;
            }
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < 0x2a);
          temp_v3 = 0;
LAB_0033aa48:
          temp_v11 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(temp_v3 + 0x10) + 0x20),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v12 = (float)VectorUnsignedToFloat
                                    ((unsigned int)*(unsigned short *)(*(int *)(temp_v3 + 0x10) + 0x24),
                                     (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v8 = romwright_fabs_4(*(float *)(temp_v5 + 0xc)) - temp_v9;
          temp_v13 = (float)(temp_v14 >> 0x20);
          temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v8 < temp_v13) << 0x1f);
          in_fpscr = temp_v0 | ((unsigned int)(NAN(temp_v8) || NAN(temp_v13)) << 0x1c);
          if ((unsigned char)(temp_v0 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
            temp_v8 = (temp_v12 - temp_v11) * *(float *)(temp_v5 + 0x40) + *(float *)(temp_v5 + 0x40) * temp_v15
                    + (float)temp_v18;
            temp_v6 = *(float *)(temp_v5 + 0xc);
            temp_v14 = (unsigned long long)(unsigned int)(temp_v6 + temp_v8);
            break;
          }
        }
        else {
          temp_v5 = aiStack_104[temp_v7 + 1];
          temp_v3 = param_1;
          FUN_0027da30(param_1,(int)*(short *)(temp_v5 + 0x62));
          temp_v1 = 0;
          do {
            temp_v4 = *(int *)(param_1 + temp_v1 * 4 + 0x2134);
            if ((temp_v4 != 0) && (*(int *)(temp_v4 + 4) == *(int *)(temp_v3 + 0xc))) {
              temp_v3 = *(int *)(param_1 + temp_v1 * 4 + 0x2134);
              goto LAB_0033ab28;
            }
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < 0x2a);
          temp_v3 = 0;
LAB_0033ab28:
          temp_v8 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(temp_v3 + 0x10) + 0x20),
                                             (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v8 = *(float *)(temp_v5 + 0x40) * temp_v8 + *(float *)(temp_v5 + 0x40) * temp_v15;
          temp_v11 = (float)(temp_v14 >> 0x20);
          if ((int)temp_v7 >= 1) {
            temp_v12 = romwright_fabs_4(*(float *)(aiStack_104[temp_v7] + 0xc)) - romwright_fabs_4(*(float *)(temp_v5 + 0xc));
            temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v12 < temp_v11) << 0x1f);
            in_fpscr = temp_v0 | ((unsigned int)(NAN(temp_v12) || NAN(temp_v11)) << 0x1c);
            if ((unsigned char)(temp_v0 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
              temp_v8 = *(float *)(temp_v5 + 0xc) - temp_v8;
              temp_v14 = (unsigned long long)(unsigned int)(temp_v8 - temp_v6);
              break;
            }
          }
          else {
            temp_v12 = temp_v10 - romwright_fabs_4(*(float *)(temp_v5 + 0xc));
            temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v12 < temp_v11) << 0x1f);
            in_fpscr = temp_v0 | ((unsigned int)(NAN(temp_v12) || NAN(temp_v11)) << 0x1c);
            if ((unsigned char)(temp_v0 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
              temp_v14 = (unsigned long long)(unsigned int)((*(float *)(temp_v5 + 0xc) - temp_v8) - temp_v6);
              break;
            }
          }
        }
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < temp_v2 + 1);
    }
  }
  else {
    temp_v3 = FUN_0027e928(DAT_0043427c);
    temp_v3 = *(int *)(temp_v3 + 0x24);
    if (temp_v3 == 0) {
      return 0;
    }
    temp_v1 = param_1;
    FUN_0027da30(param_1,(int)*(short *)(temp_v3 + 0x62));
    temp_v1 = FUN_0027d9e8(param_1,*(unsigned int *)(temp_v1 + 0xc));
    if (temp_v1 == 0) {
      return 0;
    }
    temp_v8 = *(float *)(temp_v3 + 0x40);
    temp_v9 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(temp_v1 + 0x10) + 0x20),
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v10 = (float)VectorUnsignedToFloat
                              ((unsigned int)*(unsigned short *)(*(int *)(temp_v1 + 0x10) + 0x24),
                               (unsigned char)(in_fpscr >> 0x16) & 3);
    if ((param_3 & 0x20000) != 0) {
      temp_v8 = *(float *)(temp_v3 + 0xc) - (temp_v8 * temp_v9 + temp_v8 * temp_v15);
      temp_v14 = (unsigned long long)(unsigned int)(temp_v8 - temp_v6);
    }
    else if ((param_3 & 0x40000) != 0) {
      temp_v6 = *(float *)(temp_v3 + 0xc);
      temp_v8 = (temp_v10 - temp_v9) * temp_v8 + temp_v8 * temp_v15 + (float)temp_v18;
      temp_v14 = (unsigned long long)(unsigned int)(temp_v6 + temp_v8);
    }
  }
  temp_v6 = (float)((unsigned long long)temp_v18 >> 0x20);
  param_2[3] = (float)temp_v14;
  param_2[4] = temp_v6;
  param_2[5] = temp_v6;
  return 1;
}
