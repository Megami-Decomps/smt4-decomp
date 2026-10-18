/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024afec` (_code @ 0x24afec, 0x818 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0024afec_arg0 fn_0024afec_arg0;
struct fn_0024afec_arg0 {
    unsigned char pad_0x0[0x4];
    int field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x10];
    int field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0x4];
    void *field_0x20; /* +0x20 */
};

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
} param_2_stack;

extern float DAT_004ea91c; /* 0x4ea91c */
extern float DAT_004ea920; /* 0x4ea920 */
extern float DAT_004ea924; /* 0x4ea924 */
extern float DAT_004ea928; /* 0x4ea928 */
extern float DAT_004ea92c; /* 0x4ea92c */
extern float DAT_004ea930; /* 0x4ea930 */
extern float DAT_004ea934; /* 0x4ea934 */
extern float DAT_004ea938; /* 0x4ea938 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_00207554. */


void FUN_0024afec(fn_0024afec_arg0 *param_1,float *param_2)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  unsigned int temp_v0;
  float *pfVar5;
  unsigned int temp_v1;
  unsigned int temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  int temp_v7;
  float temp_v8;
  float temp_v9;
  unsigned int in_fpscr;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  int temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  unsigned int temp_v24;
  float temp_v25;
  unsigned long long temp_v26;
  float temp_v27;
  float temp_v28;
  unsigned long long temp_v29;
  float temp_v30;
  float temp_v31;
  float fStack_98;
  float fStack_94;
  float temp_v32;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float temp_v33;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float temp_v34;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  
  temp_v2 = *(unsigned int *)((int)param_1->field_0x20 + 0xc0);
  temp_v7 = *(int *)((int)param_1->field_0x20 + 0xc4);
  temp_v0 = temp_v2 * temp_v7;
  if (temp_v0 != 0) {
    temp_v3 = param_2[4];
    pfVar2 = (float *)(param_1->field_0x18 +
                      (((unsigned int)((int)param_2 - param_1->field_0x18) / 0x28) * temp_v0 +
                      param_1->field_0x4) * 0x28);
    if (temp_v3 != 0.0f) {
      pfVar2[4] = (float)((int)temp_v3 - 1);
      temp_v10 = (float)VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v25 = 0.0f;
      temp_v12 = (float)VectorUnsignedToFloat((unsigned int)param_2[5] >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
      pfVar3 = pfVar2 + (temp_v0 * 10 - 10);
      temp_v1 = 0;
      pfVar5 = pfVar3 + temp_v7 * -10;
      temp_v11 = temp_v25;
      if (temp_v0 - temp_v7 != 0) {
        do {
          temp_v16 = pfVar5[1];
          temp_v17 = pfVar5[2];
          temp_v18 = pfVar5[3];
          temp_v19 = pfVar5[4];
          temp_v20 = pfVar5[5];
          temp_v22 = pfVar5[6];
          temp_v23 = pfVar5[7];
          temp_v14 = temp_v12 * temp_v11;
          temp_v11 = temp_v11 + 1.0f / temp_v10;
          temp_v1 = temp_v1 + 1;
          *pfVar3 = *pfVar5;
          pfVar3[1] = temp_v16;
          pfVar3[2] = temp_v17;
          pfVar3[3] = temp_v18;
          pfVar3[4] = temp_v19;
          pfVar3[5] = temp_v20;
          pfVar3[6] = temp_v22;
          pfVar3[7] = temp_v23;
          temp_v15 = VectorFloatToUnsigned(temp_v14,3);
          temp_v14 = pfVar5[9];
          pfVar3[8] = pfVar5[8];
          pfVar3[9] = temp_v14;
          pfVar1 = pfVar5 + 5;
          pfVar5 = pfVar5 + -10;
          pfVar3[5] = (float)(((unsigned int)*pfVar1 & 0xffffff) | (temp_v15 << 0x18));
          pfVar3 = pfVar3 + -10;
        } while (temp_v1 < temp_v0 - temp_v7);
      }
      temp_v11 = param_2[1];
      temp_v12 = param_2[2];
      temp_v14 = param_2[3];
      temp_v16 = param_2[4];
      temp_v10 = param_2[5];
      temp_v17 = param_2[6];
      temp_v18 = param_2[7];
      *pfVar2 = *param_2;
      pfVar2[1] = temp_v11;
      pfVar2[2] = temp_v12;
      pfVar2[3] = temp_v14;
      pfVar2[4] = temp_v16;
      pfVar2[5] = temp_v10;
      pfVar2[6] = temp_v17;
      pfVar2[7] = temp_v18;
      temp_v11 = param_2[8];
      pfVar2[9] = param_2[9];
      pfVar2[8] = temp_v11;
      pfVar2[4] = -NAN;
      if ((temp_v7 != 1) && (temp_v2 >= 2)) {
        temp_v29 = 0x437f0000;
        if (((int)temp_v3 >= 2) && (temp_v2 >= 3)) {
          pfVar3 = pfVar2 + temp_v7 * 0x14;
          if (-1 < (int)pfVar3[4]) {
            temp_v30 = *pfVar3;
            temp_v31 = pfVar3[1];
            fStack_98 = pfVar3[2];
            fStack_94 = pfVar3[3];
            pfVar3 = pfVar2 + temp_v7 * 10;
            temp_v32 = *pfVar3;
            fStack_8c = pfVar3[1];
            fStack_88 = pfVar3[2];
            fStack_84 = pfVar3[3];
            temp_v18 = (float)VectorUnsignedToFloat(temp_v7 + 1,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v33 = *pfVar2;
            fStack_7c = pfVar2[1];
            fStack_78 = pfVar2[2];
            fStack_74 = pfVar2[3];
            temp_v34 = *pfVar2;
            fStack_6c = pfVar2[1];
            fStack_68 = pfVar2[2];
            fStack_64 = pfVar2[3];
            temp_v18 = 1.0f / temp_v18;
            temp_v11 = pfVar2[5];
            temp_v26 = *(unsigned long long *)(pfVar3 + 6);
            temp_v27 = pfVar2[6] - (float)temp_v26;
            temp_v28 = pfVar2[7] - (float)((unsigned long long)temp_v26 >> 0x20);
            temp_v23 = (float)VectorUnsignedToFloat((unsigned int)temp_v11 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3)
            ;
            temp_v22 = (float)VectorUnsignedToFloat
                                      (((unsigned int)temp_v11 & 0xffffff) >> 0x10,
                                       (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v20 = (float)VectorUnsignedToFloat((unsigned int)temp_v11 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v19 = (float)VectorUnsignedToFloat
                                      (((unsigned int)temp_v11 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v11 = pfVar3[5];
            temp_v17 = (float)VectorUnsignedToFloat((unsigned int)temp_v11 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v12 = (float)VectorUnsignedToFloat((unsigned int)temp_v11 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3)
            ;
            temp_v16 = (float)VectorUnsignedToFloat
                                      (((unsigned int)temp_v11 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v14 = (float)VectorUnsignedToFloat
                                      (((unsigned int)temp_v11 & 0xffffff) >> 0x10,
                                       (unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v17 = temp_v17 * 0.003921569f;
            temp_v12 = temp_v12 * 0.003921569f;
            temp_v16 = temp_v16 * 0.003921569f;
            temp_v14 = temp_v14 * 0.003921569f;
            temp_v10 = (float)(temp_v7 - 1);
            DAT_004ea92c = temp_v23 * 0.003921569f - temp_v12;
            temp_v11 = fStack_64;
            if (temp_v10 != 0.0f) {
              temp_v11 = temp_v10;
            }
            DAT_004ea930 = temp_v22 * 0.003921569f - temp_v14;
            DAT_004ea934 = temp_v19 * 0.003921569f - temp_v16;
            DAT_004ea938 = temp_v20 * 0.003921569f - temp_v17;
            DAT_004ea924 = temp_v18 * 1.0f;
            temp_v22 = 0.0f;
            temp_v13 = DAT_004ea924 * DAT_004ea92c;
            DAT_004ea920 = DAT_004ea924 * DAT_004ea930;
            DAT_004ea924 = DAT_004ea924 * DAT_004ea934;
            temp_v23 = temp_v18 * 0.0f * DAT_004ea938;
            DAT_004ea91c = temp_v13;
            DAT_004ea928 = temp_v23;
            temp_v19 = DAT_004ea920;
            temp_v20 = DAT_004ea924;
            if (temp_v10 != 0.0f) {
              do {
                temp_v25 = temp_v25 + temp_v18;
                FUN_00207554(&temp_v30);
                pfVar3[-7] = DAT_004ea928;
                pfVar3[-10] = DAT_004ea91c;
                pfVar3[-9] = DAT_004ea920;
                pfVar3[-8] = DAT_004ea924;
                pfVar3[-4] = (float)temp_v26 + temp_v27 * temp_v25;
                pfVar3[-3] = (float)((unsigned long long)temp_v26 >> 0x20) + temp_v28 * temp_v25;
                temp_v12 = temp_v12 + temp_v13;
                temp_v14 = temp_v14 + temp_v19;
                temp_v16 = temp_v16 + temp_v20;
                temp_v17 = temp_v17 + temp_v23;
                temp_v10 = (float)temp_v29;
                temp_v0 = VectorFloatToUnsigned(temp_v14 * temp_v10,3);
                temp_v7 = VectorFloatToUnsigned(temp_v12 * temp_v10,3);
                temp_v1 = VectorFloatToUnsigned(temp_v16 * temp_v10,3);
                temp_v2 = VectorFloatToUnsigned(temp_v17 * temp_v10,3);
                DAT_004ea91c = temp_v12;
                DAT_004ea920 = temp_v14;
                DAT_004ea924 = temp_v16;
                DAT_004ea928 = temp_v17;
                DAT_004ea92c = temp_v13;
                DAT_004ea930 = temp_v19;
                DAT_004ea934 = temp_v20;
                DAT_004ea938 = temp_v23;
                pfVar3[-5] = (float)((temp_v7 << 0x18) | ((temp_v0 & 0xff) << 0x10) |
                                     ((temp_v1 & 0xff) << 8) | (temp_v2 & 0xff));
                temp_v22 = (float)((int)temp_v22 + 1);
                pfVar3[-6] = temp_v3;
                pfVar3 = pfVar3 + -10;
              } while ((unsigned int)temp_v22 < (unsigned int)temp_v11);
            }
          }
        }
        else if ((0 < (int)temp_v3) && (pfVar3 = pfVar2 + temp_v7 * 10, -1 < (int)pfVar3[4])) {
          temp_v12 = (float)VectorUnsignedToFloat(temp_v7 + 1,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v28 = pfVar3[7];
          temp_v13 = pfVar3[6];
          temp_v22 = (float)VectorUnsignedToFloat((unsigned int)temp_v10 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v12 = 1.0f / temp_v12;
          temp_v27 = (float)VectorUnsignedToFloat
                                    (((unsigned int)temp_v10 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3)
          ;
          temp_v23 = (float)VectorUnsignedToFloat
                                    (((unsigned int)temp_v10 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v10 = (float)VectorUnsignedToFloat((unsigned int)temp_v10 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v11 = pfVar3[5];
          temp_v19 = (float)VectorUnsignedToFloat
                                    (((unsigned int)temp_v11 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v20 = (float)VectorUnsignedToFloat((unsigned int)temp_v11 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v14 = (float)VectorUnsignedToFloat((unsigned int)temp_v11 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v16 = (float)VectorUnsignedToFloat
                                    (((unsigned int)temp_v11 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3)
          ;
          temp_v19 = temp_v19 * 0.003921569f;
          temp_v20 = temp_v20 * 0.003921569f;
          temp_v14 = temp_v14 * 0.003921569f;
          temp_v16 = temp_v16 * 0.003921569f;
          DAT_004ea92c = temp_v22 * 0.003921569f - temp_v14;
          DAT_004ea930 = temp_v27 * 0.003921569f - temp_v16;
          DAT_004ea934 = temp_v23 * 0.003921569f - temp_v19;
          DAT_004ea938 = temp_v10 * 0.003921569f - temp_v20;
          temp_v11 = temp_v12 * 1.0f;
          temp_v0 = 0;
          temp_v22 = temp_v11 * DAT_004ea92c;
          temp_v23 = temp_v11 * DAT_004ea930;
          temp_v11 = temp_v11 * DAT_004ea934;
          temp_v10 = temp_v12 * 0.0f * DAT_004ea938;
          pfVar5 = pfVar3;
          DAT_004ea91c = temp_v22;
          DAT_004ea920 = temp_v23;
          DAT_004ea924 = temp_v11;
          DAT_004ea928 = temp_v10;
          if (temp_v7 != 1) {
            do {
              temp_v25 = temp_v25 + temp_v12;
              temp_v27 = *pfVar3;
              temp_v5 = pfVar3[1];
              temp_v8 = pfVar3[3];
              temp_v0 = temp_v0 + 1;
              temp_v4 = *pfVar2;
              temp_v6 = pfVar2[1];
              temp_v9 = pfVar2[3];
              temp_v21 = 1.0f - temp_v25;
              pfVar5[-8] = pfVar3[2] * temp_v21 + pfVar2[2] * temp_v25;
              pfVar5[-7] = temp_v8 * temp_v21 + temp_v9 * temp_v25;
              pfVar5[-4] = temp_v13 + (temp_v17 - temp_v13) * temp_v25;
              pfVar5[-3] = temp_v28 + (temp_v18 - temp_v28) * temp_v25;
              pfVar5[-10] = temp_v27 * temp_v21 + temp_v4 * temp_v25;
              pfVar5[-9] = temp_v5 * temp_v21 + temp_v6 * temp_v25;
              temp_v14 = temp_v14 + temp_v22;
              temp_v16 = temp_v16 + temp_v23;
              temp_v19 = temp_v19 + temp_v11;
              temp_v20 = temp_v20 + temp_v10;
              temp_v15 = VectorFloatToUnsigned(temp_v14 * 255.0f,3);
              temp_v2 = VectorFloatToUnsigned(temp_v16 * 255.0f,3);
              temp_v24 = VectorFloatToUnsigned(temp_v19 * 255.0f,3);
              temp_v1 = VectorFloatToUnsigned(temp_v20 * 255.0f,3);
              DAT_004ea91c = temp_v14;
              DAT_004ea920 = temp_v16;
              DAT_004ea924 = temp_v19;
              DAT_004ea928 = temp_v20;
              DAT_004ea92c = temp_v22;
              DAT_004ea930 = temp_v23;
              DAT_004ea934 = temp_v11;
              DAT_004ea938 = temp_v10;
              pfVar5[-5] = (float)((temp_v15 << 0x18) | ((temp_v2 & 0xff) << 0x10) |
                                   ((temp_v24 & 0xff) << 8) | (temp_v1 & 0xff));
              pfVar5[-6] = temp_v3;
              pfVar5 = pfVar5 + -10;
            } while (temp_v0 < temp_v7 - 1U);
            return;
          }
        }
      }
    }
    else {
      temp_v14 = param_2[1];
      temp_v3 = param_2[2];
      temp_v11 = param_2[3];
      temp_v10 = param_2[5];
      temp_v12 = param_2[6];
      temp_v25 = param_2[7];
      *pfVar2 = *param_2;
      pfVar2[1] = temp_v14;
      pfVar2[2] = temp_v3;
      pfVar2[3] = temp_v11;
      pfVar2[4] = 0.0f;
      pfVar2[5] = temp_v10;
      pfVar2[6] = temp_v12;
      pfVar2[7] = temp_v25;
      temp_v3 = param_2[9];
      pfVar2[8] = param_2[8];
      pfVar2[9] = temp_v3;
      pfVar3 = pfVar2 + -6;
      if ((temp_v0 & 1) != 0) {
        pfVar3 = pfVar2 + 4;
        *pfVar3 = -NAN;
      }
      temp_v0 = temp_v0 >> 1;
      if (temp_v0 != 0) {
        do {
          pfVar3[10] = -NAN;
          temp_v0 = temp_v0 - 1;
          pfVar3 = pfVar3 + 0x14;
          *pfVar3 = -NAN;
        } while (temp_v0 != 0);
        return;
      }
    }
  }
  return;
}
